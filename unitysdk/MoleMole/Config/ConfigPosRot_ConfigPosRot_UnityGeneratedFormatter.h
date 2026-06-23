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

#define MOLEMOLE_CONFIG_CONFIGPOSROT_CONFIGPOSROT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x158AFC40)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_CONFIGPOSROT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x158AFC50)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_CONFIGPOSROT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x158B0390)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_CONFIGPOSROT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x158B07F0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_CONFIGPOSROT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x158B07B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRot_ConfigPosRot_UnityGeneratedFormatter_TypeDefinitionIndex = 73277;

	class ConfigPosRot_ConfigPosRot_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigPosRot*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRot_ConfigPosRot_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33E50);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::OffsetGroup*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::OffsetGroup*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRot_ConfigPosRot_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33E58);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ReferTargetCoordsOption>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ReferTargetCoordsOption>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRot_ConfigPosRot_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33E60);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicString*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicString*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRot_ConfigPosRot_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33E68);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::PosRotTargetOption*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::PosRotTargetOption*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRot_ConfigPosRot_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33E70);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRot_ConfigPosRot_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33E78);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_CONFIGPOSROT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_CONFIGPOSROT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_CONFIGPOSROT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigPosRot*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigPosRot*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_CONFIGPOSROT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigPosRot*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPosRot*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_CONFIGPOSROT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
