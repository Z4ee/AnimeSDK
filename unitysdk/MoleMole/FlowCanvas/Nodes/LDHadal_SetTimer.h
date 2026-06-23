#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_4.h"
#include "unitysdk/MoleMole/Level/RatingType.h"

class Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA;
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_SETTIMER_INVOKE_OFFSET UNITYSDK_OFFSET(0x17103B40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_SETTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x17104380)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_SETTIMER__ONTICK1SINTERVAL_OFFSET UNITYSDK_OFFSET(0x17104120)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_SETTIMER__SENDICONEVENT_OFFSET UNITYSDK_OFFSET(0x17103EE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDHadal_SetTimer_TypeDefinitionIndex = 52196;

	class LDHadal_SetTimer : public ::FlowCanvas::Nodes::CallableActionNode_4<::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean>
	{
	public:
		::System::Boolean skipUpdateIcon; // 0x30
		::MoleMole::Level::RatingType _curRating; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_SETTIMER__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* timerKey, ::System::Boolean isPause, ::System::Boolean skipSetIcon, ::System::Boolean skipUpdateIcon)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_SETTIMER_INVOKE_OFFSET))(this, timerKey, isPause, skipSetIcon, skipUpdateIcon);
		}

		::System::Void _OnTick1SInterval(::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA* timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_EA02B975BED3466B_Class_1_DCE79A11CC8A2FDA*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_SETTIMER__ONTICK1SINTERVAL_OFFSET))(this, timer);
		}

		::System::Void _SendIconEvent(::MoleMole::Level::RatingType ratingType, ::System::Boolean playChangeAnim)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Level::RatingType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_SETTIMER__SENDICONEVENT_OFFSET))(this, ratingType, playChangeAnim);
		}
	};
}
