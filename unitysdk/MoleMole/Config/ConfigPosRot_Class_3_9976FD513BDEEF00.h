#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ReferTargetCoordsOption.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicString; }
namespace MoleMole::Config { class OffsetGroup; }
namespace MoleMole::Config { class PosRotTargetOption; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGPOSROT_CLASS_3_9976FD513BDEEF00_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19AC7670)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_CLASS_3_9976FD513BDEEF00_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19AC7680)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_CLASS_3_9976FD513BDEEF00_WRITE_OFFSET UNITYSDK_OFFSET(0x19AC7D60)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_CLASS_3_9976FD513BDEEF00__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AC8190)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_CLASS_3_9976FD513BDEEF00__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC8150)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRot_Class_3_9976FD513BDEEF00_TypeDefinitionIndex = 89925;

	class ConfigPosRot_Class_3_9976FD513BDEEF00 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigPosRot*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicString*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicString*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRot_Class_3_9976FD513BDEEF00_TypeDefinitionIndex)->GetStaticField(0x517D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ReferTargetCoordsOption>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ReferTargetCoordsOption>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRot_Class_3_9976FD513BDEEF00_TypeDefinitionIndex)->GetStaticField(0x517D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::PosRotTargetOption*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::PosRotTargetOption*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRot_Class_3_9976FD513BDEEF00_TypeDefinitionIndex)->GetStaticField(0x517E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRot_Class_3_9976FD513BDEEF00_TypeDefinitionIndex)->GetStaticField(0x517E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::OffsetGroup*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::OffsetGroup*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRot_Class_3_9976FD513BDEEF00_TypeDefinitionIndex)->GetStaticField(0x517F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRot_Class_3_9976FD513BDEEF00_TypeDefinitionIndex)->GetStaticField(0x517F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_CLASS_3_9976FD513BDEEF00__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_CLASS_3_9976FD513BDEEF00__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_CLASS_3_9976FD513BDEEF00_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigPosRot*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigPosRot*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_CLASS_3_9976FD513BDEEF00_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigPosRot*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPosRot*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_CLASS_3_9976FD513BDEEF00_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
