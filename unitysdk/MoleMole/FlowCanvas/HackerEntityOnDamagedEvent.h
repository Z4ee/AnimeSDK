#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode_1.h"
#include "unitysdk/MoleMole/HackerGameDamageData.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_HACKERENTITYONDAMAGEDEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x12FFE030)
#define MOLEMOLE_FLOWCANVAS_HACKERENTITYONDAMAGEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x12FFE090)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerEntityOnDamagedEvent_TypeDefinitionIndex = 66408;

	class HackerEntityOnDamagedEvent : public ::MoleMole::FlowCanvas::ChessboardEventNode_1<::MoleMole::HackerGameDamageData>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERENTITYONDAMAGEDEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERENTITYONDAMAGEDEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
