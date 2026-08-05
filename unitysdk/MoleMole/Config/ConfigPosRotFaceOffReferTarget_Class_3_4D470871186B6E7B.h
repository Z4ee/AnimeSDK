#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigPosRotFaceOffReferTarget; }
namespace MoleMole::Config { class DynamicString; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CLASS_3_4D470871186B6E7B_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x172ACB70)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CLASS_3_4D470871186B6E7B_READMEMBER_OFFSET UNITYSDK_OFFSET(0x172ACB80)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CLASS_3_4D470871186B6E7B_WRITE_OFFSET UNITYSDK_OFFSET(0x172AD580)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CLASS_3_4D470871186B6E7B__CCTOR_OFFSET UNITYSDK_OFFSET(0x172ADB70)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CLASS_3_4D470871186B6E7B__CTOR_OFFSET UNITYSDK_OFFSET(0x172ADB30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRotFaceOffReferTarget_Class_3_4D470871186B6E7B_TypeDefinitionIndex = 67677;

	class ConfigPosRotFaceOffReferTarget_Class_3_4D470871186B6E7B : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigPosRotFaceOffReferTarget*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicString*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicString*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotFaceOffReferTarget_Class_3_4D470871186B6E7B_TypeDefinitionIndex)->GetStaticField(0x3F660);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AbilityTargetting>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotFaceOffReferTarget_Class_3_4D470871186B6E7B_TypeDefinitionIndex)->GetStaticField(0x3F668);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotFaceOffReferTarget_Class_3_4D470871186B6E7B_TypeDefinitionIndex)->GetStaticField(0x3F670);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotFaceOffReferTarget_Class_3_4D470871186B6E7B_TypeDefinitionIndex)->GetStaticField(0x3F678);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CLASS_3_4D470871186B6E7B__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CLASS_3_4D470871186B6E7B__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CLASS_3_4D470871186B6E7B_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigPosRotFaceOffReferTarget*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigPosRotFaceOffReferTarget*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CLASS_3_4D470871186B6E7B_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigPosRotFaceOffReferTarget*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPosRotFaceOffReferTarget*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_CLASS_3_4D470871186B6E7B_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
