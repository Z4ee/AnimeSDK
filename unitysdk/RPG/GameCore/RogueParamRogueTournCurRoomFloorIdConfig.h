#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURROOMFLOORIDCONFIG_METHOD_6_85535830D51F619B_OFFSET UNITYSDK_OFFSET(0x18D5D5D0)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURROOMFLOORIDCONFIG_METHOD_6_A7515DA3AC99C1B5_OFFSET UNITYSDK_OFFSET(0x18D5D320)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURROOMFLOORIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5D4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournCurRoomFloorIdConfig_TypeDefinitionIndex = 18834;

	class RogueParamRogueTournCurRoomFloorIdConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURROOMFLOORIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_A7515DA3AC99C1B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournCurRoomFloorIdConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournCurRoomFloorIdConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURROOMFLOORIDCONFIG_METHOD_6_A7515DA3AC99C1B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_85535830D51F619B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournCurRoomFloorIdConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournCurRoomFloorIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURROOMFLOORIDCONFIG_METHOD_6_85535830D51F619B_OFFSET))(a1, a2);
		}
	};
}
