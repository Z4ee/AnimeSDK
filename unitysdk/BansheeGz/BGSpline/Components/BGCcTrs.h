#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcCursor.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcTrs_CursorChangeModeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcTrs_OverflowControlEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcTrs_RotationInterpolationEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcTrs_RotationUpEnum.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Curve { class BGCurvePointField; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePointI; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_FILLINTERPOLATIONINFO_OFFSET UNITYSDK_OFFSET(0x17B975A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x17B96EE0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GETCURRENTSESSIONMOVEDELTA_OFFSET UNITYSDK_OFFSET(0x17B98500)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GETPREDICTSTEPDISTANCEDELTA_OFFSET UNITYSDK_OFFSET(0x17B96F20)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_CURSORCHANGEMODE_OFFSET UNITYSDK_OFFSET(0x17B961B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x17B95F70)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_LERPSPEED_OFFSET UNITYSDK_OFFSET(0x17B96570)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_MOVEOBJECT_OFFSET UNITYSDK_OFFSET(0x17B963D0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_OBJECTTOMANIPULATE_OFFSET UNITYSDK_OFFSET(0x17B962E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_OFFSETANGLE_OFFSET UNITYSDK_OFFSET(0x17B96460)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_OVERFLOWCONTROL_OFFSET UNITYSDK_OFFSET(0x17B96150)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_ROTATEOBJECT_OFFSET UNITYSDK_OFFSET(0x17B96400)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_ROTATIONFIELD_OFFSET UNITYSDK_OFFSET(0x17B965D0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_ROTATIONINTERPOLATION_OFFSET UNITYSDK_OFFSET(0x17B96510)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_SCALEFIELD_OFFSET UNITYSDK_OFFSET(0x17B966A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_SCALEOBJECT_OFFSET UNITYSDK_OFFSET(0x17B96430)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_SLERPSPEED_OFFSET UNITYSDK_OFFSET(0x17B965A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_SPEEDFIELD_OFFSET UNITYSDK_OFFSET(0x17B96210)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_SPEEDISREVERSED_OFFSET UNITYSDK_OFFSET(0x17B95F50)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x17B961F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_UPVECTOR_OFFSET UNITYSDK_OFFSET(0x17B964B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_USEFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x17B963A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_LERPBOOLEN_OFFSET UNITYSDK_OFFSET(0x17B98350)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_LERPQUATERNION_OFFSET UNITYSDK_OFFSET(0x17B97F60)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_LERPVECTOR3_OFFSET UNITYSDK_OFFSET(0x17B98150)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x17B96F10)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x17B98640)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SETMANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x17B96F00)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_CURSORCHANGEMODE_OFFSET UNITYSDK_OFFSET(0x17B961C0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_LERPSPEED_OFFSET UNITYSDK_OFFSET(0x17B96580)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_MOVEOBJECT_OFFSET UNITYSDK_OFFSET(0x17B963E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_OBJECTTOMANIPULATE_OFFSET UNITYSDK_OFFSET(0x17B962F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_OFFSETANGLE_OFFSET UNITYSDK_OFFSET(0x17B96480)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_OVERFLOWCONTROL_OFFSET UNITYSDK_OFFSET(0x17B96160)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_ROTATEOBJECT_OFFSET UNITYSDK_OFFSET(0x17B96410)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_ROTATIONFIELD_OFFSET UNITYSDK_OFFSET(0x17B965E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_ROTATIONINTERPOLATION_OFFSET UNITYSDK_OFFSET(0x17B96520)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_SCALEFIELD_OFFSET UNITYSDK_OFFSET(0x17B966B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_SCALEOBJECT_OFFSET UNITYSDK_OFFSET(0x17B96440)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_SLERPSPEED_OFFSET UNITYSDK_OFFSET(0x17B965B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_SPEEDFIELD_OFFSET UNITYSDK_OFFSET(0x17B96220)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_SPEEDISREVERSED_OFFSET UNITYSDK_OFFSET(0x17B95F60)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x17B96200)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_UPVECTOR_OFFSET UNITYSDK_OFFSET(0x17B964C0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_USEFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x17B963B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_STEP_OFFSET UNITYSDK_OFFSET(0x17B96790)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_TRS_OFFSET UNITYSDK_OFFSET(0x17B97950)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_UPDATE_OFFSET UNITYSDK_OFFSET(0x17B96770)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS__CTOR_OFFSET UNITYSDK_OFFSET(0x17B98680)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcTrs_TypeDefinitionIndex = 33854;

	class BGCcTrs : public ::BansheeGz::BGSpline::Components::BGCcCursor
	{
	public:
		::UnityEngine::Transform* objectToManipulate; // 0x70
		::BansheeGz::BGSpline::Components::BGCcTrs_CursorChangeModeEnum cursorChangeMode; // 0x78
		::System::Single speed; // 0x7C
		::BansheeGz::BGSpline::Curve::BGCurvePointField* speedField; // 0x80
		::System::Boolean useFixedUpdate; // 0x88
		::BansheeGz::BGSpline::Components::BGCcTrs_OverflowControlEnum overflowControl; // 0x8C
		::System::Boolean moveObject; // 0x90
		::System::Boolean rotateObject; // 0x91
		::BansheeGz::BGSpline::Components::BGCcTrs_RotationInterpolationEnum rotationInterpolation; // 0x94
		::System::Single lerpSpeed; // 0x98
		::System::Single slerpSpeed; // 0x9C
		::UnityEngine::Vector3 offsetAngle; // 0xA0
		::BansheeGz::BGSpline::Components::BGCcTrs_RotationUpEnum upVector; // 0xAC
		::BansheeGz::BGSpline::Curve::BGCurvePointField* rotationField; // 0xB0
		::System::Boolean scaleObject; // 0xB8
		::BansheeGz::BGSpline::Curve::BGCurvePointField* scaleField; // 0xC0
		::System::Boolean _SpeedIsReversed_k__BackingField; // 0xC8
		::System::Boolean _ManualUpdate; // 0xC9
		::System::Single _TickElapsedTime; // 0xCC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_SpeedIsReversed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_SPEEDISREVERSED_OFFSET))(this);
		}

		::System::Void set_SpeedIsReversed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_SPEEDISREVERSED_OFFSET))(this, value);
		}

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_ERROR_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Components::BGCcTrs_OverflowControlEnum get_OverflowControl()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcTrs_OverflowControlEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_OVERFLOWCONTROL_OFFSET))(this);
		}

		::System::Void set_OverflowControl(::BansheeGz::BGSpline::Components::BGCcTrs_OverflowControlEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcTrs_OverflowControlEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_OVERFLOWCONTROL_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Components::BGCcTrs_CursorChangeModeEnum get_CursorChangeMode()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcTrs_CursorChangeModeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_CURSORCHANGEMODE_OFFSET))(this);
		}

		::System::Void set_CursorChangeMode(::BansheeGz::BGSpline::Components::BGCcTrs_CursorChangeModeEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcTrs_CursorChangeModeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_CURSORCHANGEMODE_OFFSET))(this, value);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_Speed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_SPEED_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePointField* get_SpeedField()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePointField*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_SPEEDFIELD_OFFSET))(this);
		}

		::System::Void set_SpeedField(::BansheeGz::BGSpline::Curve::BGCurvePointField* value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointField*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_SPEEDFIELD_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_ObjectToManipulate()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_OBJECTTOMANIPULATE_OFFSET))(this);
		}

		::System::Void set_ObjectToManipulate(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_OBJECTTOMANIPULATE_OFFSET))(this, value);
		}

		::System::Boolean get_UseFixedUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_USEFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void set_UseFixedUpdate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_USEFIXEDUPDATE_OFFSET))(this, value);
		}

		::System::Boolean get_MoveObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_MOVEOBJECT_OFFSET))(this);
		}

		::System::Void set_MoveObject(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_MOVEOBJECT_OFFSET))(this, value);
		}

		::System::Boolean get_RotateObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_ROTATEOBJECT_OFFSET))(this);
		}

		::System::Void set_RotateObject(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_ROTATEOBJECT_OFFSET))(this, value);
		}

		::System::Boolean get_ScaleObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_SCALEOBJECT_OFFSET))(this);
		}

		::System::Void set_ScaleObject(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_SCALEOBJECT_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_OffsetAngle()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_OFFSETANGLE_OFFSET))(this);
		}

		::System::Void set_OffsetAngle(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_OFFSETANGLE_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Components::BGCcTrs_RotationUpEnum get_UpVector()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcTrs_RotationUpEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_UPVECTOR_OFFSET))(this);
		}

		::System::Void set_UpVector(::BansheeGz::BGSpline::Components::BGCcTrs_RotationUpEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcTrs_RotationUpEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_UPVECTOR_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Components::BGCcTrs_RotationInterpolationEnum get_RotationInterpolation()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcTrs_RotationInterpolationEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_ROTATIONINTERPOLATION_OFFSET))(this);
		}

		::System::Void set_RotationInterpolation(::BansheeGz::BGSpline::Components::BGCcTrs_RotationInterpolationEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcTrs_RotationInterpolationEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_ROTATIONINTERPOLATION_OFFSET))(this, value);
		}

		::System::Single get_LerpSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_LERPSPEED_OFFSET))(this);
		}

		::System::Void set_LerpSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_LERPSPEED_OFFSET))(this, value);
		}

		::System::Single get_SlerpSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_SLERPSPEED_OFFSET))(this);
		}

		::System::Void set_SlerpSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_SLERPSPEED_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePointField* get_RotationField()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePointField*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_ROTATIONFIELD_OFFSET))(this);
		}

		::System::Void set_RotationField(::BansheeGz::BGSpline::Curve::BGCurvePointField* value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointField*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_ROTATIONFIELD_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePointField* get_ScaleField()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePointField*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GET_SCALEFIELD_OFFSET))(this);
		}

		::System::Void set_ScaleField(::BansheeGz::BGSpline::Curve::BGCurvePointField* value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointField*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SET_SCALEFIELD_OFFSET))(this, value);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void SetManualUpdate(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_SETMANUALUPDATE_OFFSET))(this, enable);
		}

		::System::Void ManualUpdate(::System::Single elapsedTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_MANUALUPDATE_OFFSET))(this, elapsedTime);
		}

		::System::Single GetPredictStepDistanceDelta(::System::Single deltaTime, ::System::Single toSpeed)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GETPREDICTSTEPDISTANCEDELTA_OFFSET))(this, deltaTime, toSpeed);
		}

		::System::Void Step()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_STEP_OFFSET))(this);
		}

		::System::Void Trs(::System::Int32 sectionIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_TRS_OFFSET))(this, sectionIndex);
		}

		::UnityEngine::Vector3 LerpVector3(::System::Int32& sectionIndex, ::System::String* fieldName)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32&, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_LERPVECTOR3_OFFSET))(this, sectionIndex, fieldName);
		}

		::UnityEngine::Quaternion LerpQuaternion(::System::Int32& sectionIndex, ::System::String* fieldName)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32&, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_LERPQUATERNION_OFFSET))(this, sectionIndex, fieldName);
		}

		::System::Boolean LerpBoolen(::System::Int32& sectionIndex, ::System::String* fieldName, ::System::Boolean anyTrue)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_LERPBOOLEN_OFFSET))(this, sectionIndex, fieldName, anyTrue);
		}

		::System::Single GetCurrentSessionMoveDelta(::System::Boolean isReverse)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_GETCURRENTSESSIONMOVEDELTA_OFFSET))(this, isReverse);
		}

		::System::Void FillInterpolationInfo(::System::Int32& sectionIndex, ::BansheeGz::BGSpline::Curve::BGCurvePointI*& fromPoint, ::BansheeGz::BGSpline::Curve::BGCurvePointI*& toPoint, ::System::Single& ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::BansheeGz::BGSpline::Curve::BGCurvePointI*&, ::BansheeGz::BGSpline::Curve::BGCurvePointI*&, ::System::Single&))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_FILLINTERPOLATIONINFO_OFFSET))(this, sectionIndex, fromPoint, toPoint, ratio);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCTRS_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
