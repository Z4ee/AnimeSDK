#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICPREVIOUSROOMTYPECONFIG_METHOD_6_4E7F9C1C58EE61B2_OFFSET UNITYSDK_OFFSET(0x1764D4A0)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICPREVIOUSROOMTYPECONFIG_METHOD_6_A85C825A58FE0F1C_OFFSET UNITYSDK_OFFSET(0x1764D1F0)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICPREVIOUSROOMTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1764D370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueMagicPreviousRoomTypeConfig_TypeDefinitionIndex = 18180;

	class RogueParamRogueMagicPreviousRoomTypeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICPREVIOUSROOMTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_A85C825A58FE0F1C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicPreviousRoomTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicPreviousRoomTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICPREVIOUSROOMTYPECONFIG_METHOD_6_A85C825A58FE0F1C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_4E7F9C1C58EE61B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicPreviousRoomTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicPreviousRoomTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICPREVIOUSROOMTYPECONFIG_METHOD_6_4E7F9C1C58EE61B2_OFFSET))(a1, a2);
		}
	};
}
