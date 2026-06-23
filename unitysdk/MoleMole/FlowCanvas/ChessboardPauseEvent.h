#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPAUSEEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x1A391180)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPAUSEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3911E0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardPauseEvent_TypeDefinitionIndex = 56952;

	class ChessboardPauseEvent : public ::MoleMole::FlowCanvas::ChessboardEventNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPAUSEEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPAUSEEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
