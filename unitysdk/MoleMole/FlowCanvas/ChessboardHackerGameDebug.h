#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode_1.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDHACKERGAMEDEBUG_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x1B597340)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDHACKERGAMEDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5973A0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardHackerGameDebug_TypeDefinitionIndex = 50661;

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
