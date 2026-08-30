#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurveChangedArgs_ChangeTypeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurvePointField_TypeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurvePoint_ControlTypeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurve_EventModeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurve_ForceChangedEventModeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurve_Mode2DEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurve_PointsModeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurve_SnapAxisEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurve_SnapTypeEnum.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/QueryTriggerInteraction.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Curve { class BGCurveChangedArgs; }
namespace BansheeGz::BGSpline::Curve { class BGCurveChangedArgs_BeforeChange; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePoint; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePointComponent; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePointField; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePointGO; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePointI; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePoint_FieldsValues; }
namespace BansheeGz::BGSpline::Curve { class BGCurveSettings; }
namespace BansheeGz::BGSpline::Curve { class BGCurve_FieldsTree; }
namespace BansheeGz::BGSpline::Curve { class BGCurve_IterationCallback; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class EventHandler_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ADDFIELDS_OFFSET UNITYSDK_OFFSET(0x183B16D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ADDFIELD_1_OFFSET UNITYSDK_OFFSET(0x183ABC60)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ADDFIELD_OFFSET UNITYSDK_OFFSET(0x183ABC50)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ADDPOINTS_1_OFFSET UNITYSDK_OFFSET(0x183A8240)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ADDPOINTS_2_OFFSET UNITYSDK_OFFSET(0x183A7A70)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ADDPOINTS_OFFSET UNITYSDK_OFFSET(0x183A7A30)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ADDPOINT_1_OFFSET UNITYSDK_OFFSET(0x183A7A20)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ADDPOINT_2_OFFSET UNITYSDK_OFFSET(0x183A7590)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ADDPOINT_OFFSET UNITYSDK_OFFSET(0x183A7560)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ADD_BEFORECHANGE_OFFSET UNITYSDK_OFFSET(0x183A42E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ADD_CHANGED_OFFSET UNITYSDK_OFFSET(0x18391D40)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_APPLY2D_1_OFFSET UNITYSDK_OFFSET(0x183AD320)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_APPLY2D_2_OFFSET UNITYSDK_OFFSET(0x183AD930)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_APPLY2D_OFFSET UNITYSDK_OFFSET(0x183A5AD0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_APPLYSNAPPING_1_OFFSET UNITYSDK_OFFSET(0x183AD9B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_APPLYSNAPPING_2_OFFSET UNITYSDK_OFFSET(0x183ADBE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_APPLYSNAPPING_OFFSET UNITYSDK_OFFSET(0x183A5EB0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_CACHEPOINTSWITHTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x183A9950)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_CLEAR_OFFSET UNITYSDK_OFFSET(0x183A7140)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_CONVERTGOTOINLINE_OFFSET UNITYSDK_OFFSET(0x183B1A50)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_CONVERTINLINETOGO_OFFSET UNITYSDK_OFFSET(0x183B17B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_CONVERTPOINTS_OFFSET UNITYSDK_OFFSET(0x183A49F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_CONVERT_OFFSET UNITYSDK_OFFSET(0x183AF740)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_CREATEPOINTFROMLOCALPOSITION_1_OFFSET UNITYSDK_OFFSET(0x183A70A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_CREATEPOINTFROMLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x183A7010)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_CREATEPOINTFROMWORLDPOSITION_1_OFFSET UNITYSDK_OFFSET(0x183A6EB0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_CREATEPOINTFROMWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x183A6DA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_DELETEFIELD_1_OFFSET UNITYSDK_OFFSET(0x183AC0F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_DELETEFIELD_OFFSET UNITYSDK_OFFSET(0x183AC0E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_DELETE_1_OFFSET UNITYSDK_OFFSET(0x183A8510)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_DELETE_2_OFFSET UNITYSDK_OFFSET(0x183A8520)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_DELETE_3_OFFSET UNITYSDK_OFFSET(0x183A8280)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_DELETE_4_OFFSET UNITYSDK_OFFSET(0x183A8530)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_DELETE_OFFSET UNITYSDK_OFFSET(0x183A8260)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_DESTROYIT_OFFSET UNITYSDK_OFFSET(0x183A7440)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FIREBEFORECHANGE_OFFSET UNITYSDK_OFFSET(0x183A45B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FIRECHANGE_OFFSET UNITYSDK_OFFSET(0x183A4710)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FIREFINALEVENT_OFFSET UNITYSDK_OFFSET(0x183AEAD0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FOREACH_OFFSET UNITYSDK_OFFSET(0x183AF370)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GETFIELDSVALUES_OFFSET UNITYSDK_OFFSET(0x183AB4D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GETFIELD_OFFSET UNITYSDK_OFFSET(0x183AC6C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_CHANGELIST_OFFSET UNITYSDK_OFFSET(0x183A6D30)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_CLOSED_OFFSET UNITYSDK_OFFSET(0x183A4410)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_EVENTMODE_OFFSET UNITYSDK_OFFSET(0x183A6CF0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_FIELDSCOUNT_OFFSET UNITYSDK_OFFSET(0x183A43F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_FIELDS_OFFSET UNITYSDK_OFFSET(0x183A43E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_FORCECHANGEDEVENTMODE_OFFSET UNITYSDK_OFFSET(0x183A6AB0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_IMMEDIATECHANGEEVENTS_OFFSET UNITYSDK_OFFSET(0x183A6D10)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x18389B80)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_MODE2DON_OFFSET UNITYSDK_OFFSET(0x18399EF0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_MODE2D_OFFSET UNITYSDK_OFFSET(0x183A5AB0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_POINTSCOUNT_OFFSET UNITYSDK_OFFSET(0x183887F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_POINTSMODE_OFFSET UNITYSDK_OFFSET(0x183A49C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_POINTS_OFFSET UNITYSDK_OFFSET(0x18394880)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x183A42D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_SNAPAXIS_OFFSET UNITYSDK_OFFSET(0x183A5F90)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_SNAPDISTANCE_OFFSET UNITYSDK_OFFSET(0x183A6160)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_SNAPLAYERMASK_OFFSET UNITYSDK_OFFSET(0x183A6720)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_SNAPMONITORING_OFFSET UNITYSDK_OFFSET(0x183A68F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_SNAPTOBACKFACES_OFFSET UNITYSDK_OFFSET(0x183A6550)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_SNAPTRIGGERINTERACTION_OFFSET UNITYSDK_OFFSET(0x183A6380)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_SNAPTYPE_OFFSET UNITYSDK_OFFSET(0x183A5CE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_SUPRESSEVENTS_OFFSET UNITYSDK_OFFSET(0x183A6C90)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_TRACECHANGES_OFFSET UNITYSDK_OFFSET(0x183A6C70)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_TRANSACTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x183AE970)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_USEEVENTSARGS_OFFSET UNITYSDK_OFFSET(0x183A6CD0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_HASFIELD_OFFSET UNITYSDK_OFFSET(0x183AC7A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_INDEXOFFIELDVALUE_OFFSET UNITYSDK_OFFSET(0x183AC880)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_INDEXOF_1_OFFSET UNITYSDK_OFFSET(0x183AC5F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_INDEXOF_OFFSET UNITYSDK_OFFSET(0x183A7450)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ISGOMODE_OFFSET UNITYSDK_OFFSET(0x183A9750)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x183AF170)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_PRIVATETRANSFORMFORPOINTADDED_OFFSET UNITYSDK_OFFSET(0x183AF570)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_PRIVATETRANSFORMFORPOINTREMOVED_OFFSET UNITYSDK_OFFSET(0x183AF6A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_PRIVATEUPDATEFIELDSVALUESINDEXES_OFFSET UNITYSDK_OFFSET(0x183AC9E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_REMOVE_BEFORECHANGE_OFFSET UNITYSDK_OFFSET(0x183A4360)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_REMOVE_CHANGED_OFFSET UNITYSDK_OFFSET(0x18393210)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_REVERSE_OFFSET UNITYSDK_OFFSET(0x183A9C00)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SETFIELDSVALUES_OFFSET UNITYSDK_OFFSET(0x183AB740)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SETPOINTSNAMES_OFFSET UNITYSDK_OFFSET(0x183A9760)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_CLOSED_OFFSET UNITYSDK_OFFSET(0x183A4420)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_EVENTMODE_OFFSET UNITYSDK_OFFSET(0x183A6D00)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_FORCECHANGEDEVENTMODE_OFFSET UNITYSDK_OFFSET(0x183A6AC0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_IMMEDIATECHANGEEVENTS_OFFSET UNITYSDK_OFFSET(0x183A6D20)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x183AB9C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_MODE2D_OFFSET UNITYSDK_OFFSET(0x183A5AC0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_POINTSMODE_OFFSET UNITYSDK_OFFSET(0x183A49D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_SNAPAXIS_OFFSET UNITYSDK_OFFSET(0x183A5FA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_SNAPDISTANCE_OFFSET UNITYSDK_OFFSET(0x183A6170)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_SNAPLAYERMASK_OFFSET UNITYSDK_OFFSET(0x183A6730)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_SNAPMONITORING_OFFSET UNITYSDK_OFFSET(0x183A6900)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_SNAPTOBACKFACES_OFFSET UNITYSDK_OFFSET(0x183A6560)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_SNAPTRIGGERINTERACTION_OFFSET UNITYSDK_OFFSET(0x183A6390)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_SNAPTYPE_OFFSET UNITYSDK_OFFSET(0x183A5CF0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_SUPRESSEVENTS_OFFSET UNITYSDK_OFFSET(0x183A6CA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_TRACECHANGES_OFFSET UNITYSDK_OFFSET(0x183A6C80)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_USEEVENTSARGS_OFFSET UNITYSDK_OFFSET(0x183A6CE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SNAPIT_OFFSET UNITYSDK_OFFSET(0x183AE6E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_START_OFFSET UNITYSDK_OFFSET(0x183AEA50)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SWAP_OFFSET UNITYSDK_OFFSET(0x183A9110)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_TOLOCALDIRECTION_OFFSET UNITYSDK_OFFSET(0x183AF290)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_TOLOCAL_OFFSET UNITYSDK_OFFSET(0x183AF1B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x183AF4C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_TOWORLDDIRECTION_OFFSET UNITYSDK_OFFSET(0x183AF300)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_TOWORLD_OFFSET UNITYSDK_OFFSET(0x183AF220)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_TRANSACTION_OFFSET UNITYSDK_OFFSET(0x183ACFA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_UPDATE_OFFSET UNITYSDK_OFFSET(0x183AEA60)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE__APPLY2D_B__169_0_OFFSET UNITYSDK_OFFSET(0x183B4120)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE__CCTOR_OFFSET UNITYSDK_OFFSET(0x183B4050)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x183B3FC0)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurve_TypeDefinitionIndex = 35299;

	class BGCurve : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_raycastHitArray()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(BGCurve_TypeDefinitionIndex)->GetStaticField(0x558A0);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_pointsIndexesList()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BGCurve_TypeDefinitionIndex)->GetStaticField(0x558A8);
		}
		static ::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointI*>** StaticGet_pointArray()
		{
			return (::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointI*>**)Il2CppClass::FromTypeDefinitionIndex(BGCurve_TypeDefinitionIndex)->GetStaticField(0x558B0);
		}
		static ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Curve::BGCurvePointI*>** StaticGet_pointsList()
		{
			return (::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Curve::BGCurvePointI*>**)Il2CppClass::FromTypeDefinitionIndex(BGCurve_TypeDefinitionIndex)->GetStaticField(0x558B8);
		}
		// static const ::System::Single Version; // 0x0
		// static const ::System::Single Epsilon; // 0x0
		// static const ::System::Single MinSnapDistance; // 0x0
		// static const ::System::Single MaxSnapDistance; // 0x0
		// static const ::System::String* MethodAddPoint; // 0x0
		// static const ::System::String* MethodDeletePoint; // 0x0
		// static const ::System::String* MethodSetPointsNames; // 0x0
		// static const ::System::String* MethodAddField; // 0x0
		// static const ::System::String* MethodDeleteField; // 0x0
		// static const ::System::String* MethodConvertPoints; // 0x0
		// static const ::System::String* EventClosed; // 0x0
		// static const ::System::String* EventSnapType; // 0x0
		// static const ::System::String* EventSnapAxis; // 0x0
		// static const ::System::String* EventSnapDistance; // 0x0
		// static const ::System::String* EventSnapTrigger; // 0x0
		// static const ::System::String* EventSnapBackfaces; // 0x0
		// static const ::System::String* EventSnapLayerMask; // 0x0
		// static const ::System::String* EventSnapMonitoring; // 0x0
		// static const ::System::String* EventAddField; // 0x0
		// static const ::System::String* EventDeleteField; // 0x0
		// static const ::System::String* EventFieldName; // 0x0
		// static const ::System::String* Event2D; // 0x0
		// static const ::System::String* EventForceUpdate; // 0x0
		// static const ::System::String* EventPointsMode; // 0x0
		// static const ::System::String* EventClearAllPoints; // 0x0
		// static const ::System::String* EventAddPoint; // 0x0
		// static const ::System::String* EventAddPoints; // 0x0
		// static const ::System::String* EventDeletePoints; // 0x0
		// static const ::System::String* EventSwapPoints; // 0x0
		// static const ::System::String* EventReversePoints; // 0x0
		// static const ::System::String* EventTransaction; // 0x0
		// static const ::System::String* EventTransform; // 0x0
		// static const ::System::String* EventForcedUpdate; // 0x0
		// static const ::System::String* EventPointPosition; // 0x0
		// static const ::System::String* EventPointTransform; // 0x0
		// static const ::System::String* EventPointControl; // 0x0
		// static const ::System::String* EventPointControlType; // 0x0
		// static const ::System::String* EventPointField; // 0x0
		::BansheeGz::BGSpline::Curve::BGCurveSettings* settings; // 0x18
		::System::EventHandler_1<::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*>* Changed; // 0x20
		::System::EventHandler_1<::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_BeforeChange*>* BeforeChange; // 0x28
		::BansheeGz::BGSpline::Curve::BGCurve_Mode2DEnum mode2D; // 0x30
		::System::Boolean closed; // 0x34
		::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePoint*>* points; // 0x38
		::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointComponent*>* pointsComponents; // 0x40
		::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointGO*>* pointsGameObjects; // 0x48
		::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointField*>* fields; // 0x50
		::BansheeGz::BGSpline::Curve::BGCurve_SnapTypeEnum snapType; // 0x58
		::BansheeGz::BGSpline::Curve::BGCurve_SnapAxisEnum snapAxis; // 0x5C
		::System::Single snapDistance; // 0x60
		::UnityEngine::LayerMask snapLayerMask; // 0x64
		::UnityEngine::QueryTriggerInteraction snapTriggerInteraction; // 0x68
		::System::Boolean snapToBackFaces; // 0x6C
		::System::Boolean snapMonitoring; // 0x6D
		::BansheeGz::BGSpline::Curve::BGCurve_EventModeEnum eventMode; // 0x70
		::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum pointsMode; // 0x74
		::BansheeGz::BGSpline::Curve::BGCurve_ForceChangedEventModeEnum forceChangedEventMode; // 0x78
		::System::Int32 transactionLevel; // 0x7C
		::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*>* changeList; // 0x80
		::BansheeGz::BGSpline::Curve::BGCurve_FieldsTree* fieldsTree; // 0x88
		::System::Boolean changed; // 0x90
		::System::Boolean immediateChangeEvents; // 0x91
		::BansheeGz::BGSpline::Curve::BGCurve_EventModeEnum eventModeOld; // 0x94
		::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_ChangeTypeEnum lastEventType; // 0x98
		::System::String* lastEventMessage; // 0xA0
		::System::Collections::Generic::List_1<::System::Int32>* pointsWithTransforms; // 0xA8
		::System::Boolean _UseEventsArgs_k__BackingField; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE__CCTOR_OFFSET))();
		}

		::BansheeGz::BGSpline::Curve::BGCurveSettings* get_Settings()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_SETTINGS_OFFSET))(this);
		}

		::System::Void add_Changed(::System::EventHandler_1<::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ADD_CHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_Changed(::System::EventHandler_1<::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_REMOVE_CHANGED_OFFSET))(this, a1);
		}

		::System::Void add_BeforeChange(::System::EventHandler_1<::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_BeforeChange*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_BeforeChange*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ADD_BEFORECHANGE_OFFSET))(this, a1);
		}

		::System::Void remove_BeforeChange(::System::EventHandler_1<::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_BeforeChange*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::BansheeGz::BGSpline::Curve::BGCurveChangedArgs_BeforeChange*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_REMOVE_BEFORECHANGE_OFFSET))(this, a1);
		}

		::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointI*>* get_Points()
		{
			return ((::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_POINTS_OFFSET))(this);
		}

		::System::Int32 get_PointsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_POINTSCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointField*>* get_Fields()
		{
			return ((::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointField*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_FIELDS_OFFSET))(this);
		}

		::System::Int32 get_FieldsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_FIELDSCOUNT_OFFSET))(this);
		}

		::System::Boolean get_Closed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_CLOSED_OFFSET))(this);
		}

		::System::Void set_Closed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_CLOSED_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum get_PointsMode()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_POINTSMODE_OFFSET))(this);
		}

		::System::Void set_PointsMode(::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_POINTSMODE_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurve_Mode2DEnum get_Mode2D()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve_Mode2DEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_MODE2D_OFFSET))(this);
		}

		::System::Void set_Mode2D(::BansheeGz::BGSpline::Curve::BGCurve_Mode2DEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve_Mode2DEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_MODE2D_OFFSET))(this, a1);
		}

		::System::Boolean get_Mode2DOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_MODE2DON_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurve_SnapTypeEnum get_SnapType()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve_SnapTypeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_SNAPTYPE_OFFSET))(this);
		}

		::System::Void set_SnapType(::BansheeGz::BGSpline::Curve::BGCurve_SnapTypeEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve_SnapTypeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_SNAPTYPE_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurve_SnapAxisEnum get_SnapAxis()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve_SnapAxisEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_SNAPAXIS_OFFSET))(this);
		}

		::System::Void set_SnapAxis(::BansheeGz::BGSpline::Curve::BGCurve_SnapAxisEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve_SnapAxisEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_SNAPAXIS_OFFSET))(this, a1);
		}

		::System::Single get_SnapDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_SNAPDISTANCE_OFFSET))(this);
		}

		::System::Void set_SnapDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_SNAPDISTANCE_OFFSET))(this, a1);
		}

		::UnityEngine::QueryTriggerInteraction get_SnapTriggerInteraction()
		{
			return ((::UnityEngine::QueryTriggerInteraction(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_SNAPTRIGGERINTERACTION_OFFSET))(this);
		}

		::System::Void set_SnapTriggerInteraction(::UnityEngine::QueryTriggerInteraction a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_SNAPTRIGGERINTERACTION_OFFSET))(this, a1);
		}

		::System::Boolean get_SnapToBackFaces()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_SNAPTOBACKFACES_OFFSET))(this);
		}

		::System::Void set_SnapToBackFaces(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_SNAPTOBACKFACES_OFFSET))(this, a1);
		}

		::UnityEngine::LayerMask get_SnapLayerMask()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_SNAPLAYERMASK_OFFSET))(this);
		}

		::System::Void set_SnapLayerMask(::UnityEngine::LayerMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_SNAPLAYERMASK_OFFSET))(this, a1);
		}

		::System::Boolean get_SnapMonitoring()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_SNAPMONITORING_OFFSET))(this);
		}

		::System::Void set_SnapMonitoring(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_SNAPMONITORING_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurve_ForceChangedEventModeEnum get_ForceChangedEventMode()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve_ForceChangedEventModeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_FORCECHANGEDEVENTMODE_OFFSET))(this);
		}

		::System::Void set_ForceChangedEventMode(::BansheeGz::BGSpline::Curve::BGCurve_ForceChangedEventModeEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve_ForceChangedEventModeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_FORCECHANGEDEVENTMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_TraceChanges()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_TRACECHANGES_OFFSET))(this);
		}

		::System::Void set_TraceChanges(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_TRACECHANGES_OFFSET))(this, a1);
		}

		::System::Boolean get_SupressEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_SUPRESSEVENTS_OFFSET))(this);
		}

		::System::Void set_SupressEvents(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_SUPRESSEVENTS_OFFSET))(this, a1);
		}

		::System::Boolean get_UseEventsArgs()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_USEEVENTSARGS_OFFSET))(this);
		}

		::System::Void set_UseEventsArgs(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_USEEVENTSARGS_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurve_EventModeEnum get_EventMode()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve_EventModeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_EVENTMODE_OFFSET))(this);
		}

		::System::Void set_EventMode(::BansheeGz::BGSpline::Curve::BGCurve_EventModeEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve_EventModeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_EVENTMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_ImmediateChangeEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_IMMEDIATECHANGEEVENTS_OFFSET))(this);
		}

		::System::Void set_ImmediateChangeEvents(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_IMMEDIATECHANGEEVENTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*>* get_ChangeList()
		{
			return ((::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_CHANGELIST_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePoint* CreatePointFromWorldPosition(::UnityEngine::Vector3 a1, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum a2)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePoint*(*)(::PVOID, ::UnityEngine::Vector3, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_CREATEPOINTFROMWORLDPOSITION_OFFSET))(this, a1, a2);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePoint* CreatePointFromWorldPosition_1(::UnityEngine::Vector3 a1, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePoint*(*)(::PVOID, ::UnityEngine::Vector3, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_CREATEPOINTFROMWORLDPOSITION_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePoint* CreatePointFromLocalPosition(::UnityEngine::Vector3 a1, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum a2)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePoint*(*)(::PVOID, ::UnityEngine::Vector3, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_CREATEPOINTFROMLOCALPOSITION_OFFSET))(this, a1, a2);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePoint* CreatePointFromLocalPosition_1(::UnityEngine::Vector3 a1, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePoint*(*)(::PVOID, ::UnityEngine::Vector3, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_CREATEPOINTFROMLOCALPOSITION_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_CLEAR_OFFSET))(this);
		}

		::System::Int32 IndexOf(::BansheeGz::BGSpline::Curve::BGCurvePointI* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointI*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_INDEXOF_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePointI* AddPoint(::BansheeGz::BGSpline::Curve::BGCurvePoint* a1)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePointI*(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ADDPOINT_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePointI* AddPoint_1(::BansheeGz::BGSpline::Curve::BGCurvePoint* a1, ::System::Int32 a2)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePointI*(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint*, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ADDPOINT_1_OFFSET))(this, a1, a2);
		}

		::System::Void AddPoints(::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePoint*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePoint*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ADDPOINTS_OFFSET))(this, a1);
		}

		::System::Void AddPoints_1(::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePoint*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePoint*>*, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ADDPOINTS_1_OFFSET))(this, a1, a2);
		}

		::System::Void Delete(::BansheeGz::BGSpline::Curve::BGCurvePointI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointI*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_DELETE_OFFSET))(this, a1);
		}

		::System::Void Delete_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_DELETE_1_OFFSET))(this, a1);
		}

		::System::Void Delete_2(::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointI*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_DELETE_2_OFFSET))(this, a1);
		}

		::System::Void Swap(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SWAP_OFFSET))(this, a1, a2);
		}

		::System::Void Reverse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_REVERSE_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePointI* get_Item(::System::Int32 a1)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePointI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::BansheeGz::BGSpline::Curve::BGCurvePointI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BansheeGz::BGSpline::Curve::BGCurvePointI*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePointField* AddField(::System::String* a1, ::BansheeGz::BGSpline::Curve::BGCurvePointField_TypeEnum a2)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePointField*(*)(::PVOID, ::System::String*, ::BansheeGz::BGSpline::Curve::BGCurvePointField_TypeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ADDFIELD_OFFSET))(this, a1, a2);
		}

		::System::Void DeleteField(::BansheeGz::BGSpline::Curve::BGCurvePointField* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointField*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_DELETEFIELD_OFFSET))(this, a1);
		}

		::System::Int32 IndexOf_1(::BansheeGz::BGSpline::Curve::BGCurvePointField* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointField*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_INDEXOF_1_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePointField* GetField(::System::String* a1)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePointField*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GETFIELD_OFFSET))(this, a1);
		}

		::System::Boolean HasField(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_HASFIELD_OFFSET))(this, a1);
		}

		::System::Int32 IndexOfFieldValue(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_INDEXOFFIELDVALUE_OFFSET))(this, a1);
		}

		::System::Void PrivateUpdateFieldsValuesIndexes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_PRIVATEUPDATEFIELDSVALUESINDEXES_OFFSET))(this);
		}

		::System::Void Apply2D(::BansheeGz::BGSpline::Curve::BGCurve_Mode2DEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve_Mode2DEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_APPLY2D_OFFSET))(this, a1);
		}

		::System::Void Apply2D_1(::BansheeGz::BGSpline::Curve::BGCurvePointI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointI*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_APPLY2D_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Apply2D_2(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_APPLY2D_2_OFFSET))(this, a1);
		}

		::System::Boolean ApplySnapping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_APPLYSNAPPING_OFFSET))(this);
		}

		::System::Boolean ApplySnapping_1(::BansheeGz::BGSpline::Curve::BGCurvePointI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointI*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_APPLYSNAPPING_1_OFFSET))(this, a1);
		}

		::System::Boolean ApplySnapping_2(::UnityEngine::Vector3& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_APPLYSNAPPING_2_OFFSET))(this, a1);
		}

		::System::Void SnapIt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SNAPIT_OFFSET))(this);
		}

		::System::Void Transaction(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_TRANSACTION_OFFSET))(this, a1);
		}

		::System::Int32 get_TransactionLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GET_TRANSACTIONLEVEL_OFFSET))(this);
		}

		::System::Void FireBeforeChange(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FIREBEFORECHANGE_OFFSET))(this, a1);
		}

		::System::Void FireChange(::BansheeGz::BGSpline::Curve::BGCurveChangedArgs* a1, ::System::Boolean a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FIRECHANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_LATEUPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 ToLocal(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_TOLOCAL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ToWorld(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_TOWORLD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ToLocalDirection(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_TOLOCALDIRECTION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ToWorldDirection(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_TOWORLDDIRECTION_OFFSET))(this, a1);
		}

		::System::Void ForEach(::BansheeGz::BGSpline::Curve::BGCurve_IterationCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve_IterationCallback*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FOREACH_OFFSET))(this, a1);
		}

		::System::Void SetPointsNames()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SETPOINTSNAMES_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean IsGoMode(::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum a1)
		{
			return ((::System::Boolean(*)(::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ISGOMODE_OFFSET))(a1);
		}

		::System::Void PrivateTransformForPointAdded(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_PRIVATETRANSFORMFORPOINTADDED_OFFSET))(this, a1);
		}

		::System::Void PrivateTransformForPointRemoved(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_PRIVATETRANSFORMFORPOINTREMOVED_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePointI* AddPoint_2(::BansheeGz::BGSpline::Curve::BGCurvePoint* a1, ::System::Int32 a2, ::System::Func_1<::BansheeGz::BGSpline::Curve::BGCurvePointI*>* a3)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePointI*(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint*, ::System::Int32, ::System::Func_1<::BansheeGz::BGSpline::Curve::BGCurvePointI*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ADDPOINT_2_OFFSET))(this, a1, a2, a3);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues* GetFieldsValues(::BansheeGz::BGSpline::Curve::BGCurvePointI* a1, ::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum a2)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_GETFIELDSVALUES_OFFSET))(this, a1, a2);
		}

		::System::Void SetFieldsValues(::BansheeGz::BGSpline::Curve::BGCurvePointI* a1, ::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum a2, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_SETFIELDSVALUES_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddPoints_2(::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePoint*>* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Func_1<::BansheeGz::BGSpline::Curve::BGCurvePointI*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePoint*>*, ::System::Int32, ::System::Boolean, ::System::Func_1<::BansheeGz::BGSpline::Curve::BGCurvePointI*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ADDPOINTS_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Delete_3(::System::Int32 a1, ::System::Action_1<::BansheeGz::BGSpline::Curve::BGCurvePointI*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::BansheeGz::BGSpline::Curve::BGCurvePointI*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_DELETE_3_OFFSET))(this, a1, a2);
		}

		::System::Void Delete_4(::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointI*>* a1, ::System::Action_1<::BansheeGz::BGSpline::Curve::BGCurvePointI*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointI*>*, ::System::Action_1<::BansheeGz::BGSpline::Curve::BGCurvePointI*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_DELETE_4_OFFSET))(this, a1, a2);
		}

		::System::Void ConvertPoints(::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum a1, ::System::Func_1<::BansheeGz::BGSpline::Curve::BGCurvePointI*>* a2, ::System::Action_1<::BansheeGz::BGSpline::Curve::BGCurvePointI*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum, ::System::Func_1<::BansheeGz::BGSpline::Curve::BGCurvePointI*>*, ::System::Action_1<::BansheeGz::BGSpline::Curve::BGCurvePointI*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_CONVERTPOINTS_OFFSET))(this, a1, a2, a3);
		}

		static ::BansheeGz::BGSpline::Curve::BGCurvePointI* Convert(::BansheeGz::BGSpline::Curve::BGCurvePointI* a1, ::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum a2, ::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum a3, ::System::Func_1<::BansheeGz::BGSpline::Curve::BGCurvePointI*>* a4)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePointI*(*)(::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum, ::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum, ::System::Func_1<::BansheeGz::BGSpline::Curve::BGCurvePointI*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_CONVERT_OFFSET))(a1, a2, a3, a4);
		}

		static ::BansheeGz::BGSpline::Curve::BGCurvePointGO* ConvertInlineToGo(::BansheeGz::BGSpline::Curve::BGCurvePoint* a1, ::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum a2, ::System::Func_1<::BansheeGz::BGSpline::Curve::BGCurvePointI*>* a3)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePointGO*(*)(::BansheeGz::BGSpline::Curve::BGCurvePoint*, ::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum, ::System::Func_1<::BansheeGz::BGSpline::Curve::BGCurvePointI*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_CONVERTINLINETOGO_OFFSET))(a1, a2, a3);
		}

		static ::BansheeGz::BGSpline::Curve::BGCurvePoint* ConvertGoToInline(::BansheeGz::BGSpline::Curve::BGCurvePointGO* a1, ::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum a2)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePoint*(*)(::BansheeGz::BGSpline::Curve::BGCurvePointGO*, ::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_CONVERTGOTOINLINE_OFFSET))(a1, a2);
		}

		::System::Void FireFinalEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_FIREFINALEVENT_OFFSET))(this);
		}

		::System::Void AddFields(::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum a1, ::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointI*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum, ::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePointI*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ADDFIELDS_OFFSET))(this, a1, a2);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePointField* AddField_1(::System::String* a1, ::BansheeGz::BGSpline::Curve::BGCurvePointField_TypeEnum a2, ::System::Func_1<::BansheeGz::BGSpline::Curve::BGCurvePointField*>* a3)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePointField*(*)(::PVOID, ::System::String*, ::BansheeGz::BGSpline::Curve::BGCurvePointField_TypeEnum, ::System::Func_1<::BansheeGz::BGSpline::Curve::BGCurvePointField*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ADDFIELD_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DeleteField_1(::BansheeGz::BGSpline::Curve::BGCurvePointField* a1, ::System::Action_1<::BansheeGz::BGSpline::Curve::BGCurvePointField*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointField*, ::System::Action_1<::BansheeGz::BGSpline::Curve::BGCurvePointField*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_DELETEFIELD_1_OFFSET))(this, a1, a2);
		}

		::System::Void CachePointsWithTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_CACHEPOINTSWITHTRANSFORMS_OFFSET))(this);
		}

		static ::System::Void DestroyIt(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_DESTROYIT_OFFSET))(a1);
		}

		::System::Void _Apply2D_b__169_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE__APPLY2D_B__169_0_OFFSET))(this);
		}
	};
}
