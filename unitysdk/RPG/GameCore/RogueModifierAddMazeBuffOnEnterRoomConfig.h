#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFONENTERROOMCONFIG_METHOD_3_C1C7FA7FFE02585A_OFFSET UNITYSDK_OFFSET(0x19B4DED0)
#define RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFONENTERROOMCONFIG_METHOD_3_FF041B991FC39613_OFFSET UNITYSDK_OFFSET(0x19B4DFA0)
#define RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFONENTERROOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B4DF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierAddMazeBuffOnEnterRoomConfig_TypeDefinitionIndex = 17060;

	class RogueModifierAddMazeBuffOnEnterRoomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFONENTERROOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C1C7FA7FFE02585A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddMazeBuffOnEnterRoomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddMazeBuffOnEnterRoomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFONENTERROOMCONFIG_METHOD_3_C1C7FA7FFE02585A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FF041B991FC39613(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddMazeBuffOnEnterRoomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddMazeBuffOnEnterRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDMAZEBUFFONENTERROOMCONFIG_METHOD_3_FF041B991FC39613_OFFSET))(a1, a2);
		}
	};
}
