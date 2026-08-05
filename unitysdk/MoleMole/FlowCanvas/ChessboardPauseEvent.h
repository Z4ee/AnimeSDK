#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPAUSEEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x1B5973F0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPAUSEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B597450)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardPauseEvent_TypeDefinitionIndex = 87650;

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
