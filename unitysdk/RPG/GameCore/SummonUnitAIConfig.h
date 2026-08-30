#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SummonUnitMemoryStrategy.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class AdventureAIConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SUMMONUNITAICONFIG_METHOD_2_8F8D0CA524F02EAC_OFFSET UNITYSDK_OFFSET(0x1D583FF0)
#define RPG_GAMECORE_SUMMONUNITAICONFIG_RPG_GAMECORE_IADVENTURECHARACTERAICONFIG_GET_ADVAICONFIG_OFFSET UNITYSDK_OFFSET(0x1D5841F0)
#define RPG_GAMECORE_SUMMONUNITAICONFIG_RPG_GAMECORE_IADVENTURECHARACTERAICONFIG_GET_AICONFIGOVERRIDELIST_OFFSET UNITYSDK_OFFSET(0x1D5841E0)
#define RPG_GAMECORE_SUMMONUNITAICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5841D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitAIConfig_TypeDefinitionIndex = 17385;

	class SummonUnitAIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AIFile; // 0x10
		::Il2CppArray<::RPG::GameCore::AIVariable*>* AIConfigOverrideList; // 0x18
		::System::String* TalkEmotionAssetPath; // 0x20
		::RPG::GameCore::AdventureAIConfig* AdvAIConfig; // 0x28
		::RPG::GameCore::SummonUnitMemoryStrategy AIMemoryStrategy; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITAICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8F8D0CA524F02EAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonUnitAIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonUnitAIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITAICONFIG_METHOD_2_8F8D0CA524F02EAC_OFFSET))(a1, a2);
		}

		::Il2CppArray<::RPG::GameCore::AIVariable*>* RPG_GameCore_IAdventureCharacterAIConfig_get_AIConfigOverrideList()
		{
			return ((::Il2CppArray<::RPG::GameCore::AIVariable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITAICONFIG_RPG_GAMECORE_IADVENTURECHARACTERAICONFIG_GET_AICONFIGOVERRIDELIST_OFFSET))(this);
		}

		::RPG::GameCore::AdventureAIConfig* RPG_GameCore_IAdventureCharacterAIConfig_get_AdvAIConfig()
		{
			return ((::RPG::GameCore::AdventureAIConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITAICONFIG_RPG_GAMECORE_IADVENTURECHARACTERAICONFIG_GET_ADVAICONFIG_OFFSET))(this);
		}
	};
}
