#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class VirtualCursor; }

#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORIDLESTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x1740EA40)
#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORIDLESTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x1740EB60)
#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORIDLESTATE_TICK_OFFSET UNITYSDK_OFFSET(0x1740EA90)
#define RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORIDLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1740E690)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCursor_VirtualCursorIdleState_TypeDefinitionIndex = 69880;

	class VirtualCursor_VirtualCursorIdleState : public ::System::Object
	{
	public:
		::RPG::Client::VirtualCursor* _Owner; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORIDLESTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::VirtualCursor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualCursor*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORIDLESTATE_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::RPG::Client::VirtualCursor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualCursor*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORIDLESTATE_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_VIRTUALCURSORIDLESTATE_EXIT_OFFSET))(this);
		}
	};
}
