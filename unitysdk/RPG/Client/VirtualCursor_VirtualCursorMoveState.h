#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class VirtualCursor; }

#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORMOVESTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x1740EBA0)
#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORMOVESTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x1740EEC0)
#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORMOVESTATE_TICK_OFFSET UNITYSDK_OFFSET(0x1740EBF0)
#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORMOVESTATE__CALCULATESPEED_OFFSET UNITYSDK_OFFSET(0x1740ED10)
#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORMOVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1740E6A0)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCursor_VirtualCursorMoveState_TypeDefinitionIndex = 69881;

	class VirtualCursor_VirtualCursorMoveState : public ::System::Object
	{
	public:
		::RPG::Client::VirtualCursor* _Owner; // 0x10
		::System::Single _ScreenWidth; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORMOVESTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::VirtualCursor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualCursor*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORMOVESTATE_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::RPG::Client::VirtualCursor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualCursor*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORMOVESTATE_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORMOVESTATE_EXIT_OFFSET))(this);
		}

		::UnityEngine::Vector2 _CalculateSpeed(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORMOVESTATE__CALCULATESPEED_OFFSET))(this, a1);
		}
	};
}
