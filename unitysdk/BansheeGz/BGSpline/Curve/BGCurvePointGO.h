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

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETBOOL_OFFSET UNITYSDK_OFFSET(0x183CB4D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x183CB7F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x183CB8C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETFIELD_OFFSET UNITYSDK_OFFSET(0x183CB990)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x183CB410)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETINT_OFFSET UNITYSDK_OFFSET(0x183CB590)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETQUATERNION_OFFSET UNITYSDK_OFFSET(0x183CB720)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETVECTOR3_OFFSET UNITYSDK_OFFSET(0x183CB650)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x183B2F70)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLFIRSTLOCAL_OFFSET UNITYSDK_OFFSET(0x183C9550)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLFIRSTWORLD_OFFSET UNITYSDK_OFFSET(0x183C9A30)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLSECONDLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x183B3060)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLSECONDLOCAL_OFFSET UNITYSDK_OFFSET(0x183C9F10)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLSECONDWORLD_OFFSET UNITYSDK_OFFSET(0x183CA370)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x183CA850)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x183C8540)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_POINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x183CAAA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_POSITIONLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x183C9130)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_POSITIONLOCAL_OFFSET UNITYSDK_OFFSET(0x183B2B90)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_POSITIONWORLD_OFFSET UNITYSDK_OFFSET(0x183C93E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_PRIVATEVALUESFORFIELDS_OFFSET UNITYSDK_OFFSET(0x183B1550)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_TARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x183C98B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_PRIVATEINIT_OFFSET UNITYSDK_OFFSET(0x183B1F50)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETBOOL_OFFSET UNITYSDK_OFFSET(0x183CC020)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETBOUNDS_OFFSET UNITYSDK_OFFSET(0x183CCB80)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x183CCE70)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETCONTROLFIRSTLOCAL_OFFSET UNITYSDK_OFFSET(0x183C95A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETCONTROLSECONDLOCAL_OFFSET UNITYSDK_OFFSET(0x183C9F60)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETFIELD_OFFSET UNITYSDK_OFFSET(0x183CBA70)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x183CBD40)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETINT_OFFSET UNITYSDK_OFFSET(0x183CC2F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x183C8680)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETQUATERNION_OFFSET UNITYSDK_OFFSET(0x183CC8A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETVECTOR3_OFFSET UNITYSDK_OFFSET(0x183CC5C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x183C9930)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLFIRSTLOCAL_OFFSET UNITYSDK_OFFSET(0x183C9570)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLFIRSTWORLD_OFFSET UNITYSDK_OFFSET(0x183C9CA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLSECONDLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x183CA270)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLSECONDLOCAL_OFFSET UNITYSDK_OFFSET(0x183C9F30)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLSECONDWORLD_OFFSET UNITYSDK_OFFSET(0x183CA5E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x183CA860)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_POINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x183CAAB0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_POSITIONLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x183C9340)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_POSITIONLOCAL_OFFSET UNITYSDK_OFFSET(0x183C8650)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_POSITIONWORLD_OFFSET UNITYSDK_OFFSET(0x183C9520)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_PRIVATEVALUESFORFIELDS_OFFSET UNITYSDK_OFFSET(0x183B1650)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x183CD150)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_WRONGMODE_OFFSET UNITYSDK_OFFSET(0x183C8550)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO__CTOR_OFFSET UNITYSDK_OFFSET(0x183CD1B0)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurvePointGO_TypeDefinitionIndex = 35335;

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

		::System::Void set_PrivateValuesForFields(::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_PRIVATEVALUESFORFIELDS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_PositionLocal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_POSITIONLOCAL_OFFSET))(this);
		}

		::System::Void set_PositionLocal(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_POSITIONLOCAL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_PositionLocalTransformed()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_POSITIONLOCALTRANSFORMED_OFFSET))(this);
		}

		::System::Void set_PositionLocalTransformed(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_POSITIONLOCALTRANSFORMED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_PositionWorld()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_POSITIONWORLD_OFFSET))(this);
		}

		::System::Void set_PositionWorld(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_POSITIONWORLD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ControlFirstLocal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLFIRSTLOCAL_OFFSET))(this);
		}

		::System::Void set_ControlFirstLocal(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLFIRSTLOCAL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ControlFirstLocalTransformed()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET))(this);
		}

		::System::Void set_ControlFirstLocalTransformed(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ControlFirstWorld()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLFIRSTWORLD_OFFSET))(this);
		}

		::System::Void set_ControlFirstWorld(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLFIRSTWORLD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ControlSecondLocal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLSECONDLOCAL_OFFSET))(this);
		}

		::System::Void set_ControlSecondLocal(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLSECONDLOCAL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ControlSecondLocalTransformed()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLSECONDLOCALTRANSFORMED_OFFSET))(this);
		}

		::System::Void set_ControlSecondLocalTransformed(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLSECONDLOCALTRANSFORMED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ControlSecondWorld()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLSECONDWORLD_OFFSET))(this);
		}

		::System::Void set_ControlSecondWorld(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLSECONDWORLD_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum get_ControlType()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_CONTROLTYPE_OFFSET))(this);
		}

		::System::Void set_ControlType(::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_CONTROLTYPE_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_PointTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_POINTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_PointTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SET_POINTTRANSFORM_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_TargetTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GET_TARGETTRANSFORM_OFFSET))(this);
		}

		::System::Single GetFloat(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETFLOAT_OFFSET))(this, a1);
		}

		::System::Boolean GetBool(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETBOOL_OFFSET))(this, a1);
		}

		::System::Int32 GetInt(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetVector3(::System::String* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETVECTOR3_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion GetQuaternion(::System::String* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETQUATERNION_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds GetBounds(::System::String* a1)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETBOUNDS_OFFSET))(this, a1);
		}

		::UnityEngine::Color GetColor(::System::String* a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETCOLOR_OFFSET))(this, a1);
		}

		::System::Object* GetField(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_GETFIELD_OFFSET))(this, a1, a2);
		}

		::System::Void SetField(::System::String* a1, ::System::Object* a2, ::System::Type* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETFIELD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetFloat(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETFLOAT_OFFSET))(this, a1, a2);
		}

		::System::Void SetBool(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETBOOL_OFFSET))(this, a1, a2);
		}

		::System::Void SetInt(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETINT_OFFSET))(this, a1, a2);
		}

		::System::Void SetVector3(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETVECTOR3_OFFSET))(this, a1, a2);
		}

		::System::Void SetQuaternion(::System::String* a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETQUATERNION_OFFSET))(this, a1, a2);
		}

		::System::Void SetBounds(::System::String* a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETBOUNDS_OFFSET))(this, a1, a2);
		}

		::System::Void SetColor(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETCOLOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_TOSTRING_OFFSET))(this);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void SetControlFirstLocal(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETCONTROLFIRSTLOCAL_OFFSET))(this, a1);
		}

		::System::Void SetControlSecondLocal(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_SETCONTROLSECONDLOCAL_OFFSET))(this, a1);
		}

		::System::Void PrivateInit(::BansheeGz::BGSpline::Curve::BGCurvePoint* a1, ::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum a2)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint*, ::BansheeGz::BGSpline::Curve::BGCurve_PointsModeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_PRIVATEINIT_OFFSET))(this, a1, a2);
		}

		static ::System::ArgumentOutOfRangeException* WrongMode()
		{
			return ((::System::ArgumentOutOfRangeException*(*)())((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINTGO_WRONGMODE_OFFSET))();
		}
	};
}
