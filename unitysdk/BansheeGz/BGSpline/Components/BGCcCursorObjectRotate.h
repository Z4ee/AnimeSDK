#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcCursorObjectRotate_RotationInterpolationEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcCursorObjectRotate_RotationUpEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcWithCursorObject.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Curve { class BGCurvePointField; }
namespace System { class EventHandler; }
namespace System { class String; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_ADD_CHANGEDOBJECTROTATION_OFFSET UNITYSDK_OFFSET(0x1655F440)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1655F970)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_HANDLESCOLOR_OFFSET UNITYSDK_OFFSET(0x1655FBE0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_HANDLESSCALE_OFFSET UNITYSDK_OFFSET(0x1655FBC0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_LERPSPEED_OFFSET UNITYSDK_OFFSET(0x1655F560)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_OFFSETANGLE_OFFSET UNITYSDK_OFFSET(0x1655F920)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_REVOLUTIONSAROUNDTANGENTFIELD_OFFSET UNITYSDK_OFFSET(0x1655F720)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_REVOLUTIONSAROUNDTANGENT_OFFSET UNITYSDK_OFFSET(0x1655F7F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_REVOLUTIONSCLOCKWISEFIELD_OFFSET UNITYSDK_OFFSET(0x1655F820)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_REVOLUTIONSCLOCKWISE_OFFSET UNITYSDK_OFFSET(0x1655F8F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_ROTATIONFIELD_OFFSET UNITYSDK_OFFSET(0x1655F650)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_ROTATIONINTERPOLATION_OFFSET UNITYSDK_OFFSET(0x1655F500)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1655FC00)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_SLERPSPEED_OFFSET UNITYSDK_OFFSET(0x1655F580)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_SUPPORTHANDLESSETTINGS_OFFSET UNITYSDK_OFFSET(0x1655FBB0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_SUPPORTHANDLES_OFFSET UNITYSDK_OFFSET(0x1655FBA0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_UPCUSTOM_OFFSET UNITYSDK_OFFSET(0x1655F5A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_UPMODE_OFFSET UNITYSDK_OFFSET(0x1655F5F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_WARNING_OFFSET UNITYSDK_OFFSET(0x1655FAB0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_REMOVE_CHANGEDOBJECTROTATION_OFFSET UNITYSDK_OFFSET(0x1655F4A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_HANDLESCOLOR_OFFSET UNITYSDK_OFFSET(0x1655FBF0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_HANDLESSCALE_OFFSET UNITYSDK_OFFSET(0x1655FBD0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_LERPSPEED_OFFSET UNITYSDK_OFFSET(0x1655F570)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_OFFSETANGLE_OFFSET UNITYSDK_OFFSET(0x1655F940)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_REVOLUTIONSAROUNDTANGENTFIELD_OFFSET UNITYSDK_OFFSET(0x1655F730)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_REVOLUTIONSAROUNDTANGENT_OFFSET UNITYSDK_OFFSET(0x1655F800)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_REVOLUTIONSCLOCKWISEFIELD_OFFSET UNITYSDK_OFFSET(0x1655F830)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_REVOLUTIONSCLOCKWISE_OFFSET UNITYSDK_OFFSET(0x1655F900)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_ROTATIONFIELD_OFFSET UNITYSDK_OFFSET(0x1655F660)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_ROTATIONINTERPOLATION_OFFSET UNITYSDK_OFFSET(0x1655F510)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_SLERPSPEED_OFFSET UNITYSDK_OFFSET(0x1655F590)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_UPCUSTOM_OFFSET UNITYSDK_OFFSET(0x1655F5C0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_UPMODE_OFFSET UNITYSDK_OFFSET(0x1655F600)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_TRYTOCALCULATEROTATION_OFFSET UNITYSDK_OFFSET(0x1655FD10)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1655FC10)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x165610A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE__GET_ERROR_B__50_0_OFFSET UNITYSDK_OFFSET(0x16561110)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcCursorObjectRotate_TypeDefinitionIndex = 28212;

	class BGCcCursorObjectRotate : public ::BansheeGz::BGSpline::Components::BGCcWithCursorObject
	{
	public:
		::System::EventHandler* ChangedObjectRotation; // 0x60
		::BansheeGz::BGSpline::Components::BGCcCursorObjectRotate_RotationInterpolationEnum rotationInterpolation; // 0x68
		::System::Single lerpSpeed; // 0x6C
		::System::Single slerpSpeed; // 0x70
		::UnityEngine::Vector3 offsetAngle; // 0x74
		::BansheeGz::BGSpline::Components::BGCcCursorObjectRotate_RotationUpEnum upMode; // 0x80
		::UnityEngine::Vector3 upCustom; // 0x84
		::BansheeGz::BGSpline::Curve::BGCurvePointField* rotationField; // 0x90
		::System::Int32 revolutionsAroundTangent; // 0x98
		::BansheeGz::BGSpline::Curve::BGCurvePointField* revolutionsAroundTangentField; // 0xA0
		::System::Boolean revolutionsClockwise; // 0xA8
		::BansheeGz::BGSpline::Curve::BGCurvePointField* revolutionsClockwiseField; // 0xB0
		::System::Single handlesScale; // 0xB8
		::UnityEngine::Color handlesColor; // 0xBC
		::UnityEngine::Quaternion rotation; // 0xCC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE__CTOR_OFFSET))(this);
		}

		::System::Void add_ChangedObjectRotation(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_ADD_CHANGEDOBJECTROTATION_OFFSET))(this, value);
		}

		::System::Void remove_ChangedObjectRotation(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_REMOVE_CHANGEDOBJECTROTATION_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Components::BGCcCursorObjectRotate_RotationInterpolationEnum get_RotationInterpolation()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcCursorObjectRotate_RotationInterpolationEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_ROTATIONINTERPOLATION_OFFSET))(this);
		}

		::System::Void set_RotationInterpolation(::BansheeGz::BGSpline::Components::BGCcCursorObjectRotate_RotationInterpolationEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcCursorObjectRotate_RotationInterpolationEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_ROTATIONINTERPOLATION_OFFSET))(this, value);
		}

		::System::Single get_LerpSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_LERPSPEED_OFFSET))(this);
		}

		::System::Void set_LerpSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_LERPSPEED_OFFSET))(this, value);
		}

		::System::Single get_SlerpSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_SLERPSPEED_OFFSET))(this);
		}

		::System::Void set_SlerpSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_SLERPSPEED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_UpCustom()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_UPCUSTOM_OFFSET))(this);
		}

		::System::Void set_UpCustom(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_UPCUSTOM_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Components::BGCcCursorObjectRotate_RotationUpEnum get_UpMode()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcCursorObjectRotate_RotationUpEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_UPMODE_OFFSET))(this);
		}

		::System::Void set_UpMode(::BansheeGz::BGSpline::Components::BGCcCursorObjectRotate_RotationUpEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcCursorObjectRotate_RotationUpEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_UPMODE_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePointField* get_RotationField()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePointField*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_ROTATIONFIELD_OFFSET))(this);
		}

		::System::Void set_RotationField(::BansheeGz::BGSpline::Curve::BGCurvePointField* value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointField*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_ROTATIONFIELD_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePointField* get_RevolutionsAroundTangentField()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePointField*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_REVOLUTIONSAROUNDTANGENTFIELD_OFFSET))(this);
		}

		::System::Void set_RevolutionsAroundTangentField(::BansheeGz::BGSpline::Curve::BGCurvePointField* value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointField*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_REVOLUTIONSAROUNDTANGENTFIELD_OFFSET))(this, value);
		}

		::System::Int32 get_RevolutionsAroundTangent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_REVOLUTIONSAROUNDTANGENT_OFFSET))(this);
		}

		::System::Void set_RevolutionsAroundTangent(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_REVOLUTIONSAROUNDTANGENT_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePointField* get_RevolutionsClockwiseField()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePointField*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_REVOLUTIONSCLOCKWISEFIELD_OFFSET))(this);
		}

		::System::Void set_RevolutionsClockwiseField(::BansheeGz::BGSpline::Curve::BGCurvePointField* value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointField*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_REVOLUTIONSCLOCKWISEFIELD_OFFSET))(this, value);
		}

		::System::Boolean get_RevolutionsClockwise()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_REVOLUTIONSCLOCKWISE_OFFSET))(this);
		}

		::System::Void set_RevolutionsClockwise(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_REVOLUTIONSCLOCKWISE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_OffsetAngle()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_OFFSETANGLE_OFFSET))(this);
		}

		::System::Void set_OffsetAngle(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_OFFSETANGLE_OFFSET))(this, value);
		}

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_ERROR_OFFSET))(this);
		}

		::System::String* get_Warning()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_WARNING_OFFSET))(this);
		}

		::System::Boolean get_SupportHandles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_SUPPORTHANDLES_OFFSET))(this);
		}

		::System::Boolean get_SupportHandlesSettings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_SUPPORTHANDLESSETTINGS_OFFSET))(this);
		}

		::System::Single get_HandlesScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_HANDLESSCALE_OFFSET))(this);
		}

		::System::Void set_HandlesScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_HANDLESSCALE_OFFSET))(this, value);
		}

		::UnityEngine::Color get_HandlesColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_HANDLESCOLOR_OFFSET))(this);
		}

		::System::Void set_HandlesColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_SET_HANDLESCOLOR_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_GET_ROTATION_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_UPDATE_OFFSET))(this);
		}

		::System::Boolean TryToCalculateRotation(::UnityEngine::Quaternion& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE_TRYTOCALCULATEROTATION_OFFSET))(this, result);
		}

		::System::String* _get_Error_b__50_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSOROBJECTROTATE__GET_ERROR_B__50_0_OFFSET))(this);
		}
	};
}
