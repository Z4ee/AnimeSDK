#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode_1.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDHACKERGAMEDEBUG_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x1840FCE0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDHACKERGAMEDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x1840FD40)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardHackerGameDebug_TypeDefinitionIndex = 79188;

	class ChessboardHackerGameDebug : public ::MoleMole::FlowCanvas::ChessboardEventNode_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDHACKERGAMEDEBUG__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDHACKERGAMEDEBUG_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
