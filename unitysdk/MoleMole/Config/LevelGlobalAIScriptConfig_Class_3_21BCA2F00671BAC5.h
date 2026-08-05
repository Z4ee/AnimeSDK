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

#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_CLASS_3_21BCA2F00671BAC5_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x172BD110)
#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_CLASS_3_21BCA2F00671BAC5_READMEMBER_OFFSET UNITYSDK_OFFSET(0x172BD120)
#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_CLASS_3_21BCA2F00671BAC5_WRITE_OFFSET UNITYSDK_OFFSET(0x172BD370)
#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_CLASS_3_21BCA2F00671BAC5__CCTOR_OFFSET UNITYSDK_OFFSET(0x172BD530)
#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_CLASS_3_21BCA2F00671BAC5__CTOR_OFFSET UNITYSDK_OFFSET(0x172BD4F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelGlobalAIScriptConfig_Class_3_21BCA2F00671BAC5_TypeDefinitionIndex = 84038;

	class LevelGlobalAIScriptConfig_Class_3_21BCA2F00671BAC5 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::LevelGlobalAIScriptConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::AttackType, ::MoleMole::Config::LevelGlobalAIScriptConfigData_AIGroupTagWeight>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::AttackType, ::MoleMole::Config::LevelGlobalAIScriptConfigData_AIGroupTagWeight>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelGlobalAIScriptConfig_Class_3_21BCA2F00671BAC5_TypeDefinitionIndex)->GetStaticField(0x3F6D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::LevelGlobalAIModule*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::LevelGlobalAIModule*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelGlobalAIScriptConfig_Class_3_21BCA2F00671BAC5_TypeDefinitionIndex)->GetStaticField(0x3F6D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::MoleMole::Config::LevelGlobalAIScriptConfig_AISteerParam*>*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::MoleMole::Config::LevelGlobalAIScriptConfig_AISteerParam*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelGlobalAIScriptConfig_Class_3_21BCA2F00671BAC5_TypeDefinitionIndex)->GetStaticField(0x3F6E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_CLASS_3_21BCA2F00671BAC5__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_CLASS_3_21BCA2F00671BAC5__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_CLASS_3_21BCA2F00671BAC5_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::LevelGlobalAIScriptConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::LevelGlobalAIScriptConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_CLASS_3_21BCA2F00671BAC5_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::LevelGlobalAIScriptConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelGlobalAIScriptConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_CLASS_3_21BCA2F00671BAC5_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
