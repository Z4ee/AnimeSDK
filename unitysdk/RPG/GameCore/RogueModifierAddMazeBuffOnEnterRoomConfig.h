#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFONENTERROOMCONFIG_METHOD_3_630DAE7EA269BD4F_OFFSET UNITYSDK_OFFSET(0x1EEF76C0)
#define RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFONENTERROOMCONFIG_METHOD_3_FF041B991FC39613_OFFSET UNITYSDK_OFFSET(0x1EEF7710)
#define RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFONENTERROOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF7700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierAddMazeBuffOnEnterRoomConfig_TypeDefinitionIndex = 17738;

	class RogueModifierAddMazeBuffOnEnterRoomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFONENTERROOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_630DAE7EA269BD4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddMazeBuffOnEnterRoomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddMazeBuffOnEnterRoomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFONENTERROOMCONFIG_METHOD_3_630DAE7EA269BD4F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FF041B991FC39613(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddMazeBuffOnEnterRoomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddMazeBuffOnEnterRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFONENTERROOMCONFIG_METHOD_3_FF041B991FC39613_OFFSET))(a1, a2);
		}
	};
}
