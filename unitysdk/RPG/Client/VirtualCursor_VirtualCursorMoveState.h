#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class VirtualCursor; }

#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORMOVESTATE_ENTER_OFFSET UNITYSDK_OFFSET(0xB4BEC70)
#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORMOVESTATE_EXIT_OFFSET UNITYSDK_OFFSET(0xB4BEF60)
#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORMOVESTATE_TICK_OFFSET UNITYSDK_OFFSET(0xB4BECC0)
#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORMOVESTATE__CALCULATESPEED_OFFSET UNITYSDK_OFFSET(0xB4BEDC0)
#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORMOVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4BEFA0)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCursor_VirtualCursorMoveState_TypeDefinitionIndex = 67435;

	class VirtualCursor_VirtualCursorMoveState : public ::System::Object
	{
	public:
		::RPG::Client::VirtualCursor* _Owner; // 0x10
		::System::Single _ScreenWidth; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORMOVESTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::VirtualCursor* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualCursor*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORMOVESTATE_ENTER_OFFSET))(this, owner);
		}

		::System::Void Tick(::RPG::Client::VirtualCursor* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualCursor*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORMOVESTATE_TICK_OFFSET))(this, owner);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORMOVESTATE_EXIT_OFFSET))(this);
		}

		::UnityEngine::Vector2 _CalculateSpeed(::UnityEngine::Vector2 inputValue)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORMOVESTATE__CALCULATESPEED_OFFSET))(this, inputValue);
		}
	};
}
