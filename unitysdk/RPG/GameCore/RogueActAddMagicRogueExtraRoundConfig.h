#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG_METHOD_6_6B17F084C7F2E4F2_OFFSET UNITYSDK_OFFSET(0x19AE10A0)
#define RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG_METHOD_6_6F481D81F5C32FE7_OFFSET UNITYSDK_OFFSET(0x19AE0E80)
#define RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE0FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActAddMagicRogueExtraRoundConfig_TypeDefinitionIndex = 18657;

	class RogueActAddMagicRogueExtraRoundConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_6F481D81F5C32FE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActAddMagicRogueExtraRoundConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActAddMagicRogueExtraRoundConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG_METHOD_6_6F481D81F5C32FE7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_6B17F084C7F2E4F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActAddMagicRogueExtraRoundConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActAddMagicRogueExtraRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG_METHOD_6_6B17F084C7F2E4F2_OFFSET))(a1, a2);
		}
	};
}
