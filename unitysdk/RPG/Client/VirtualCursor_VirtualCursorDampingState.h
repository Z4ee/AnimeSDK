#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class VirtualCursor; }

#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORDAMPINGSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x1740E700)
#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORDAMPINGSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x1740EA00)
#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORDAMPINGSTATE_TICK_OFFSET UNITYSDK_OFFSET(0x1740E760)
#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORDAMPINGSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1740E6E0)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCursor_VirtualCursorDampingState_TypeDefinitionIndex = 69882;

	class VirtualCursor_VirtualCursorDampingState : public ::System::Object
	{
	public:
		::RPG::Client::VirtualCursor* _Owner; // 0x10
		::UnityEngine::Vector2 _MoveSpeed; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORDAMPINGSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::VirtualCursor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualCursor*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORDAMPINGSTATE_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::RPG::Client::VirtualCursor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualCursor*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORDAMPINGSTATE_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORDAMPINGSTATE_EXIT_OFFSET))(this);
		}
	};
}
