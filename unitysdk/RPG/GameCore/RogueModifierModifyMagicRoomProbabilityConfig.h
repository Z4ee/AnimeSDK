#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICROOMPROBABILITYCONFIG_METHOD_3_99E96B7A7E9EF8FB_OFFSET UNITYSDK_OFFSET(0x1D163DB0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICROOMPROBABILITYCONFIG_METHOD_3_E2FB63AED3798E17_OFFSET UNITYSDK_OFFSET(0x1D163D60)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICROOMPROBABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D163DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyMagicRoomProbabilityConfig_TypeDefinitionIndex = 17011;

	class RogueModifierModifyMagicRoomProbabilityConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICROOMPROBABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E2FB63AED3798E17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyMagicRoomProbabilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyMagicRoomProbabilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICROOMPROBABILITYCONFIG_METHOD_3_E2FB63AED3798E17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_99E96B7A7E9EF8FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyMagicRoomProbabilityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyMagicRoomProbabilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYMAGICROOMPROBABILITYCONFIG_METHOD_3_99E96B7A7E9EF8FB_OFFSET))(a1, a2);
		}
	};
}
