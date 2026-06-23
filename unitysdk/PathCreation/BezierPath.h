#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PathCreation/BezierPath_ControlMode.h"
#include "unitysdk/PathCreation/PathSpace.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define PATHCREATION_BEZIERPATH_ADDSEGMENTTOEND_OFFSET UNITYSDK_OFFSET(0x1DAB6550)
#define PATHCREATION_BEZIERPATH_ADDSEGMENTTOSTART_OFFSET UNITYSDK_OFFSET(0x1DAB7950)
#define PATHCREATION_BEZIERPATH_ADD_ONMODIFIED_OFFSET UNITYSDK_OFFSET(0x1DAB5A90)
#define PATHCREATION_BEZIERPATH_ADD_ONMOVEPOINT_OFFSET UNITYSDK_OFFSET(0x1DAB5B90)
#define PATHCREATION_BEZIERPATH_AUTOSETALLAFFECTEDCONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x1DAB78D0)
#define PATHCREATION_BEZIERPATH_AUTOSETALLCONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x1DAB7790)
#define PATHCREATION_BEZIERPATH_AUTOSETANCHORCONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x1DABA960)
#define PATHCREATION_BEZIERPATH_AUTOSETSTARTANDENDCONTROLS_OFFSET UNITYSDK_OFFSET(0x1DABAF50)
#define PATHCREATION_BEZIERPATH_CALCULATEBOUNDSWITHTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1DAB9390)
#define PATHCREATION_BEZIERPATH_DELETESEGMENT_OFFSET UNITYSDK_OFFSET(0x1DAB90D0)
#define PATHCREATION_BEZIERPATH_GETANCHORNORMALANGLE_OFFSET UNITYSDK_OFFSET(0x1DABA180)
#define PATHCREATION_BEZIERPATH_GETPOINTSINSEGMENT_OFFSET UNITYSDK_OFFSET(0x1DAB84A0)
#define PATHCREATION_BEZIERPATH_GETPOINT_OFFSET UNITYSDK_OFFSET(0x1DAB6C90)
#define PATHCREATION_BEZIERPATH_GET_AUTOCONTROLLENGTH_OFFSET UNITYSDK_OFFSET(0x1DAB7810)
#define PATHCREATION_BEZIERPATH_GET_CONTROLPOINTMODE_OFFSET UNITYSDK_OFFSET(0x1DAB76E0)
#define PATHCREATION_BEZIERPATH_GET_FLIPNORMALS_OFFSET UNITYSDK_OFFSET(0x1DABA110)
#define PATHCREATION_BEZIERPATH_GET_GLOBALNORMALSANGLE_OFFSET UNITYSDK_OFFSET(0x1DABA140)
#define PATHCREATION_BEZIERPATH_GET_ISCLOSED_OFFSET UNITYSDK_OFFSET(0x1DAB72A0)
#define PATHCREATION_BEZIERPATH_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DAB6C40)
#define PATHCREATION_BEZIERPATH_GET_NUMANCHORPOINTS_OFFSET UNITYSDK_OFFSET(0x1DAB6DA0)
#define PATHCREATION_BEZIERPATH_GET_NUMPOINTS_OFFSET UNITYSDK_OFFSET(0x1DAB6D80)
#define PATHCREATION_BEZIERPATH_GET_NUMSEGMENTS_OFFSET UNITYSDK_OFFSET(0x1DAB6DF0)
#define PATHCREATION_BEZIERPATH_GET_PATHBOUNDS_OFFSET UNITYSDK_OFFSET(0x1DABA2E0)
#define PATHCREATION_BEZIERPATH_GET_SPACE_OFFSET UNITYSDK_OFFSET(0x1DAB6E20)
#define PATHCREATION_BEZIERPATH_LOOPINDEX_OFFSET UNITYSDK_OFFSET(0x1DAB9360)
#define PATHCREATION_BEZIERPATH_MOVEPOINT_OFFSET UNITYSDK_OFFSET(0x1DAB8B70)
#define PATHCREATION_BEZIERPATH_NOTIFYPATHMODIFIED_OFFSET UNITYSDK_OFFSET(0x1DAB6D60)
#define PATHCREATION_BEZIERPATH_ONMOVEPONT_OFFSET UNITYSDK_OFFSET(0x1DAB5C90)
#define PATHCREATION_BEZIERPATH_REMOVE_ONMODIFIED_OFFSET UNITYSDK_OFFSET(0x1DAB5B10)
#define PATHCREATION_BEZIERPATH_REMOVE_ONMOVEPOINT_OFFSET UNITYSDK_OFFSET(0x1DAB5C10)
#define PATHCREATION_BEZIERPATH_RESETNORMALANGLES_OFFSET UNITYSDK_OFFSET(0x1DABA250)
#define PATHCREATION_BEZIERPATH_SETANCHORNORMALANGLE_OFFSET UNITYSDK_OFFSET(0x1DABA1C0)
#define PATHCREATION_BEZIERPATH_SETPOINT_OFFSET UNITYSDK_OFFSET(0x1DAB6CE0)
#define PATHCREATION_BEZIERPATH_SET_AUTOCONTROLLENGTH_OFFSET UNITYSDK_OFFSET(0x1DAB7820)
#define PATHCREATION_BEZIERPATH_SET_CONTROLPOINTMODE_OFFSET UNITYSDK_OFFSET(0x1DAB76F0)
#define PATHCREATION_BEZIERPATH_SET_FLIPNORMALS_OFFSET UNITYSDK_OFFSET(0x1DABA120)
#define PATHCREATION_BEZIERPATH_SET_GLOBALNORMALSANGLE_OFFSET UNITYSDK_OFFSET(0x1DABA150)
#define PATHCREATION_BEZIERPATH_SET_ISCLOSED_OFFSET UNITYSDK_OFFSET(0x1DAB62B0)
#define PATHCREATION_BEZIERPATH_SET_SPACE_OFFSET UNITYSDK_OFFSET(0x1DAB6290)
#define PATHCREATION_BEZIERPATH_SPLITSEGMENT_OFFSET UNITYSDK_OFFSET(0x1DAB7C90)
#define PATHCREATION_BEZIERPATH_UPDATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1DABA320)
#define PATHCREATION_BEZIERPATH_UPDATECLOSEDSTATE_OFFSET UNITYSDK_OFFSET(0x1DAB72B0)
#define PATHCREATION_BEZIERPATH_UPDATETONEWPATHSPACE_OFFSET UNITYSDK_OFFSET(0x1DAB6E30)
#define PATHCREATION_BEZIERPATH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DAB62C0)
#define PATHCREATION_BEZIERPATH__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DAB68E0)
#define PATHCREATION_BEZIERPATH__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1DAB6A00)
#define PATHCREATION_BEZIERPATH__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1DAB6B20)
#define PATHCREATION_BEZIERPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB5D00)

