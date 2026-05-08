#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AttackType.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/MoleMole/Config/LevelGlobalAIScriptConfigData_AIGroupTagWeight.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class LevelGlobalAIModule; }
namespace MoleMole::Config { class LevelGlobalAIScriptConfig; }
namespace MoleMole::Config { class LevelGlobalAIScriptConfig_AISteerParam; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_LEVELGLOBALAISCRIPTCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17D2D9E0)
#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_LEVELGLOBALAISCRIPTCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17D2D9F0)
#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_LEVELGLOBALAISCRIPTCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17D2DC90)
#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_LEVELGLOBALAISCRIPTCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D2DE80)
#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_LEVELGLOBALAISCRIPTCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D2DE40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelGlobalAIScriptConfig_LevelGlobalAIScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 81446;

	class LevelGlobalAIScriptConfig_LevelGlobalAIScriptConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::LevelGlobalAIScriptConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::AttackType, ::MoleMole::Config::LevelGlobalAIScriptConfigData_AIGroupTagWeight>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::AttackType, ::MoleMole::Config::LevelGlobalAIScriptConfigData_AIGroupTagWeight>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelGlobalAIScriptConfig_LevelGlobalAIScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x477D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::MoleMole::Config::LevelGlobalAIScriptConfig_AISteerParam*>*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::MoleMole::Config::LevelGlobalAIScriptConfig_AISteerParam*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelGlobalAIScriptConfig_LevelGlobalAIScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x477D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::LevelGlobalAIModule*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::LevelGlobalAIModule*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelGlobalAIScriptConfig_LevelGlobalAIScriptConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x477E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_LEVELGLOBALAISCRIPTCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_LEVELGLOBALAISCRIPTCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_LEVELGLOBALAISCRIPTCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::LevelGlobalAIScriptConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::LevelGlobalAIScriptConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_LEVELGLOBALAISCRIPTCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::LevelGlobalAIScriptConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelGlobalAIScriptConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_LEVELGLOBALAISCRIPTCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
