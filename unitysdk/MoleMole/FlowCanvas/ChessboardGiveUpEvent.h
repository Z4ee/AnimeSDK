#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDGIVEUPEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x1B597290)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDGIVEUPEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5972F0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardGiveUpEvent_TypeDefinitionIndex = 50962;

	class ChessboardGiveUpEvent : public ::MoleMole::FlowCanvas::ChessboardEventNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDGIVEUPEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDGIVEUPEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
