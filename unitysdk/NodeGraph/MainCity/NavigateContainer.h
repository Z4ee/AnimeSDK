#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4C7CE452CFA7A879.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_403;
class Class_1_9DF8A96088853ABF;
namespace MoleMole::Battle { class Entity; }
namespace NodeGraph::MainCity { class SimpleInteractionPoint; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_EQUALS_OFFSET UNITYSDK_OFFSET(0x10687DD0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_CHECKSTANDPOS_OFFSET UNITYSDK_OFFSET(0x10687D20)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_CHECKSTANDTIMER_OFFSET UNITYSDK_OFFSET(0x10687D00)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_CHECKSTANDTIME_OFFSET UNITYSDK_OFFSET(0x10687CE0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_CURRENTPATHINDEX_OFFSET UNITYSDK_OFFSET(0x10687D90)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_MAXWAITIDLETIME_OFFSET UNITYSDK_OFFSET(0x10687CC0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_NAVFLAGS_OFFSET UNITYSDK_OFFSET(0x10686250)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_NAVINTERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x10687BB0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_NAVPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0x10687BC0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_NEEDDETOUR_OFFSET UNITYSDK_OFFSET(0x10687D50)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_NOTURNANIM_OFFSET UNITYSDK_OFFSET(0x10687CA0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_OVERRIDERADIUS_OFFSET UNITYSDK_OFFSET(0x10687B20)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x10687B60)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_SAVEDMUTEANIMATORMOVEINDEX_OFFSET UNITYSDK_OFFSET(0x10687B70)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_SAVEDSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x10687B90)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_STEPFINISHED_OFFSET UNITYSDK_OFFSET(0x10687DB0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_TASKRUNNING_OFFSET UNITYSDK_OFFSET(0x10687B40)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_TOTALPATH_OFFSET UNITYSDK_OFFSET(0x10687D70)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_USENAVMESH_OFFSET UNITYSDK_OFFSET(0x10687C80)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_HANDLEPLAYERNAVIGATEDONE_OFFSET UNITYSDK_OFFSET(0x10687BE0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_CHECKSTANDPOS_OFFSET UNITYSDK_OFFSET(0x10687D40)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_CHECKSTANDTIMER_OFFSET UNITYSDK_OFFSET(0x10687D10)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_CHECKSTANDTIME_OFFSET UNITYSDK_OFFSET(0x10687CF0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_CURRENTPATHINDEX_OFFSET UNITYSDK_OFFSET(0x10687DA0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_MAXWAITIDLETIME_OFFSET UNITYSDK_OFFSET(0x10687CD0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_NAVINTERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x106861A0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_NAVPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0x10687BD0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_NEEDDETOUR_OFFSET UNITYSDK_OFFSET(0x10687D60)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_NOTURNANIM_OFFSET UNITYSDK_OFFSET(0x10687CB0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_OVERRIDERADIUS_OFFSET UNITYSDK_OFFSET(0x10687B30)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_SAVEDMUTEANIMATORMOVEINDEX_OFFSET UNITYSDK_OFFSET(0x10687B80)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_SAVEDSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x10687BA0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_STEPFINISHED_OFFSET UNITYSDK_OFFSET(0x10687DC0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_TASKRUNNING_OFFSET UNITYSDK_OFFSET(0x10687B50)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_TOTALPATH_OFFSET UNITYSDK_OFFSET(0x10687D80)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_USENAVMESH_OFFSET UNITYSDK_OFFSET(0x10687C90)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x10683030)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int NavigateContainer_TypeDefinitionIndex = 91342;

	class NavigateContainer : public ::System::Object
	{
	public:
		::Class_1_9DF8A96088853ABF* navPathFollow; // 0x10
		::NodeGraph::MainCity::SimpleInteractionPoint* navInteractionPoint; // 0x18
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_403*>* _TotalPath_k__BackingField; // 0x20
		::System::Action_2<::MoleMole::Battle::Entity*, ::System::Boolean>* HandlePlayerNavigateDoneAction; // 0x28
		::MoleMole::Battle::Entity* ownerEntity; // 0x30
		::System::Boolean _NeedDetour_k__BackingField; // 0x38
		::System::Boolean _TaskRunning_k__BackingField; // 0x39
		::System::Boolean _StepFinished_k__BackingField; // 0x3A
		::System::Boolean _UseNavMesh_k__BackingField; // 0x3B
		::System::Single _CheckStandTime_k__BackingField; // 0x3C
		::System::Single _MaxWaitIdleTime_k__BackingField; // 0x40
		::System::Boolean _NoTurnAnim_k__BackingField; // 0x44
		::System::Int32 savedMuteAnimatorMoveIndex; // 0x48
		::System::Int32 _CurrentPathIndex_k__BackingField; // 0x4C
		::Enum_3_4C7CE452CFA7A879 navFlags; // 0x50
		::UnityEngine::Vector3 _CheckStandPos_k__BackingField; // 0x54
		::System::Single _OverrideRadius_k__BackingField; // 0x60
		::UnityEngine::Vector2 _SavedSpeedRatio_k__BackingField; // 0x64
		::System::Single _CheckStandTimer_k__BackingField; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER__CTOR_OFFSET))(this);
		}

		::System::Single get_OverrideRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_OVERRIDERADIUS_OFFSET))(this);
		}

		::System::Void set_OverrideRadius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_OVERRIDERADIUS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_TASKRUNNING_OFFSET))(this);
		}

