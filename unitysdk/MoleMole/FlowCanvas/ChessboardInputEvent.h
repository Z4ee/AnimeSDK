#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode_1.h"
#include "unitysdk/Share/GridDir.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDINPUTEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x16D32B40)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDINPUTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x16D32BA0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardInputEvent_TypeDefinitionIndex = 73752;

	class ChessboardInputEvent : public ::MoleMole::FlowCanvas::ChessboardEventNode_1<::Share::GridDir>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDINPUTEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDINPUTEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