namespace PathCreation
{
	inline static constexpr unsigned int BezierPath_TypeDefinitionIndex = 37441;

	class BezierPath : public ::System::Object
	{
	public:
		::System::Action* OnModified; // 0x10
		::System::Action_2<::System::Int32, ::UnityEngine::Vector3>* OnMovePoint; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points; // 0x20
		::System::Boolean isClosed; // 0x28
		::PathCreation::PathSpace space; // 0x2C
		::PathCreation::BezierPath_ControlMode controlMode; // 0x30
		::System::Single autoControlLength; // 0x34
		::System::Boolean boundsUpToDate; // 0x38
		::UnityEngine::Bounds bounds; // 0x3C
		::System::Collections::Generic::List_1<::System::Single>* perAnchorNormalsAngle; // 0x58
		::System::Single globalNormalsAngle; // 0x60
		::System::Boolean flipNormals; // 0x64

		::System::Void _ctor(::UnityEngine::Vector3 centre, ::System::Boolean isClosed, ::PathCreation::PathSpace space, ::System::Boolean isSphere)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::PathCreation::PathSpace, ::System::Boolean))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH__CTOR_OFFSET))(this, centre, isClosed, space, isSphere);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* points, ::System::Boolean isClosed, ::PathCreation::PathSpace space)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*, ::System::Boolean, ::PathCreation::PathSpace))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH__CTOR_1_OFFSET))(this, points, isClosed, space);
		}

		::System::Void _ctor_2(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* transforms, ::System::Boolean isClosed, ::PathCreation::PathSpace space)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*, ::System::Boolean, ::PathCreation::PathSpace))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH__CTOR_2_OFFSET))(this, transforms, isClosed, space);
		}

		::System::Void _ctor_3(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>* transforms, ::System::Boolean isClosed, ::PathCreation::PathSpace space)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>*, ::System::Boolean, ::PathCreation::PathSpace))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH__CTOR_3_OFFSET))(this, transforms, isClosed, space);
		}

		::System::Void _ctor_4(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* points, ::PathCreation::PathSpace space, ::System::Boolean isClosed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*, ::PathCreation::PathSpace, ::System::Boolean))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH__CTOR_4_OFFSET))(this, points, space, isClosed);
		}

		::System::Void add_OnModified(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_ADD_ONMODIFIED_OFFSET))(this, value);
		}

		::System::Void remove_OnModified(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_REMOVE_ONMODIFIED_OFFSET))(this, value);
		}

		::System::Void add_OnMovePoint(::System::Action_2<::System::Int32, ::UnityEngine::Vector3>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_ADD_ONMOVEPOINT_OFFSET))(this, value);
		}

		::System::Void remove_OnMovePoint(::System::Action_2<::System::Int32, ::UnityEngine::Vector3>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_REMOVE_ONMOVEPOINT_OFFSET))(this, value);
		}

		::System::Void OnMovePont(::System::Int32 i, ::UnityEngine::Vector3 localPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_ONMOVEPONT_OFFSET))(this, i, localPos);
		}

		::UnityEngine::Vector3 get_Item(::System::Int32 i)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_GET_ITEM_OFFSET))(this, i);
		}

		::UnityEngine::Vector3 GetPoint(::System::Int32 i)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_GETPOINT_OFFSET))(this, i);
		}

		::System::Void SetPoint(::System::Int32 i, ::UnityEngine::Vector3 localPosition, ::System::Boolean suppressPathModifiedEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_SETPOINT_OFFSET))(this, i, localPosition, suppressPathModifiedEvent);
		}

		::System::Int32 get_NumPoints()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_GET_NUMPOINTS_OFFSET))(this);
		}

		::System::Int32 get_NumAnchorPoints()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_GET_NUMANCHORPOINTS_OFFSET))(this);
		}

		::System::Int32 get_NumSegments()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_GET_NUMSEGMENTS_OFFSET))(this);
		}

		::PathCreation::PathSpace get_Space()
		{
			return ((::PathCreation::PathSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_GET_SPACE_OFFSET))(this);
		}

		::System::Void set_Space(::PathCreation::PathSpace value)
		{
			return ((::System::Void(*)(::PVOID, ::PathCreation::PathSpace))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_SET_SPACE_OFFSET))(this, value);
		}

		::System::Boolean get_IsClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_GET_ISCLOSED_OFFSET))(this);
		}

		::System::Void set_IsClosed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_SET_ISCLOSED_OFFSET))(this, value);
		}

		::PathCreation::BezierPath_ControlMode get_ControlPointMode()
		{
			return ((::PathCreation::BezierPath_ControlMode(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_GET_CONTROLPOINTMODE_OFFSET))(this);
		}

		::System::Void set_ControlPointMode(::PathCreation::BezierPath_ControlMode value)
		{
			return ((::System::Void(*)(::PVOID, ::PathCreation::BezierPath_ControlMode))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_SET_CONTROLPOINTMODE_OFFSET))(this, value);
		}

		::System::Single get_AutoControlLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_GET_AUTOCONTROLLENGTH_OFFSET))(this);
		}

		::System::Void set_AutoControlLength(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_SET_AUTOCONTROLLENGTH_OFFSET))(this, value);
		}

		::System::Void AddSegmentToEnd(::UnityEngine::Vector3 anchorPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_ADDSEGMENTTOEND_OFFSET))(this, anchorPos);
		}

		::System::Void AddSegmentToStart(::UnityEngine::Vector3 anchorPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_ADDSEGMENTTOSTART_OFFSET))(this, anchorPos);
		}

		::System::Void SplitSegment(::UnityEngine::Vector3 anchorPos, ::System::Int32 segmentIndex, ::System::Single splitTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_SPLITSEGMENT_OFFSET))(this, anchorPos, segmentIndex, splitTime);
		}

		::System::Void DeleteSegment(::System::Int32 anchorIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_DELETESEGMENT_OFFSET))(this, anchorIndex);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetPointsInSegment(::System::Int32 segmentIndex)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_GETPOINTSINSEGMENT_OFFSET))(this, segmentIndex);
		}

		::System::Void MovePoint(::System::Int32 i, ::UnityEngine::Vector3 pointPos, ::System::Boolean suppressPathModifiedEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_MOVEPOINT_OFFSET))(this, i, pointPos, suppressPathModifiedEvent);
		}

		::UnityEngine::Bounds CalculateBoundsWithTransform(::UnityEngine::Transform* transform)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_CALCULATEBOUNDSWITHTRANSFORM_OFFSET))(this, transform);
		}

		::System::Boolean get_FlipNormals()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_GET_FLIPNORMALS_OFFSET))(this);
		}

		::System::Void set_FlipNormals(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_SET_FLIPNORMALS_OFFSET))(this, value);
		}

		::System::Single get_GlobalNormalsAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_GET_GLOBALNORMALSANGLE_OFFSET))(this);
		}

		::System::Void set_GlobalNormalsAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_SET_GLOBALNORMALSANGLE_OFFSET))(this, value);
		}

		::System::Single GetAnchorNormalAngle(::System::Int32 anchorIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_GETANCHORNORMALANGLE_OFFSET))(this, anchorIndex);
		}

		::System::Void SetAnchorNormalAngle(::System::Int32 anchorIndex, ::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_SETANCHORNORMALANGLE_OFFSET))(this, anchorIndex, angle);
		}

		::System::Void ResetNormalAngles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_RESETNORMALANGLES_OFFSET))(this);
		}

		::UnityEngine::Bounds get_PathBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_GET_PATHBOUNDS_OFFSET))(this);
		}

		::System::Void UpdateBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_UPDATEBOUNDS_OFFSET))(this);
		}

		::System::Void AutoSetAllAffectedControlPoints(::System::Int32 updatedAnchorIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_AUTOSETALLAFFECTEDCONTROLPOINTS_OFFSET))(this, updatedAnchorIndex);
		}

		::System::Void AutoSetAllControlPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_AUTOSETALLCONTROLPOINTS_OFFSET))(this);
		}

		::System::Void AutoSetAnchorControlPoints(::System::Int32 anchorIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_AUTOSETANCHORCONTROLPOINTS_OFFSET))(this, anchorIndex);
		}

		::System::Void AutoSetStartAndEndControls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_AUTOSETSTARTANDENDCONTROLS_OFFSET))(this);
		}

		::System::Void UpdateToNewPathSpace(::PathCreation::PathSpace previousSpace)
		{
			return ((::System::Void(*)(::PVOID, ::PathCreation::PathSpace))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_UPDATETONEWPATHSPACE_OFFSET))(this, previousSpace);
		}

		::System::Void UpdateClosedState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_UPDATECLOSEDSTATE_OFFSET))(this);
		}

		::System::Int32 LoopIndex(::System::Int32 i)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_LOOPINDEX_OFFSET))(this, i);
		}

		::System::Void NotifyPathModified()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH_NOTIFYPATHMODIFIED_OFFSET))(this);
		}
	};
}
