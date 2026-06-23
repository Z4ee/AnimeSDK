#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntitySkillType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigEntitySkill; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGENTITYSKILL_CONFIGENTITYSKILL_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18F33110)
#define MOLEMOLE_CONFIG_CONFIGENTITYSKILL_CONFIGENTITYSKILL_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18F33120)
#define MOLEMOLE_CONFIG_CONFIGENTITYSKILL_CONFIGENTITYSKILL_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x18F33C40)
#define MOLEMOLE_CONFIG_CONFIGENTITYSKILL_CONFIGENTITYSKILL_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F342B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSKILL_CONFIGENTITYSKILL_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F34270)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntitySkill_ConfigEntitySkill_UnityGeneratedFormatter_TypeDefinitionIndex = 64886;

	class ConfigEntitySkill_ConfigEntitySkill_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigEntitySkill*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::EntitySkillType>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::EntitySkillType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntitySkill_ConfigEntitySkill_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x30370);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntitySkill_ConfigEntitySkill_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x30378);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntitySkill_ConfigEntitySkill_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x30380);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntitySkill_ConfigEntitySkill_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x30388);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntitySkill_ConfigEntitySkill_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x30390);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntitySkill_ConfigEntitySkill_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x30398);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSKILL_CONFIGENTITYSKILL_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSKILL_CONFIGENTITYSKILL_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSKILL_CONFIGENTITYSKILL_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntitySkill*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntitySkill*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSKILL_CONFIGENTITYSKILL_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntitySkill*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntitySkill*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSKILL_CONFIGENTITYSKILL_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
