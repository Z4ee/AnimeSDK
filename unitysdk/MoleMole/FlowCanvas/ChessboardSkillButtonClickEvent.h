#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSKILLBUTTONCLICKEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x149D48F0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSKILLBUTTONCLICKEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x149D4950)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardSkillButtonClickEvent_TypeDefinitionIndex = 60586;

	class ChessboardSkillButtonClickEvent : public ::MoleMole::FlowCanvas::ChessboardEventNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSKILLBUTTONCLICKEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSKILLBUTTONCLICKEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
