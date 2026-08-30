#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTENHANCEROGUEBUFFCONFIG_METHOD_6_808653C42F3CB4B5_OFFSET UNITYSDK_OFFSET(0x1D3B7390)
#define RPG_GAMECORE_ROGUEACTENHANCEROGUEBUFFCONFIG_METHOD_6_DB11BAE36C6CFDB9_OFFSET UNITYSDK_OFFSET(0x1D3B73E0)
#define RPG_GAMECORE_ROGUEACTENHANCEROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B73D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActEnhanceRogueBuffConfig_TypeDefinitionIndex = 19360;

	class RogueActEnhanceRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTENHANCEROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_808653C42F3CB4B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActEnhanceRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActEnhanceRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTENHANCEROGUEBUFFCONFIG_METHOD_6_808653C42F3CB4B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_DB11BAE36C6CFDB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActEnhanceRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActEnhanceRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTENHANCEROGUEBUFFCONFIG_METHOD_6_DB11BAE36C6CFDB9_OFFSET))(a1, a2);
		}
	};
}
