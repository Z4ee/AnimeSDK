#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFINISHEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x1382CD70)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFINISHEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1382CDD0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardFinishEvent_TypeDefinitionIndex = 41522;

	class ChessboardFinishEvent : public ::MoleMole::FlowCanvas::ChessboardEventNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFINISHEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFINISHEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
