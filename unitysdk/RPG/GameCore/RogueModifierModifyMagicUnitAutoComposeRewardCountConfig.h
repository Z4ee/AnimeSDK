#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITAUTOCOMPOSEREWARDCOUNTCONFIG_METHOD_3_0192AE6F0580EDAA_OFFSET UNITYSDK_OFFSET(0x1D163DC0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITAUTOCOMPOSEREWARDCOUNTCONFIG_METHOD_3_6131CA38F49A2906_OFFSET UNITYSDK_OFFSET(0x1D163E10)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITAUTOCOMPOSEREWARDCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D163E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyMagicUnitAutoComposeRewardCountConfig_TypeDefinitionIndex = 17020;

	class RogueModifierModifyMagicUnitAutoComposeRewardCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITAUTOCOMPOSEREWARDCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0192AE6F0580EDAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyMagicUnitAutoComposeRewardCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyMagicUnitAutoComposeRewardCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITAUTOCOMPOSEREWARDCOUNTCONFIG_METHOD_3_0192AE6F0580EDAA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6131CA38F49A2906(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyMagicUnitAutoComposeRewardCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyMagicUnitAutoComposeRewardCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICUNITAUTOCOMPOSEREWARDCOUNTCONFIG_METHOD_3_6131CA38F49A2906_OFFSET))(a1, a2);
		}
	};
}
