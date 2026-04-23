#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterPhaseSkillInfoMappingConfig; }

#define RPG_CLIENT_CHARACTERPHASESKILLINFOMAPPINGJSONTABLE_GETMONSTERMAPPING_OFFSET UNITYSDK_OFFSET(0x9F763D0)
#define RPG_CLIENT_CHARACTERPHASESKILLINFOMAPPINGJSONTABLE_LOADCONFIG_OFFSET UNITYSDK_OFFSET(0x9F762E0)
#define RPG_CLIENT_CHARACTERPHASESKILLINFOMAPPINGJSONTABLE_UNLOADCONFIG_OFFSET UNITYSDK_OFFSET(0x9F76380)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterPhaseSkillInfoMappingJsonTable_TypeDefinitionIndex = 67496;

	class CharacterPhaseSkillInfoMappingJsonTable : public ::System::Object
	{
	public:
		static ::RPG::GameCore::CharacterPhaseSkillInfoMappingConfig** StaticGet__ConfigMap()
		{
			return (::RPG::GameCore::CharacterPhaseSkillInfoMappingConfig**)Il2CppClass::FromTypeDefinitionIndex(CharacterPhaseSkillInfoMappingJsonTable_TypeDefinitionIndex)->GetStaticField(0x4C530);
		}

		static ::System::Void LoadConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERPHASESKILLINFOMAPPINGJSONTABLE_LOADCONFIG_OFFSET))();
		}

		static ::System::Void UnLoadConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERPHASESKILLINFOMAPPINGJSONTABLE_UNLOADCONFIG_OFFSET))();
		}

		static ::Il2CppArray<::System::UInt32>* GetMonsterMapping(::System::UInt32 nMonsterID)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERPHASESKILLINFOMAPPINGJSONTABLE_GETMONSTERMAPPING_OFFSET))(nMonsterID);
		}
	};
}