		::System::Void set_TaskRunning(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_TASKRUNNING_OFFSET))(this, value);
		}

		::MoleMole::Battle::Entity* get_OwnerEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_OWNERENTITY_OFFSET))(this);
		}

		::Enum_3_4C7CE452CFA7A879& get_NavFlags()
		{
			return ((::Enum_3_4C7CE452CFA7A879&(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_NAVFLAGS_OFFSET))(this);
		}

		::System::Int32 get_SavedMuteAnimatorMoveIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_SAVEDMUTEANIMATORMOVEINDEX_OFFSET))(this);
		}

		::System::Void set_SavedMuteAnimatorMoveIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_SAVEDMUTEANIMATORMOVEINDEX_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_SavedSpeedRatio()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_SAVEDSPEEDRATIO_OFFSET))(this);
		}

		::System::Void set_SavedSpeedRatio(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_SAVEDSPEEDRATIO_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_403* get_NavInteractionPoint()
		{
			return ((::Class_0_16E4307DCC419505_403*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_NAVINTERACTIONPOINT_OFFSET))(this);
		}

		::System::Void set_NavInteractionPoint(::Class_0_16E4307DCC419505_403* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_403*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_NAVINTERACTIONPOINT_OFFSET))(this, value);
		}

		::Class_1_9DF8A96088853ABF* get_NavPathFollow()
		{
			return ((::Class_1_9DF8A96088853ABF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_NAVPATHFOLLOW_OFFSET))(this);
		}

		::System::Void set_NavPathFollow(::Class_1_9DF8A96088853ABF* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9DF8A96088853ABF*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_NAVPATHFOLLOW_OFFSET))(this, value);
		}

		::System::Void HandlePlayerNavigateDone(::MoleMole::Battle::Entity* avatar, ::System::Boolean abortByOvertime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_HANDLEPLAYERNAVIGATEDONE_OFFSET))(this, avatar, abortByOvertime);
		}

		::System::Boolean get_UseNavMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_USENAVMESH_OFFSET))(this);
		}

		::System::Void set_UseNavMesh(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_USENAVMESH_OFFSET))(this, value);
		}

		::System::Boolean get_NoTurnAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_NOTURNANIM_OFFSET))(this);
		}

		::System::Void set_NoTurnAnim(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_NOTURNANIM_OFFSET))(this, value);
		}

		::System::Single get_MaxWaitIdleTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_MAXWAITIDLETIME_OFFSET))(this);
		}

		::System::Void set_MaxWaitIdleTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_MAXWAITIDLETIME_OFFSET))(this, value);
		}

		::System::Single get_CheckStandTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_CHECKSTANDTIME_OFFSET))(this);
		}

		::System::Void set_CheckStandTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_CHECKSTANDTIME_OFFSET))(this, value);
		}

		::System::Single get_CheckStandTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_CHECKSTANDTIMER_OFFSET))(this);
		}

		::System::Void set_CheckStandTimer(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_CHECKSTANDTIMER_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_CheckStandPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_CHECKSTANDPOS_OFFSET))(this);
		}

		::System::Void set_CheckStandPos(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_CHECKSTANDPOS_OFFSET))(this, value);
		}

		::System::Boolean get_NeedDetour()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_NEEDDETOUR_OFFSET))(this);
		}

		::System::Void set_NeedDetour(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_NEEDDETOUR_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_403*>* get_TotalPath()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_403*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_TOTALPATH_OFFSET))(this);
		}

		::System::Void set_TotalPath(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_403*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_403*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_TOTALPATH_OFFSET))(this, value);
		}

		::System::Int32 get_CurrentPathIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_CURRENTPATHINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentPathIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_CURRENTPATHINDEX_OFFSET))(this, value);
		}

		::System::Boolean get_StepFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_STEPFINISHED_OFFSET))(this);
		}

		::System::Void set_StepFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_STEPFINISHED_OFFSET))(this, value);
		}

		::System::Boolean Equals(::NodeGraph::MainCity::NavigateContainer* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeGraph::MainCity::NavigateContainer*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_EQUALS_OFFSET))(this, other);
		}
	};
}
