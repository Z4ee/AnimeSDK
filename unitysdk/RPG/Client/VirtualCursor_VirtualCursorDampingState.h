#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class VirtualCursor; }

#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORDAMPINGSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0xB481FF0)
#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORDAMPINGSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0xB4822F0)
#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORDAMPINGSTATE_TICK_OFFSET UNITYSDK_OFFSET(0xB482050)
#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORDAMPINGSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xB481FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCursor_VirtualCursorDampingState_TypeDefinitionIndex = 67436;

	class VirtualCursor_VirtualCursorDampingState : public ::System::Object
	{
	public:
		::RPG::Client::VirtualCursor* _Owner; // 0x10
		::UnityEngine::Vector2 _MoveSpeed; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORDAMPINGSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::VirtualCursor* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualCursor*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORDAMPINGSTATE_ENTER_OFFSET))(this, owner);
		}

		::System::Void Tick(::RPG::Client::VirtualCursor* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualCursor*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORDAMPINGSTATE_TICK_OFFSET))(this, owner);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORDAMPINGSTATE_EXIT_OFFSET))(this);
		}
	};
}
