#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcCursorChangeLinear_OverflowControlEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcWithCursor.h"

namespace BansheeGz::BGSpline::Components { class BGCcCursor; }
namespace BansheeGz::BGSpline::Components { class BGCcCursorChangeLinear_PointReachedArgs; }
namespace BansheeGz::BGSpline::Components { class BGCcCursorChangeLinear_PointReachedEvent; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePointField; }
namespace System { template <typename T> class EventHandler_1; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_ADD_POINTREACHED_OFFSET UNITYSDK_OFFSET(0x17B875F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_CHECKDELAYATPOINT_OFFSET UNITYSDK_OFFSET(0x17B89DB0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_CHECKDELAYATSECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x17B89820)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_CHECKFORNEWDELAY_OFFSET UNITYSDK_OFFSET(0x17B88B70)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_CHECKIFDELAYISOVER_OFFSET UNITYSDK_OFFSET(0x17B886F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_FIREPOINTREACHEDEVENT_OFFSET UNITYSDK_OFFSET(0x17B89C60)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x17B886E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GETDELAYATPOINT_OFFSET UNITYSDK_OFFSET(0x17B89360)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GETSPEEDATPOINT_OFFSET UNITYSDK_OFFSET(0x17B894E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_ADJUSTBYTOTALLENGTH_OFFSET UNITYSDK_OFFSET(0x17B87770)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_CURRENTSPEED_OFFSET UNITYSDK_OFFSET(0x17B87990)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_DELAYFIELD_OFFSET UNITYSDK_OFFSET(0x17B87870)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x17B87850)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_OVERFLOWCONTROL_OFFSET UNITYSDK_OFFSET(0x17B876F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_SPEEDFIELD_OFFSET UNITYSDK_OFFSET(0x17B87790)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_SPEEDREVERSED_OFFSET UNITYSDK_OFFSET(0x17B87980)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x17B87750)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_STOPPED_OFFSET UNITYSDK_OFFSET(0x17B87960)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_USEFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x17B87940)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_ISDELAYREQUIRED_OFFSET UNITYSDK_OFFSET(0x17B89660)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_OVERFLOW_OFFSET UNITYSDK_OFFSET(0x17B88DF0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_REMOVE_POINTREACHED_OFFSET UNITYSDK_OFFSET(0x17B87670)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_ADJUSTBYTOTALLENGTH_OFFSET UNITYSDK_OFFSET(0x17B87780)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_DELAYFIELD_OFFSET UNITYSDK_OFFSET(0x17B87880)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_DELAY_OFFSET UNITYSDK_OFFSET(0x17B87860)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_OVERFLOWCONTROL_OFFSET UNITYSDK_OFFSET(0x17B87700)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_SPEEDFIELD_OFFSET UNITYSDK_OFFSET(0x17B877A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x17B87760)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_STOPPED_OFFSET UNITYSDK_OFFSET(0x17B87970)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_USEFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x17B87950)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_STARTDELAY_OFFSET UNITYSDK_OFFSET(0x17B897F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_START_OFFSET UNITYSDK_OFFSET(0x17B87CA0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_STEP_OFFSET UNITYSDK_OFFSET(0x17B88160)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_UPDATE_OFFSET UNITYSDK_OFFSET(0x17B88150)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR__CTOR_OFFSET UNITYSDK_OFFSET(0x17B8A070)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcCursorChangeLinear_TypeDefinitionIndex = 33832;

	class BGCcCursorChangeLinear : public ::BansheeGz::BGSpline::Components::BGCcWithCursor
	{
	public:
		// static const ::System::Single SpeedThreshold; // 0x0
		::System::EventHandler_1<::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_PointReachedArgs*>* PointReached; // 0x58
		::System::Boolean useFixedUpdate; // 0x60
		::System::Single speed; // 0x64
		::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_OverflowControlEnum overflowControl; // 0x68
		::System::Boolean adjustByTotalLength; // 0x6C
		::BansheeGz::BGSpline::Curve::BGCurvePointField* speedField; // 0x70
		::System::Single delay; // 0x78
		::BansheeGz::BGSpline::Curve::BGCurvePointField* delayField; // 0x80
		::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_PointReachedEvent* pointReachedEvent; // 0x88
		::System::Single oldLength; // 0x90
		::System::Boolean speedReversed; // 0x94
		::System::Int32 currentSectionIndex; // 0x98
		::System::Single delayStarted; // 0x9C
		::System::Boolean speedWasPositiveWhileDelayed; // 0xA0
		::System::Boolean skipZeroPoint; // 0xA1
		::System::Boolean _Stopped_k__BackingField; // 0xA2

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR__CTOR_OFFSET))(this);
		}

		::System::Void add_PointReached(::System::EventHandler_1<::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_PointReachedArgs*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_PointReachedArgs*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_ADD_POINTREACHED_OFFSET))(this, value);
		}

		::System::Void remove_PointReached(::System::EventHandler_1<::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_PointReachedArgs*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_PointReachedArgs*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_REMOVE_POINTREACHED_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_OverflowControlEnum get_OverflowControl()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_OverflowControlEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_OVERFLOWCONTROL_OFFSET))(this);
		}

		::System::Void set_OverflowControl(::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_OverflowControlEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_OverflowControlEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_OVERFLOWCONTROL_OFFSET))(this, value);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_Speed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_SPEED_OFFSET))(this, value);
		}

		::System::Boolean get_AdjustByTotalLength()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_ADJUSTBYTOTALLENGTH_OFFSET))(this);
		}

		::System::Void set_AdjustByTotalLength(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_ADJUSTBYTOTALLENGTH_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePointField* get_SpeedField()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePointField*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_SPEEDFIELD_OFFSET))(this);
		}

		::System::Void set_SpeedField(::BansheeGz::BGSpline::Curve::BGCurvePointField* value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointField*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_SPEEDFIELD_OFFSET))(this, value);
		}

		::System::Single get_Delay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_DELAY_OFFSET))(this);
		}

		::System::Void set_Delay(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_DELAY_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePointField* get_DelayField()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePointField*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_DELAYFIELD_OFFSET))(this);
		}

		::System::Void set_DelayField(::BansheeGz::BGSpline::Curve::BGCurvePointField* value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointField*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_DELAYFIELD_OFFSET))(this, value);
		}

		::System::Boolean get_UseFixedUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_USEFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void set_UseFixedUpdate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_USEFIXEDUPDATE_OFFSET))(this, value);
		}

		::System::Boolean get_Stopped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_STOPPED_OFFSET))(this);
		}

		::System::Void set_Stopped(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_STOPPED_OFFSET))(this, value);
		}

		::System::Boolean get_SpeedReversed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_SPEEDREVERSED_OFFSET))(this);
		}

		::System::Single get_CurrentSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_CURRENTSPEED_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Step()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_STEP_OFFSET))(this);
		}

		::System::Single GetDelayAtPoint(::System::Int32 point)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GETDELAYATPOINT_OFFSET))(this, point);
		}

		::System::Single GetSpeedAtPoint(::System::Int32 point)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GETSPEEDATPOINT_OFFSET))(this, point);
		}

		::System::Boolean IsDelayRequired(::System::Int32 pointIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_ISDELAYREQUIRED_OFFSET))(this, pointIndex);
		}

		::System::Void StartDelay(::System::Boolean speedIsPositive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_STARTDELAY_OFFSET))(this, speedIsPositive);
		}

		::System::Boolean CheckForNewDelay(::BansheeGz::BGSpline::Curve::BGCurveBaseMath* math, ::System::Single distance, ::System::Int32& newSectionIndex, ::System::Boolean checkDelay, ::System::Boolean firingEvents)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath*, ::System::Single, ::System::Int32&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_CHECKFORNEWDELAY_OFFSET))(this, math, distance, newSectionIndex, checkDelay, firingEvents);
		}

		::System::Boolean CheckDelayAtSectionChanged(::System::Int32 newSectionIndex, ::System::Boolean checkDelay, ::System::Boolean firingEvents, ::System::Boolean speedPositive)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_CHECKDELAYATSECTIONCHANGED_OFFSET))(this, newSectionIndex, checkDelay, firingEvents, speedPositive);
		}

		::System::Boolean CheckDelayAtPoint(::BansheeGz::BGSpline::Curve::BGCurveBaseMath* math, ::BansheeGz::BGSpline::Components::BGCcCursor* cursor, ::System::Int32 pointIndex, ::System::Boolean speedPositive)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath*, ::BansheeGz::BGSpline::Components::BGCcCursor*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_CHECKDELAYATPOINT_OFFSET))(this, math, cursor, pointIndex, speedPositive);
		}

		::System::Void Overflow(::BansheeGz::BGSpline::Curve::BGCurveBaseMath* math, ::System::Single& newDistance, ::System::Boolean currentSpeedPositive, ::System::Boolean checkDelay, ::System::Boolean firingEvents)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath*, ::System::Single&, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_OVERFLOW_OFFSET))(this, math, newDistance, currentSpeedPositive, checkDelay, firingEvents);
		}

		::System::Boolean CheckIfDelayIsOver(::BansheeGz::BGSpline::Curve::BGCurveBaseMath* math, ::BansheeGz::BGSpline::Components::BGCcCursor* cursor)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath*, ::BansheeGz::BGSpline::Components::BGCcCursor*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_CHECKIFDELAYISOVER_OFFSET))(this, math, cursor);
		}

		::System::Void FirePointReachedEvent(::System::Int32 pointIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_FIREPOINTREACHEDEVENT_OFFSET))(this, pointIndex);
		}
	};
}
