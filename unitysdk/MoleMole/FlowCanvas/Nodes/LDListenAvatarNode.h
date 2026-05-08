#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDListenAvatarNode_ListenAvatarTargetType.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_F25C0BD4B2C92757;
class Class_3_F97B015544BE936B;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x16B7D400)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_CHECKFINISH_OFFSET UNITYSDK_OFFSET(0x16B7E940)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_CHECKHIGHTOLOW_OFFSET UNITYSDK_OFFSET(0x16B7F320)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_CHECKLOWTOHIGH_OFFSET UNITYSDK_OFFSET(0x16B7F140)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_CHECKSTARTVALUE_OFFSET UNITYSDK_OFFSET(0x16B7E5B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_GETLOCALAVATARHPPERCENT_OFFSET UNITYSDK_OFFSET(0x16B7DDA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_GETTEAMHPPERCENT_OFFSET UNITYSDK_OFFSET(0x16B7E320)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_INITLOACLAVATARDATA_OFFSET UNITYSDK_OFFSET(0x16B7DB60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_INITTEAMDATA_OFFSET UNITYSDK_OFFSET(0x16B7DF80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x16B7EB20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x16B7D3B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x16B7D610)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_ONLOCALAVATARCHANGE_OFFSET UNITYSDK_OFFSET(0x16B7EB90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16B7D180)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_START_OFFSET UNITYSDK_OFFSET(0x16B7D880)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_STOP_OFFSET UNITYSDK_OFFSET(0x16B7EAC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_UNBINDEVENT_OFFSET UNITYSDK_OFFSET(0x16B7D660)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_UPDATE_OFFSET UNITYSDK_OFFSET(0x16B7EEA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16B7F500)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE__REGISTERPORTS_B__21_0_OFFSET UNITYSDK_OFFSET(0x16B7F540)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x16B7F570)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x16B7F580)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDListenAvatarNode_TypeDefinitionIndex = 60935;

	class LDListenAvatarNode : public ::FlowCanvas::FlowNode
	{
	public:
		// static const ::System::Single tickSpan; // 0x0
		::Class_3_F97B015544BE936B* localAvatarData; // 0xA8
		::FlowCanvas::FlowOutput* flowOut; // 0xB0
		::FlowCanvas::FlowInput* flowIn; // 0xB8
		::System::Collections::Generic::List_1<::Class_3_F97B015544BE936B*>* teamDataList; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Single>* lowToHighInput; // 0xC8
		::FlowCanvas::FlowOutput* reachedLowToHighOutput; // 0xD0
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::LDListenAvatarNode_ListenAvatarTargetType>* listenTypeInput; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Int32>* highToLowTriggerCountInput; // 0xE0
		::Class_3_F25C0BD4B2C92757* aliveStateComponent; // 0xE8
		::FlowCanvas::ValueInput_1<::System::Int32>* lowToHighTriggerCountInput; // 0xF0
		::FlowCanvas::FlowOutput* reachedHighToLowOutput; // 0xF8
		::FlowCanvas::ValueInput_1<::System::Single>* highToLowInput; // 0x100
		::System::Collections::Generic::List_1<::Class_3_F25C0BD4B2C92757*>* aliveStateList; // 0x108
		::System::Boolean isStart; // 0x110
		::System::Boolean bindEvent; // 0x111
		::System::Int32 highToLowTriggerCnt; // 0x114
		::System::Int32 lowToHightTriggerCnt; // 0x118
		::System::Single tickDelta; // 0x11C
		::System::Single lastHpPercent; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_START_OFFSET))(this, f);
		}

		::System::Void CheckStartValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_CHECKSTARTVALUE_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_BINDEVENT_OFFSET))(this);
		}

		::System::Void UnBindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_UNBINDEVENT_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Boolean CheckFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_CHECKFINISH_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_STOP_OFFSET))(this);
		}

		::System::Boolean CheckHighToLow(::System::Single cur, ::System::Single last)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_CHECKHIGHTOLOW_OFFSET))(this, cur, last);
		}

		::System::Boolean CheckLowToHigh(::System::Single cur, ::System::Single last)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_CHECKLOWTOHIGH_OFFSET))(this, cur, last);
		}

		::System::Void OnLocalAvatarChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_ONLOCALAVATARCHANGE_OFFSET))(this);
		}

		::System::Void InitLoaclAvatarData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_INITLOACLAVATARDATA_OFFSET))(this);
		}

		::System::Void InitTeamData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_INITTEAMDATA_OFFSET))(this);
		}

		::System::Single GetLocalAvatarHpPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_GETLOCALAVATARHPPERCENT_OFFSET))(this);
		}

		::System::Single GetTeamHpPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_GETTEAMHPPERCENT_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__21_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE__REGISTERPORTS_B__21_0_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
