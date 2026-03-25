#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurvePoint_ControlTypeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurve_PointsModeEnum.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePoint; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePoint_FieldsValues; }
namespace System { class ArgumentOutOfRangeException; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Transform; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETBOOL_OFFSET UNITYSDK_OFFSET(0x165962E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x16596660)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x16596750)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETFIELD_OFFSET UNITYSDK_OFFSET(0x16596840)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x16596210)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETINT_OFFSET UNITYSDK_OFFSET(0x165963B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETQUATERNION_OFFSET UNITYSDK_OFFSET(0x16596570)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETVECTOR3_OFFSET UNITYSDK_OFFSET(0x16596480)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x165806E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLFIRSTLOCAL_OFFSET UNITYSDK_OFFSET(0x16594470)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLFIRSTWORLD_OFFSET UNITYSDK_OFFSET(0x165948E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLSECONDLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x165807D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLSECONDLOCAL_OFFSET UNITYSDK_OFFSET(0x16594DC0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLSECONDWORLD_OFFSET UNITYSDK_OFFSET(0x165951B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x16595690)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x165936C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_POINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x165958E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_POSITIONLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x16594050)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_POSITIONLOCAL_OFFSET UNITYSDK_OFFSET(0x16580310)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_POSITIONWORLD_OFFSET UNITYSDK_OFFSET(0x16594300)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_PRIVATEVALUESFORFIELDS_OFFSET UNITYSDK_OFFSET(0x1657EE60)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_TARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x16594760)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_PRIVATEINIT_OFFSET UNITYSDK_OFFSET(0x1657F790)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETBOOL_OFFSET UNITYSDK_OFFSET(0x16596E10)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETBOUNDS_OFFSET UNITYSDK_OFFSET(0x165979E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x16597CE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETCONTROLFIRSTLOCAL_OFFSET UNITYSDK_OFFSET(0x165944C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETCONTROLSECONDLOCAL_OFFSET UNITYSDK_OFFSET(0x16594E10)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETFIELD_OFFSET UNITYSDK_OFFSET(0x165968B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x16596B20)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETINT_OFFSET UNITYSDK_OFFSET(0x16597100)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x16593800)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETQUATERNION_OFFSET UNITYSDK_OFFSET(0x165976F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETVECTOR3_OFFSET UNITYSDK_OFFSET(0x165973F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x165947E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLFIRSTLOCAL_OFFSET UNITYSDK_OFFSET(0x16594490)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLFIRSTWORLD_OFFSET UNITYSDK_OFFSET(0x16594B50)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLSECONDLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x165950B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLSECONDLOCAL_OFFSET UNITYSDK_OFFSET(0x16594DE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLSECONDWORLD_OFFSET UNITYSDK_OFFSET(0x16595420)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x165956A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_POINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x165958F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_POSITIONLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x16594260)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_POSITIONLOCAL_OFFSET UNITYSDK_OFFSET(0x165937D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_POSITIONWORLD_OFFSET UNITYSDK_OFFSET(0x16594440)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_PRIVATEVALUESFORFIELDS_OFFSET UNITYSDK_OFFSET(0x1657EFE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16597FD0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_WRONGMODE_OFFSET UNITYSDK_OFFSET(0x165936D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO__CTOR_OFFSET UNITYSDK_OFFSET(0x16598030)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurvePointGO_TypeDefinitionIndex = 28197;

	class BGCurvePointGO : public ::UnityEngine::MonoBehaviour
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum controlType; // 0x18
		::UnityEngine::Vector3 positionLocal; // 0x1C
		::UnityEngine::Vector3 controlFirstLocal; // 0x28
		::UnityEngine::Vector3 controlSecondLocal; // 0x34
		::UnityEngine::Transform* pointTransform; // 0x40
		::BansheeGz::BGSpline::Curve::BGCurve* curve; // 0x48
		::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*>* fieldsValues; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO__CTOR_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurve* get_Curve()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CURVE_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues* get_PrivateValuesForFields()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_PRIVATEVALUESFORFIELDS_OFFSET))(this);
		}

		::System::Void set_PrivateValuesForFields(::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues* value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_PRIVATEVALUESFORFIELDS_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_PositionLocal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_POSITIONLOCAL_OFFSET))(this);
		}

		::System::Void set_PositionLocal(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_POSITIONLOCAL_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_PositionLocalTransformed()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_POSITIONLOCALTRANSFORMED_OFFSET))(this);
		}

		::System::Void set_PositionLocalTransformed(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_POSITIONLOCALTRANSFORMED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_PositionWorld()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_POSITIONWORLD_OFFSET))(this);
		}

		::System::Void set_PositionWorld(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_POSITIONWORLD_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ControlFirstLocal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLFIRSTLOCAL_OFFSET))(this);
		}

		::System::Void set_ControlFirstLocal(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLFIRSTLOCAL_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ControlFirstLocalTransformed()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET))(this);
		}

		::System::Void set_ControlFirstLocalTransformed(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ControlFirstWorld()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLFIRSTWORLD_OFFSET))(this);
		}

		::System::Void set_ControlFirstWorld(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLFIRSTWORLD_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ControlSecondLocal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLSECONDLOCAL_OFFSET))(this);
		}

		::System::Void set_ControlSecondLocal(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLSECONDLOCAL_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ControlSecondLocalTransformed()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLSECONDLOCALTRANSFORMED_OFFSET))(this);
		}

		::System::Void set_ControlSecondLocalTransformed(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLSECONDLOCALTRANSFORMED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ControlSecondWorld()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLSECONDWORLD_OFFSET))(this);
		}

		::System::Void set_ControlSecondWorld(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLSECONDWORLD_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum get_ControlType()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLTYPE_OFFSET))(this);
		}

		::System::Void set_ControlType(::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLTYPE_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_PointTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_POINTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_PointTransform(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_POINTTRANSFORM_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_TargetTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_TARGETTRANSFORM_OFFSET))(this);
		}

		::System::Single GetFloat(::System::String* name)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETFLOAT_OFFSET))(this, name);
		}

		::System::Boolean GetBool(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETBOOL_OFFSET))(this, name);
		}

		::System::Int32 GetInt(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETINT_OFFSET))(this, name);
		}

		::UnityEngine::Vector3 GetVector3(::System::String* name)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETVECTOR3_OFFSET))(this, name);
		}

		::UnityEngine::Quaternion GetQuaternion(::System::String* name)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETQUATERNION_OFFSET))(this, name);
		}

		::UnityEngine::Bounds GetBounds(::System::String* name)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETBOUNDS_OFFSET))(this, name);
		}

		::UnityEngine::Color GetColor(::System::String* name)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETCOLOR_OFFSET))(this, name);
		}

		::System::Object* GetField(::System::String* name, ::System::Type* type)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETFIELD_OFFSET))(this, name, type);
		}

		::System::Void SetField(::System::String* name, ::System::Object* value, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETFIELD_OFFSET))(this, name, value, type);
		}

		::System::Void SetFloat(::System::String* name, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETFLOAT_OFFSET))(this, name, value);
		}

		::System::Void SetBool(::System::String* name, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETBOOL_OFFSET))(this, name, value);
		}

		::System::Void SetInt(::System::String* name, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETINT_OFFSET))(this, name, value);
		}

		::System::Void SetVector3(::System::String* name, ::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETVECTOR3_OFFSET))(this, name, value);
		}

		::System::Void SetQuaternion(::System::String* name, ::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETQUATERNION_OFFSET))(this, name, value);
		}

		::System::Void SetBounds(::System::String* name, ::UnityEngine::Bounds value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETBOUNDS_OFFSET))(this, name, value);
		}

		::System::Void SetColor(::System::String* name, ::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETCOLOR_OFFSET))(this, name, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_TOSTRING_OFFSET))(this);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 value, ::System::Boolean worldSpaceIsUsed)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETPOSITION_OFFSET))(this, value, worldSpaceIsUsed);
		}

		::System::Void SetControlFirstLocal(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETCONTROLFIRSTLOCAL_OFFSET))(this, value);
		}

		::System::Void SetControlSecondLocal(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETCONTROLSECONDLOCAL_OFFSET))(this, value);
		}

		::System::Void PrivateInit(::BansheeGz::BGSpline::Curve::BGCurvePoint* point, ::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum pointsMode)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint*, ::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_PRIVATEINIT_OFFSET))(this, point, pointsMode);
		}

		static ::System::ArgumentOutOfRangeException* WrongMode()
		{
			return ((::System::ArgumentOutOfRangeException*(*)())((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_WRONGMODE_OFFSET))();
		}
	};
}
