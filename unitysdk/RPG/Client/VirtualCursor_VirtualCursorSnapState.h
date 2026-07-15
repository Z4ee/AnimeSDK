#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class VirtualCursor; }

#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORSNAPSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x1740EF00)
#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORSNAPSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x1740F280)
#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORSNAPSTATE_TICK_OFFSET UNITYSDK_OFFSET(0x1740EF70)
#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORSNAPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1740E6F0)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCursor_VirtualCursorSnapState_TypeDefinitionIndex = 69883;

	class VirtualCursor_VirtualCursorSnapState : public ::System::Object
	{
	public:
		// static const ::System::Single EPSILON; // 0x0
		::RPG::Client::VirtualCursor* _Owner; // 0x10
		::UnityEngine::Vector2 _Target; // 0x18
		::UnityEngine::Vector2 _Velocity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORSNAPSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::VirtualCursor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualCursor*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORSNAPSTATE_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::RPG::Client::VirtualCursor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualCursor*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORSNAPSTATE_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORSNAPSTATE_EXIT_OFFSET))(this);
		}
	};
}
