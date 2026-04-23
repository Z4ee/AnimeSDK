#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTENHANCEROGUEBUFFCONFIG_METHOD_6_09F837678B0C4F44_OFFSET UNITYSDK_OFFSET(0x18CC09E0)
#define RPG_GAMECORE_ROGUEACTENHANCEROGUEBUFFCONFIG_METHOD_6_DB11BAE36C6CFDB9_OFFSET UNITYSDK_OFFSET(0x18CC0C00)
#define RPG_GAMECORE_ROGUEACTENHANCEROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC0B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActEnhanceRogueBuffConfig_TypeDefinitionIndex = 18592;

	class RogueActEnhanceRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTENHANCEROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_09F837678B0C4F44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActEnhanceRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActEnhanceRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTENHANCEROGUEBUFFCONFIG_METHOD_6_09F837678B0C4F44_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_DB11BAE36C6CFDB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActEnhanceRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActEnhanceRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTENHANCEROGUEBUFFCONFIG_METHOD_6_DB11BAE36C6CFDB9_OFFSET))(a1, a2);
		}
	};
}
