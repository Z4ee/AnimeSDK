#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/ConnectionHeadingEnum.h"
#include "unitysdk/FluffyUnderware/Curvy/Controllers/CurvyController.h"
#include "unitysdk/FluffyUnderware/Curvy/Controllers/CurvyController_MoveModeEnum.h"
#include "unitysdk/FluffyUnderware/Curvy/Controllers/MovementDirection.h"
#include "unitysdk/FluffyUnderware/Curvy/Controllers/SplineControllerConnectionBehavior.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyClamping.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyPositionMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace FluffyUnderware::Curvy::Controllers { class ConnectedControlPointsSelector; }
namespace FluffyUnderware::Curvy::Controllers { class CurvySplineMoveEvent; }
namespace FluffyUnderware::Curvy::Controllers { class CurvySplineMoveEventArgs; }
namespace FluffyUnderware::Curvy::Controllers { class OnPositionReachedSettings; }
namespace FluffyUnderware::Curvy::Controllers { class SplineController_SplineSwitcher; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_ABSOLUTETORELATIVE_OFFSET UNITYSDK_OFFSET(0x1B91BB70)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_ADVANCESWITCHING_OFFSET UNITYSDK_OFFSET(0x1B91DAA0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_ADVANCE_OFFSET UNITYSDK_OFFSET(0x1B91C3A0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_CANCELCURRENTSWITCH_OFFSET UNITYSDK_OFFSET(0x1B91B710)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_COMPUTEPOSITIONANDROTATIONONSWITCHTARGET_OFFSET UNITYSDK_OFFSET(0x1B91E6F0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_COMPUTETARGETPOSITIONANDROTATION_OFFSET UNITYSDK_OFFSET(0x1B91E170)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_EVENTAWAREMOVE_OFFSET UNITYSDK_OFFSET(0x1B91C4B0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_FINISHCURRENTSWITCH_OFFSET UNITYSDK_OFFSET(0x1B91B6A0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GETANGLEBETWEENCONNECTEDSPLINES_OFFSET UNITYSDK_OFFSET(0x1B91B740)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GETCONTROLPOINTPOSITION_OFFSET UNITYSDK_OFFSET(0x1B91EC20)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GETINTERPOLATEDSOURCEPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1B91BE00)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GETINTERPOLATEDSOURCEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B91BC50)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GETORIENTATION_OFFSET UNITYSDK_OFFSET(0x1B91C260)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GETPOSTCONNECTIONDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B91B9C0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GETSWITCHINGPOSITIONANDROTATION_OFFSET UNITYSDK_OFFSET(0x1B91E480)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GETTANGENT_OFFSET UNITYSDK_OFFSET(0x1B91C0B0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_ALLOWDIRECTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1B91B000)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_CONNECTIONBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1B91AFC0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_CONNECTIONCUSTOMSELECTOR_OFFSET UNITYSDK_OFFSET(0x1B91AFE0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_DIRECTIONONSWITCHTARGET_OFFSET UNITYSDK_OFFSET(0x1B91AC30)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x1B91B480)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_ISSWITCHING_OFFSET UNITYSDK_OFFSET(0x1B91B130)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1B91B0E0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_MAXALLOWEDDIVERGENCEANGLE_OFFSET UNITYSDK_OFFSET(0x1B91B060)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_ONCONTROLPOINTREACHED_OFFSET UNITYSDK_OFFSET(0x1B91B0A0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_ONENDREACHED_OFFSET UNITYSDK_OFFSET(0x1B91B0C0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_ONPOSITIONREACHEDLIST_OFFSET UNITYSDK_OFFSET(0x1B91B080)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_ONSWITCH_OFFSET UNITYSDK_OFFSET(0x1B91B1B0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_REJECTCURRENTSPLINE_OFFSET UNITYSDK_OFFSET(0x1B91B020)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_REJECTTOODIVERGENTSPLINES_OFFSET UNITYSDK_OFFSET(0x1B91B040)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_SHOWRANDOMCONNECTIONOPTIONS_OFFSET UNITYSDK_OFFSET(0x1B920540)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_SPLINE_OFFSET UNITYSDK_OFFSET(0x1B91AF80)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_SWITCHDURATION_OFFSET UNITYSDK_OFFSET(0x1B91ABD0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_SWITCHPROGRESS_OFFSET UNITYSDK_OFFSET(0x1B91B150)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_SWITCHSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1B91ABB0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_SWITCHTARGET_OFFSET UNITYSDK_OFFSET(0x1B91ABF0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_TFONSWITCHTARGET_OFFSET UNITYSDK_OFFSET(0x1B91AC10)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_USECACHE_OFFSET UNITYSDK_OFFSET(0x1B91AFA0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_HANDLEFOLLOWUPCONNECTIONBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1B91F660)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_HANDLEONPOSITIONREACHEDEVENTS_OFFSET UNITYSDK_OFFSET(0x1B91ECE0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_HANDLEONPOSITIONREACHEDEVENT_OFFSET UNITYSDK_OFFSET(0x1B91FB80)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_HANDLERANDOMCONNECTIONBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1B91F910)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_HANDLEREACHINGNEWCONTROLPOINT_OFFSET UNITYSDK_OFFSET(0x1B91F2E0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_HEADINGTODIRECTION_OFFSET UNITYSDK_OFFSET(0x1B920390)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_INITIALIZEDAPPLYDELTATIME_OFFSET UNITYSDK_OFFSET(0x1B91DFB0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_INVOKEEVENTHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1B91FFD0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_INVOKEEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1B920100)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_MOVEMENTCOMPATIBLEGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B91E810)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_MOVEMENTCOMPATIBLESETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B91EA20)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1B91B1D0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_RELATIVETOABSOLUTE_OFFSET UNITYSDK_OFFSET(0x1B91BAB0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_RESETONENABLE_OFFSET UNITYSDK_OFFSET(0x1B91E680)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_RESETPREPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x1B91BA90)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_RESTOREPREPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x1B91BA50)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SAVEPREPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x1B91BA10)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_ALLOWDIRECTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1B91B010)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_CONNECTIONBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1B91AFD0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_CONNECTIONCUSTOMSELECTOR_OFFSET UNITYSDK_OFFSET(0x1B91AFF0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_MAXALLOWEDDIVERGENCEANGLE_OFFSET UNITYSDK_OFFSET(0x1B91B070)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_ONCONTROLPOINTREACHED_OFFSET UNITYSDK_OFFSET(0x1B91B0B0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_ONENDREACHED_OFFSET UNITYSDK_OFFSET(0x1B91B0D0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_ONPOSITIONREACHEDLIST_OFFSET UNITYSDK_OFFSET(0x1B91B090)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_ONSWITCH_OFFSET UNITYSDK_OFFSET(0x1B91B1C0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_REJECTCURRENTSPLINE_OFFSET UNITYSDK_OFFSET(0x1B91B030)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_REJECTTOODIVERGENTSPLINES_OFFSET UNITYSDK_OFFSET(0x1B91B050)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_SPLINE_OFFSET UNITYSDK_OFFSET(0x1B91AF90)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_USECACHE_OFFSET UNITYSDK_OFFSET(0x1B91AFB0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SIMULATEADVANCEONSPLINE_OFFSET UNITYSDK_OFFSET(0x1B91DCC0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SIMULATEADVANCE_OFFSET UNITYSDK_OFFSET(0x1B91DC60)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SWITCHTO_OFFSET UNITYSDK_OFFSET(0x1B91B4D0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B91AC50)

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int SplineController_TypeDefinitionIndex = 37280;

	class SplineController : public ::FluffyUnderware::Curvy::Controllers::CurvyController
	{
	public:
		// static const ::System::String* InvalidSegmentErrorMessage; // 0x0
		::FluffyUnderware::Curvy::CurvySpline* m_Spline; // 0xA8
		::System::Boolean m_UseCache; // 0xB0
		::FluffyUnderware::Curvy::Controllers::SplineControllerConnectionBehavior connectionBehavior; // 0xB4
		::System::Boolean allowDirectionChange; // 0xB8
		::System::Boolean rejectCurrentSpline; // 0xB9
		::System::Boolean rejectTooDivergentSplines; // 0xBA
		::System::Single maxAllowedDivergenceAngle; // 0xBC
		::FluffyUnderware::Curvy::Controllers::ConnectedControlPointsSelector* connectionCustomSelector; // 0xC0
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Controllers::OnPositionReachedSettings*>* onPositionReachedList; // 0xC8
		::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEvent* m_OnControlPointReached; // 0xD0
		::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEvent* m_OnEndReached; // 0xD8
		::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEvent* m_OnSwitch; // 0xE0
		::FluffyUnderware::Curvy::Controllers::SplineController_SplineSwitcher* Switcher; // 0xE8
		::FluffyUnderware::Curvy::CurvySpline* prePlaySpline; // 0xF0
		::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEventArgs* preAllocatedEventArgs; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Single get_SwitchStartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_SWITCHSTARTTIME_OFFSET))(this);
		}

		::System::Single get_SwitchDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_SWITCHDURATION_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvySpline* get_SwitchTarget()
		{
			return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_SWITCHTARGET_OFFSET))(this);
		}

		::System::Single get_TfOnSwitchTarget()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_TFONSWITCHTARGET_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Controllers::MovementDirection get_DirectionOnSwitchTarget()
		{
			return ((::FluffyUnderware::Curvy::Controllers::MovementDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_DIRECTIONONSWITCHTARGET_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvySpline* get_Spline()
		{
			return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_SPLINE_OFFSET))(this);
		}

		::System::Void set_Spline(::FluffyUnderware::Curvy::CurvySpline* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_SPLINE_OFFSET))(this, value);
		}

		::System::Boolean get_UseCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_USECACHE_OFFSET))(this);
		}

		::System::Void set_UseCache(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_USECACHE_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Controllers::SplineControllerConnectionBehavior get_ConnectionBehavior()
		{
			return ((::FluffyUnderware::Curvy::Controllers::SplineControllerConnectionBehavior(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_CONNECTIONBEHAVIOR_OFFSET))(this);
		}

		::System::Void set_ConnectionBehavior(::FluffyUnderware::Curvy::Controllers::SplineControllerConnectionBehavior value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::SplineControllerConnectionBehavior))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_CONNECTIONBEHAVIOR_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Controllers::ConnectedControlPointsSelector* get_ConnectionCustomSelector()
		{
			return ((::FluffyUnderware::Curvy::Controllers::ConnectedControlPointsSelector*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_CONNECTIONCUSTOMSELECTOR_OFFSET))(this);
		}

		::System::Void set_ConnectionCustomSelector(::FluffyUnderware::Curvy::Controllers::ConnectedControlPointsSelector* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::ConnectedControlPointsSelector*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_CONNECTIONCUSTOMSELECTOR_OFFSET))(this, value);
		}

		::System::Boolean get_AllowDirectionChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_ALLOWDIRECTIONCHANGE_OFFSET))(this);
		}

		::System::Void set_AllowDirectionChange(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_ALLOWDIRECTIONCHANGE_OFFSET))(this, value);
		}

		::System::Boolean get_RejectCurrentSpline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_REJECTCURRENTSPLINE_OFFSET))(this);
		}

		::System::Void set_RejectCurrentSpline(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_REJECTCURRENTSPLINE_OFFSET))(this, value);
		}

		::System::Boolean get_RejectTooDivergentSplines()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_REJECTTOODIVERGENTSPLINES_OFFSET))(this);
		}

		::System::Void set_RejectTooDivergentSplines(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_REJECTTOODIVERGENTSPLINES_OFFSET))(this, value);
		}

		::System::Single get_MaxAllowedDivergenceAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_MAXALLOWEDDIVERGENCEANGLE_OFFSET))(this);
		}

		::System::Void set_MaxAllowedDivergenceAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_MAXALLOWEDDIVERGENCEANGLE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Controllers::OnPositionReachedSettings*>* get_OnPositionReachedList()
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Controllers::OnPositionReachedSettings*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_ONPOSITIONREACHEDLIST_OFFSET))(this);
		}

		::System::Void set_OnPositionReachedList(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Controllers::OnPositionReachedSettings*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Controllers::OnPositionReachedSettings*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_ONPOSITIONREACHEDLIST_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEvent* get_OnControlPointReached()
		{
			return ((::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_ONCONTROLPOINTREACHED_OFFSET))(this);
		}

		::System::Void set_OnControlPointReached(::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEvent*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_ONCONTROLPOINTREACHED_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEvent* get_OnEndReached()
		{
			return ((::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_ONENDREACHED_OFFSET))(this);
		}

		::System::Void set_OnEndReached(::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEvent*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_ONENDREACHED_OFFSET))(this, value);
		}

		::System::Single get_Length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_LENGTH_OFFSET))(this);
		}

		::System::Boolean get_IsSwitching()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_ISSWITCHING_OFFSET))(this);
		}

		::System::Single get_SwitchProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_SWITCHPROGRESS_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEvent* get_OnSwitch()
		{
			return ((::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_ONSWITCH_OFFSET))(this);
		}

		::System::Void set_OnSwitch(::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEvent*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SET_ONSWITCH_OFFSET))(this, value);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_ONVALIDATE_OFFSET))(this);
		}

		::System::Void SwitchTo(::FluffyUnderware::Curvy::CurvySpline* destinationSpline, ::System::Single destinationTf, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SWITCHTO_OFFSET))(this, destinationSpline, destinationTf, duration);
		}

		::System::Void FinishCurrentSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_FINISHCURRENTSWITCH_OFFSET))(this);
		}

		::System::Void CancelCurrentSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_CANCELCURRENTSWITCH_OFFSET))(this);
		}

		static ::System::Single GetAngleBetweenConnectedSplines(::FluffyUnderware::Curvy::CurvySplineSegment* before, ::FluffyUnderware::Curvy::Controllers::MovementDirection movementMode, ::FluffyUnderware::Curvy::CurvySplineSegment* after, ::System::Boolean allowMovementModeChange)
		{
			return ((::System::Single(*)(::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::Controllers::MovementDirection, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GETANGLEBETWEENCONNECTEDSPLINES_OFFSET))(before, movementMode, after, allowMovementModeChange);
		}

		::System::Boolean get_IsReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_ISREADY_OFFSET))(this);
		}

		::System::Void SavePrePlayState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SAVEPREPLAYSTATE_OFFSET))(this);
		}

		::System::Void RestorePrePlayState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_RESTOREPREPLAYSTATE_OFFSET))(this);
		}

		::System::Void ResetPrePlayState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_RESETPREPLAYSTATE_OFFSET))(this);
		}

		::System::Single RelativeToAbsolute(::System::Single relativeDistance)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_RELATIVETOABSOLUTE_OFFSET))(this, relativeDistance);
		}

		::System::Single AbsoluteToRelative(::System::Single worldUnitDistance)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_ABSOLUTETORELATIVE_OFFSET))(this, worldUnitDistance);
		}

		::UnityEngine::Vector3 GetInterpolatedSourcePosition(::System::Single tf)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GETINTERPOLATEDSOURCEPOSITION_OFFSET))(this, tf);
		}

		::System::Void GetInterpolatedSourcePosition_1(::System::Single tf, ::UnityEngine::Vector3& interpolatedPosition, ::UnityEngine::Vector3& tangent, ::UnityEngine::Vector3& up)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GETINTERPOLATEDSOURCEPOSITION_1_OFFSET))(this, tf, interpolatedPosition, tangent, up);
		}

		::UnityEngine::Vector3 GetTangent(::System::Single tf)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GETTANGENT_OFFSET))(this, tf);
		}

		::UnityEngine::Vector3 GetOrientation(::System::Single tf)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GETORIENTATION_OFFSET))(this, tf);
		}

		::System::Void Advance(::System::Single speed, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_ADVANCE_OFFSET))(this, speed, deltaTime);
		}

		::System::Void SimulateAdvance(::System::Single& tf, ::FluffyUnderware::Curvy::Controllers::MovementDirection& direction, ::System::Single speed, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::FluffyUnderware::Curvy::Controllers::MovementDirection&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SIMULATEADVANCE_OFFSET))(this, tf, direction, speed, deltaTime);
		}

		static ::System::Void SimulateAdvanceOnSpline(::FluffyUnderware::Curvy::CurvySpline* spline, ::System::Single& tf, ::FluffyUnderware::Curvy::Controllers::MovementDirection& direction, ::System::Single distance, ::FluffyUnderware::Curvy::Controllers::CurvyController_MoveModeEnum moveModeEnum, ::FluffyUnderware::Curvy::CurvyClamping curvyClamping)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::CurvySpline*, ::System::Single&, ::FluffyUnderware::Curvy::Controllers::MovementDirection&, ::System::Single, ::FluffyUnderware::Curvy::Controllers::CurvyController_MoveModeEnum, ::FluffyUnderware::Curvy::CurvyClamping))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SIMULATEADVANCEONSPLINE_OFFSET))(spline, tf, direction, distance, moveModeEnum, curvyClamping);
		}

		::System::Void InitializedApplyDeltaTime(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_INITIALIZEDAPPLYDELTATIME_OFFSET))(this, deltaTime);
		}

		::System::Void ComputeTargetPositionAndRotation(::UnityEngine::Vector3& targetPosition, ::UnityEngine::Vector3& targetUp, ::UnityEngine::Vector3& targetForward)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_COMPUTETARGETPOSITIONANDROTATION_OFFSET))(this, targetPosition, targetUp, targetForward);
		}

		::System::Void ResetOnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_RESETONENABLE_OFFSET))(this);
		}

		::System::Void AdvanceSwitching(::System::Single distance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_ADVANCESWITCHING_OFFSET))(this, distance);
		}

		::System::Void GetSwitchingPositionAndRotation(::UnityEngine::Vector3 forwardOnCurrentSpline, ::UnityEngine::Vector3 upOnCurrentSpline, ::UnityEngine::Vector3 positionOnCurrentSpline, ::UnityEngine::Vector3& interpolatedPosition, ::UnityEngine::Quaternion& interpolatedRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GETSWITCHINGPOSITIONANDROTATION_OFFSET))(this, forwardOnCurrentSpline, upOnCurrentSpline, positionOnCurrentSpline, interpolatedPosition, interpolatedRotation);
		}

		::System::Void ComputePositionAndRotationOnSwitchTarget(::UnityEngine::Vector3& positionOnSwitchToSpline, ::UnityEngine::Quaternion& rotationOnSwitchToSpline)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_COMPUTEPOSITIONANDROTATIONONSWITCHTARGET_OFFSET))(this, positionOnSwitchToSpline, rotationOnSwitchToSpline);
		}

		static ::System::Single MovementCompatibleGetPosition(::FluffyUnderware::Curvy::Controllers::SplineController* controller, ::System::Single clampedPosition, ::FluffyUnderware::Curvy::CurvyPositionMode positionMode, ::FluffyUnderware::Curvy::CurvySplineSegment*& controlPoint, ::System::Boolean& isOnControlPoint)
		{
			return ((::System::Single(*)(::FluffyUnderware::Curvy::Controllers::SplineController*, ::System::Single, ::FluffyUnderware::Curvy::CurvyPositionMode, ::FluffyUnderware::Curvy::CurvySplineSegment*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_MOVEMENTCOMPATIBLEGETPOSITION_OFFSET))(controller, clampedPosition, positionMode, controlPoint, isOnControlPoint);
		}

		static ::System::Void MovementCompatibleSetPosition(::FluffyUnderware::Curvy::Controllers::SplineController* controller, ::FluffyUnderware::Curvy::CurvyPositionMode positionMode, ::System::Single specialClampedPosition)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::Controllers::SplineController*, ::FluffyUnderware::Curvy::CurvyPositionMode, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_MOVEMENTCOMPATIBLESETPOSITION_OFFSET))(controller, positionMode, specialClampedPosition);
		}

		::System::Void EventAwareMove(::System::Single distance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_EVENTAWAREMOVE_OFFSET))(this, distance);
		}

		::System::Void HandleOnPositionReachedEvents(::FluffyUnderware::Curvy::CurvyPositionMode positionMode, ::System::Single startPosition, ::System::Single endPosition, ::System::Single endPositionUnclamped, ::System::Single& postEventsEndPosition, ::System::Single currentDelta, ::FluffyUnderware::Curvy::CurvySplineSegment* currentCp, ::System::Boolean& cancelMovement)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyPositionMode, ::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Boolean&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_HANDLEONPOSITIONREACHEDEVENTS_OFFSET))(this, positionMode, startPosition, endPosition, endPositionUnclamped, postEventsEndPosition, currentDelta, currentCp, cancelMovement);
		}

		::System::Nullable_1<::System::Single> HandleOnPositionReachedEvent(::FluffyUnderware::Curvy::CurvyPositionMode positionMode, ::System::Single startPosition, ::System::Single endPositionUnclamped, ::System::Single currentDelta, ::FluffyUnderware::Curvy::CurvySplineSegment* currentCp, ::System::Boolean& cancelMovement, ::FluffyUnderware::Curvy::Controllers::OnPositionReachedSettings* settings, ::System::Nullable_1<::System::Single> postEventEndPosition)
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyPositionMode, ::System::Single, ::System::Single, ::System::Single, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Boolean&, ::FluffyUnderware::Curvy::Controllers::OnPositionReachedSettings*, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_HANDLEONPOSITIONREACHEDEVENT_OFFSET))(this, positionMode, startPosition, endPositionUnclamped, currentDelta, currentCp, cancelMovement, settings, postEventEndPosition);
		}

		::System::Void HandleReachingNewControlPoint(::FluffyUnderware::Curvy::CurvySplineSegment* controlPoint, ::System::Single controlPointPosition, ::FluffyUnderware::Curvy::CurvyPositionMode positionMode, ::System::Single currentDelta, ::System::Boolean& cancelMovement, ::FluffyUnderware::Curvy::CurvySplineSegment*& postEventsControlPoint, ::System::Boolean& postEventsIsControllerOnControlPoint, ::System::Single& postEventsControlPointPosition)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Single, ::FluffyUnderware::Curvy::CurvyPositionMode, ::System::Single, ::System::Boolean&, ::FluffyUnderware::Curvy::CurvySplineSegment*&, ::System::Boolean&, ::System::Single&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_HANDLEREACHINGNEWCONTROLPOINT_OFFSET))(this, controlPoint, controlPointPosition, positionMode, currentDelta, cancelMovement, postEventsControlPoint, postEventsIsControllerOnControlPoint, postEventsControlPointPosition);
		}

		::System::Void InvokeEventHandler(::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEvent* event, ::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEventArgs* eventArgument, ::FluffyUnderware::Curvy::CurvyPositionMode positionMode, ::FluffyUnderware::Curvy::CurvySplineSegment*& postEventsControlPoint, ::System::Boolean& postEventsIsControllerOnControlPoint, ::System::Single& postEventPosition)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEvent*, ::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEventArgs*, ::FluffyUnderware::Curvy::CurvyPositionMode, ::FluffyUnderware::Curvy::CurvySplineSegment*&, ::System::Boolean&, ::System::Single&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_INVOKEEVENTHANDLER_OFFSET))(this, event, eventArgument, positionMode, postEventsControlPoint, postEventsIsControllerOnControlPoint, postEventPosition);
		}

		::System::Void InvokeEventHandler_1(::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEvent* event, ::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEventArgs* eventArgument, ::FluffyUnderware::Curvy::CurvyPositionMode positionMode, ::FluffyUnderware::Curvy::CurvySplineSegment*& postEventsControlPoint, ::System::Nullable_1<::System::Boolean>& postEventsIsControllerOnControlPoint, ::System::Nullable_1<::System::Single>& postEventPosition)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEvent*, ::FluffyUnderware::Curvy::Controllers::CurvySplineMoveEventArgs*, ::FluffyUnderware::Curvy::CurvyPositionMode, ::FluffyUnderware::Curvy::CurvySplineSegment*&, ::System::Nullable_1<::System::Boolean>&, ::System::Nullable_1<::System::Single>&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_INVOKEEVENTHANDLER_1_OFFSET))(this, event, eventArgument, positionMode, postEventsControlPoint, postEventsIsControllerOnControlPoint, postEventPosition);
		}

		::FluffyUnderware::Curvy::CurvySplineSegment* HandleRandomConnectionBehavior(::FluffyUnderware::Curvy::CurvySplineSegment* currentControlPoint, ::FluffyUnderware::Curvy::Controllers::MovementDirection currentDirection, ::FluffyUnderware::Curvy::Controllers::MovementDirection& newDirection, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* connectedControlPoints)
		{
			return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::Controllers::MovementDirection, ::FluffyUnderware::Curvy::Controllers::MovementDirection&, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::FluffyUnderware::Curvy::CurvySplineSegment*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_HANDLERANDOMCONNECTIONBEHAVIOR_OFFSET))(this, currentControlPoint, currentDirection, newDirection, connectedControlPoints);
		}

		static ::FluffyUnderware::Curvy::Controllers::MovementDirection GetPostConnectionDirection(::FluffyUnderware::Curvy::CurvySplineSegment* connectedControlPoint, ::FluffyUnderware::Curvy::Controllers::MovementDirection currentDirection, ::System::Boolean directionChangeAllowed)
		{
			return ((::FluffyUnderware::Curvy::Controllers::MovementDirection(*)(::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::Controllers::MovementDirection, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GETPOSTCONNECTIONDIRECTION_OFFSET))(connectedControlPoint, currentDirection, directionChangeAllowed);
		}

		::FluffyUnderware::Curvy::CurvySplineSegment* HandleFollowUpConnectionBehavior(::FluffyUnderware::Curvy::CurvySplineSegment* currentControlPoint, ::FluffyUnderware::Curvy::Controllers::MovementDirection currentDirection, ::FluffyUnderware::Curvy::Controllers::MovementDirection& newDirection)
		{
			return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::Controllers::MovementDirection, ::FluffyUnderware::Curvy::Controllers::MovementDirection&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_HANDLEFOLLOWUPCONNECTIONBEHAVIOR_OFFSET))(this, currentControlPoint, currentDirection, newDirection);
		}

		static ::FluffyUnderware::Curvy::Controllers::MovementDirection HeadingToDirection(::FluffyUnderware::Curvy::ConnectionHeadingEnum heading, ::FluffyUnderware::Curvy::CurvySplineSegment* controlPoint, ::FluffyUnderware::Curvy::Controllers::MovementDirection currentDirection)
		{
			return ((::FluffyUnderware::Curvy::Controllers::MovementDirection(*)(::FluffyUnderware::Curvy::ConnectionHeadingEnum, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::Controllers::MovementDirection))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_HEADINGTODIRECTION_OFFSET))(heading, controlPoint, currentDirection);
		}

		static ::System::Single GetControlPointPosition(::FluffyUnderware::Curvy::CurvySplineSegment* controlPoint, ::FluffyUnderware::Curvy::CurvyPositionMode positionMode)
		{
			return ((::System::Single(*)(::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::CurvyPositionMode))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GETCONTROLPOINTPOSITION_OFFSET))(controlPoint, positionMode);
		}

		::System::Boolean get_ShowRandomConnectionOptions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_GET_SHOWRANDOMCONNECTIONOPTIONS_OFFSET))(this);
		}
	};
}
