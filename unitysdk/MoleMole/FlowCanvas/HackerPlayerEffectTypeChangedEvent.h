#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode_1.h"
#include "unitysdk/MoleMole/HackerGamePlayerEffectTypeChangedData.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_HACKERPLAYEREFFECTTYPECHANGEDEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x1A9995A0)
#define MOLEMOLE_FLOWCANVAS_HACKERPLAYEREFFECTTYPECHANGEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A999600)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerPlayerEffectTypeChangedEvent_TypeDefinitionIndex = 41609;

	class HackerPlayerEffectTypeChangedEvent : public ::MoleMole::FlowCanvas::ChessboardEventNode_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERPLAYEREFFECTTYPECHANGEDEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERPLAYEREFFECTTYPECHANGEDEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
