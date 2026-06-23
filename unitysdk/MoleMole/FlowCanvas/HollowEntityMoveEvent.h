#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode_1.h"
#include "unitysdk/MoleMole/FlowCanvas/HollowEntityMoveEvent_Param.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_HOLLOWENTITYMOVEEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x170FB1E0)
#define MOLEMOLE_FLOWCANVAS_HOLLOWENTITYMOVEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x170FB240)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HollowEntityMoveEvent_TypeDefinitionIndex = 76720;

	class HollowEntityMoveEvent : public ::MoleMole::FlowCanvas::ChessboardEventNode_1<::MoleMole::FlowCanvas::HollowEntityMoveEvent_Param>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HOLLOWENTITYMOVEEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HOLLOWENTITYMOVEEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
