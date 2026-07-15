#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TurnState.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PAUSEGAMEMODETOSTATE_METHOD_3_468243AECDEE60D9_OFFSET UNITYSDK_OFFSET(0x1BB129D0)
#define RPG_GAMECORE_PAUSEGAMEMODETOSTATE_METHOD_3_837CB796B3077A16_OFFSET UNITYSDK_OFFSET(0x1BB12990)
#define RPG_GAMECORE_PAUSEGAMEMODETOSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB129C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PauseGameModeToState_TypeDefinitionIndex = 22583;

	class PauseGameModeToState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TurnState PauseTurnState; // 0x18
		::System::Boolean Pause; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEGAMEMODETOSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_837CB796B3077A16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PauseGameModeToState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PauseGameModeToState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEGAMEMODETOSTATE_METHOD_3_837CB796B3077A16_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_468243AECDEE60D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PauseGameModeToState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PauseGameModeToState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEGAMEMODETOSTATE_METHOD_3_468243AECDEE60D9_OFFSET))(a1, a2);
		}
	};
}
