#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurvePoint_ControlTypeEnum.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePoint; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Transform; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETBOOL_OFFSET UNITYSDK_OFFSET(0x16592DE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x16592EA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x16592EE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETFIELD_OFFSET UNITYSDK_OFFSET(0x16592F20)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x16592DC0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETINT_OFFSET UNITYSDK_OFFSET(0x16592E00)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETQUATERNION_OFFSET UNITYSDK_OFFSET(0x16592E60)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETVECTOR3_OFFSET UNITYSDK_OFFSET(0x16592E20)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x16592910)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLFIRSTLOCAL_OFFSET UNITYSDK_OFFSET(0x165928A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLFIRSTWORLD_OFFSET UNITYSDK_OFFSET(0x16592A70)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLSECONDLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x16592B60)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLSECONDLOCAL_OFFSET UNITYSDK_OFFSET(0x16592AF0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLSECONDWORLD_OFFSET UNITYSDK_OFFSET(0x16592CC0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x16592D40)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x16592540)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_POINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x16592D80)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_POINT_OFFSET UNITYSDK_OFFSET(0x16593100)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_POSITIONLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x165926B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_POSITIONLOCAL_OFFSET UNITYSDK_OFFSET(0x16592560)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_POSITIONWORLD_OFFSET UNITYSDK_OFFSET(0x16592790)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_PRIVATEINIT_OFFSET UNITYSDK_OFFSET(0x1657F170)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETBOOL_OFFSET UNITYSDK_OFFSET(0x16592FE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETBOUNDS_OFFSET UNITYSDK_OFFSET(0x16593090)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x165930D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETFIELD_OFFSET UNITYSDK_OFFSET(0x16592FA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x16592FC0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETINT_OFFSET UNITYSDK_OFFSET(0x16593000)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETQUATERNION_OFFSET UNITYSDK_OFFSET(0x16593060)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETVECTOR3_OFFSET UNITYSDK_OFFSET(0x16593020)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x165929B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLFIRSTLOCAL_OFFSET UNITYSDK_OFFSET(0x165928D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLFIRSTWORLD_OFFSET UNITYSDK_OFFSET(0x16592AB0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLSECONDLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x16592C00)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLSECONDLOCAL_OFFSET UNITYSDK_OFFSET(0x16592B20)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLSECONDWORLD_OFFSET UNITYSDK_OFFSET(0x16592D00)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x16592D60)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_POINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x16592DA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_POSITIONLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x165926F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_POSITIONLOCAL_OFFSET UNITYSDK_OFFSET(0x16592670)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_POSITIONWORLD_OFFSET UNITYSDK_OFFSET(0x16592860)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16593110)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x165931C0)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurvePointComponent_TypeDefinitionIndex = 28194;

	class BGCurvePointComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurvePoint* point; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT__CTOR_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurve* get_Curve()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CURVE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_PositionLocal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_POSITIONLOCAL_OFFSET))(this);
		}

		::System::Void set_PositionLocal(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_POSITIONLOCAL_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_PositionLocalTransformed()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_POSITIONLOCALTRANSFORMED_OFFSET))(this);
		}

		::System::Void set_PositionLocalTransformed(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_POSITIONLOCALTRANSFORMED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_PositionWorld()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_POSITIONWORLD_OFFSET))(this);
		}

		::System::Void set_PositionWorld(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_POSITIONWORLD_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ControlFirstLocal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLFIRSTLOCAL_OFFSET))(this);
		}

		::System::Void set_ControlFirstLocal(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLFIRSTLOCAL_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ControlFirstLocalTransformed()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET))(this);
		}

		::System::Void set_ControlFirstLocalTransformed(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ControlFirstWorld()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLFIRSTWORLD_OFFSET))(this);
		}

		::System::Void set_ControlFirstWorld(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLFIRSTWORLD_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ControlSecondLocal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLSECONDLOCAL_OFFSET))(this);
		}

		::System::Void set_ControlSecondLocal(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLSECONDLOCAL_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ControlSecondLocalTransformed()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLSECONDLOCALTRANSFORMED_OFFSET))(this);
		}

		::System::Void set_ControlSecondLocalTransformed(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLSECONDLOCALTRANSFORMED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ControlSecondWorld()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLSECONDWORLD_OFFSET))(this);
		}

		::System::Void set_ControlSecondWorld(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLSECONDWORLD_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum get_ControlType()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLTYPE_OFFSET))(this);
		}

		::System::Void set_ControlType(::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLTYPE_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_PointTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_POINTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_PointTransform(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_POINTTRANSFORM_OFFSET))(this, value);
		}

		::System::Single GetFloat(::System::String* name)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETFLOAT_OFFSET))(this, name);
		}

		::System::Boolean GetBool(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETBOOL_OFFSET))(this, name);
		}

		::System::Int32 GetInt(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETINT_OFFSET))(this, name);
		}

		::UnityEngine::Vector3 GetVector3(::System::String* name)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETVECTOR3_OFFSET))(this, name);
		}

		::UnityEngine::Quaternion GetQuaternion(::System::String* name)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETQUATERNION_OFFSET))(this, name);
		}

		::UnityEngine::Bounds GetBounds(::System::String* name)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETBOUNDS_OFFSET))(this, name);
		}

		::UnityEngine::Color GetColor(::System::String* name)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETCOLOR_OFFSET))(this, name);
		}

		::System::Object* GetField(::System::String* name, ::System::Type* type)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETFIELD_OFFSET))(this, name, type);
		}

		::System::Void SetField(::System::String* name, ::System::Object* value, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETFIELD_OFFSET))(this, name, value, type);
		}

		::System::Void SetFloat(::System::String* name, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETFLOAT_OFFSET))(this, name, value);
		}

		::System::Void SetBool(::System::String* name, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETBOOL_OFFSET))(this, name, value);
		}

		::System::Void SetInt(::System::String* name, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETINT_OFFSET))(this, name, value);
		}

		::System::Void SetVector3(::System::String* name, ::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETVECTOR3_OFFSET))(this, name, value);
		}

		::System::Void SetQuaternion(::System::String* name, ::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETQUATERNION_OFFSET))(this, name, value);
		}

		::System::Void SetBounds(::System::String* name, ::UnityEngine::Bounds value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETBOUNDS_OFFSET))(this, name, value);
		}

		::System::Void SetColor(::System::String* name, ::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETCOLOR_OFFSET))(this, name, value);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePoint* get_Point()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_POINT_OFFSET))(this);
		}

		::System::Void PrivateInit(::BansheeGz::BGSpline::Curve::BGCurvePoint* point)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_PRIVATEINIT_OFFSET))(this, point);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_TOSTRING_OFFSET))(this);
		}
	};
}
