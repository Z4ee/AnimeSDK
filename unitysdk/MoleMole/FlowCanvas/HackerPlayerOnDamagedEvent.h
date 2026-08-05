#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode_1.h"
#include "unitysdk/MoleMole/HackerGamePlayerOnDamagedData.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_HACKERPLAYERONDAMAGEDEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x19DAA120)
#define MOLEMOLE_FLOWCANVAS_HACKERPLAYERONDAMAGEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19DAA180)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerPlayerOnDamagedEvent_TypeDefinitionIndex = 81777;

	class HackerPlayerOnDamagedEvent : public ::MoleMole::FlowCanvas::ChessboardEventNode_1<::MoleMole::HackerGamePlayerOnDamagedData>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERPLAYERONDAMAGEDEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERPLAYERONDAMAGEDEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
