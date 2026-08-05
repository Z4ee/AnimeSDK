#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode_1.h"
#include "unitysdk/MoleMole/HackerGameDamageData.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_HACKERENTITYONDEATHEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x1B527220)
#define MOLEMOLE_FLOWCANVAS_HACKERENTITYONDEATHEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B527280)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerEntityOnDeathEvent_TypeDefinitionIndex = 77598;

	class HackerEntityOnDeathEvent : public ::MoleMole::FlowCanvas::ChessboardEventNode_1<::MoleMole::HackerGameDamageData>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERENTITYONDEATHEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERENTITYONDEATHEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
