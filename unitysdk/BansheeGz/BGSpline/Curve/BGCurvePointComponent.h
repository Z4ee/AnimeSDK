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

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETBOOL_OFFSET UNITYSDK_OFFSET(0x1C015700)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x1C015A60)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1C015B40)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETFIELD_OFFSET UNITYSDK_OFFSET(0x1C015C20)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1C015630)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETINT_OFFSET UNITYSDK_OFFSET(0x1C0157D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETQUATERNION_OFFSET UNITYSDK_OFFSET(0x1C015980)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETVECTOR3_OFFSET UNITYSDK_OFFSET(0x1C0158A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x1C015180)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLFIRSTLOCAL_OFFSET UNITYSDK_OFFSET(0x1C015110)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLFIRSTWORLD_OFFSET UNITYSDK_OFFSET(0x1C0152E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLSECONDLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x1C0153D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLSECONDLOCAL_OFFSET UNITYSDK_OFFSET(0x1C015360)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLSECONDWORLD_OFFSET UNITYSDK_OFFSET(0x1C015530)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x1C0155B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x1C014DB0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_POINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C0155F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_POINT_OFFSET UNITYSDK_OFFSET(0x1C015E70)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_POSITIONLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x1C014F20)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_POSITIONLOCAL_OFFSET UNITYSDK_OFFSET(0x1C014DD0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_POSITIONWORLD_OFFSET UNITYSDK_OFFSET(0x1C015000)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_PRIVATEINIT_OFFSET UNITYSDK_OFFSET(0x1BFFF7E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETBOOL_OFFSET UNITYSDK_OFFSET(0x1C015D50)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETBOUNDS_OFFSET UNITYSDK_OFFSET(0x1C015E00)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1C015E40)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETFIELD_OFFSET UNITYSDK_OFFSET(0x1C015D10)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1C015D30)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETINT_OFFSET UNITYSDK_OFFSET(0x1C015D70)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETQUATERNION_OFFSET UNITYSDK_OFFSET(0x1C015DD0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETVECTOR3_OFFSET UNITYSDK_OFFSET(0x1C015D90)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x1C015220)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLFIRSTLOCAL_OFFSET UNITYSDK_OFFSET(0x1C015140)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLFIRSTWORLD_OFFSET UNITYSDK_OFFSET(0x1C015320)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLSECONDLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x1C015470)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLSECONDLOCAL_OFFSET UNITYSDK_OFFSET(0x1C015390)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLSECONDWORLD_OFFSET UNITYSDK_OFFSET(0x1C015570)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x1C0155D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_POINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C015610)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_POSITIONLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x1C014F60)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_POSITIONLOCAL_OFFSET UNITYSDK_OFFSET(0x1C014EE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_POSITIONWORLD_OFFSET UNITYSDK_OFFSET(0x1C0150D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C015E80)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C015F30)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurvePointComponent_TypeDefinitionIndex = 35332;

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

		::System::Void set_PositionLocal(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_POSITIONLOCAL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_PositionLocalTransformed()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_POSITIONLOCALTRANSFORMED_OFFSET))(this);
		}

		::System::Void set_PositionLocalTransformed(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_POSITIONLOCALTRANSFORMED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_PositionWorld()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_POSITIONWORLD_OFFSET))(this);
		}

		::System::Void set_PositionWorld(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_POSITIONWORLD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ControlFirstLocal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLFIRSTLOCAL_OFFSET))(this);
		}

		::System::Void set_ControlFirstLocal(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLFIRSTLOCAL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ControlFirstLocalTransformed()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET))(this);
		}

		::System::Void set_ControlFirstLocalTransformed(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ControlFirstWorld()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLFIRSTWORLD_OFFSET))(this);
		}

		::System::Void set_ControlFirstWorld(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLFIRSTWORLD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ControlSecondLocal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLSECONDLOCAL_OFFSET))(this);
		}

		::System::Void set_ControlSecondLocal(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLSECONDLOCAL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ControlSecondLocalTransformed()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLSECONDLOCALTRANSFORMED_OFFSET))(this);
		}

		::System::Void set_ControlSecondLocalTransformed(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLSECONDLOCALTRANSFORMED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ControlSecondWorld()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLSECONDWORLD_OFFSET))(this);
		}

		::System::Void set_ControlSecondWorld(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLSECONDWORLD_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum get_ControlType()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_CONTROLTYPE_OFFSET))(this);
		}

		::System::Void set_ControlType(::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_CONTROLTYPE_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_PointTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_POINTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_PointTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SET_POINTTRANSFORM_OFFSET))(this, a1);
		}

		::System::Single GetFloat(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETFLOAT_OFFSET))(this, a1);
		}

		::System::Boolean GetBool(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETBOOL_OFFSET))(this, a1);
		}

		::System::Int32 GetInt(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetVector3(::System::String* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETVECTOR3_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion GetQuaternion(::System::String* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETQUATERNION_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds GetBounds(::System::String* a1)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETBOUNDS_OFFSET))(this, a1);
		}

		::UnityEngine::Color GetColor(::System::String* a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETCOLOR_OFFSET))(this, a1);
		}

		::System::Object* GetField(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GETFIELD_OFFSET))(this, a1, a2);
		}

		::System::Void SetField(::System::String* a1, ::System::Object* a2, ::System::Type* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETFIELD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetFloat(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETFLOAT_OFFSET))(this, a1, a2);
		}

		::System::Void SetBool(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETBOOL_OFFSET))(this, a1, a2);
		}

		::System::Void SetInt(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETINT_OFFSET))(this, a1, a2);
		}

		::System::Void SetVector3(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETVECTOR3_OFFSET))(this, a1, a2);
		}

		::System::Void SetQuaternion(::System::String* a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETQUATERNION_OFFSET))(this, a1, a2);
		}

		::System::Void SetBounds(::System::String* a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETBOUNDS_OFFSET))(this, a1, a2);
		}

		::System::Void SetColor(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_SETCOLOR_OFFSET))(this, a1, a2);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePoint* get_Point()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_GET_POINT_OFFSET))(this);
		}

		::System::Void PrivateInit(::BansheeGz::BGSpline::Curve::BGCurvePoint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_PRIVATEINIT_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTCOMPONENT_TOSTRING_OFFSET))(this);
		}
	};
}
