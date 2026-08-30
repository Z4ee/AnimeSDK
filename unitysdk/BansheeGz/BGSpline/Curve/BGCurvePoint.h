#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurvePoint_ControlTypeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurvePoint_FieldEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePointField; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePoint_FieldsValues; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Transform; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETBOOL_OFFSET UNITYSDK_OFFSET(0x183C2E20)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x183C3140)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x183C3210)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETFIELD_OFFSET UNITYSDK_OFFSET(0x183C32E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x183C2D60)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETINT_OFFSET UNITYSDK_OFFSET(0x183C2EE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETQUATERNION_OFFSET UNITYSDK_OFFSET(0x183C3070)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETVECTOR3_OFFSET UNITYSDK_OFFSET(0x183C2FA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x183C1A40)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLFIRSTLOCAL_OFFSET UNITYSDK_OFFSET(0x183C16E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLFIRSTWORLD_OFFSET UNITYSDK_OFFSET(0x183B7A60)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLSECONDLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x183C2040)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLSECONDLOCAL_OFFSET UNITYSDK_OFFSET(0x183C1CE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLSECONDWORLD_OFFSET UNITYSDK_OFFSET(0x183B78F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x183C22E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x183C0D50)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_OFFSET UNITYSDK_OFFSET(0x183C4E10)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_POINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x183C2530)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_POSITIONLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x183C14C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_POSITIONLOCAL_OFFSET UNITYSDK_OFFSET(0x183B77F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_POSITIONWORLD_OFFSET UNITYSDK_OFFSET(0x183B7730)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_PRIVATEVALUESFORFIELDS_OFFSET UNITYSDK_OFFSET(0x183B14D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_PRIVATEFIELDADDED_OFFSET UNITYSDK_OFFSET(0x183B01E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_PRIVATEFIELDDELETED_OFFSET UNITYSDK_OFFSET(0x183B3410)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETBOOL_OFFSET UNITYSDK_OFFSET(0x183C3CE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETBOUNDS_OFFSET UNITYSDK_OFFSET(0x183C4840)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x183C4B30)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETCONTROLFIRSTLOCAL_OFFSET UNITYSDK_OFFSET(0x183C1730)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETCONTROLSECONDLOCAL_OFFSET UNITYSDK_OFFSET(0x183C1D30)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETFIELD_OFFSET UNITYSDK_OFFSET(0x183C3570)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x183C3A00)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETINT_OFFSET UNITYSDK_OFFSET(0x183C3FB0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x183C0DA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETQUATERNION_OFFSET UNITYSDK_OFFSET(0x183C4560)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETVECTOR3_OFFSET UNITYSDK_OFFSET(0x183C4280)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x183C1AD0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLFIRSTLOCAL_OFFSET UNITYSDK_OFFSET(0x183C1700)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLFIRSTWORLD_OFFSET UNITYSDK_OFFSET(0x183C1B70)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLSECONDLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x183C20D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLSECONDLOCAL_OFFSET UNITYSDK_OFFSET(0x183C1D00)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLSECONDWORLD_OFFSET UNITYSDK_OFFSET(0x183C2170)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLTYPE_OFFSET UNITYSDK_OFFSET(0x183C22F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_POINTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x183C2540)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_POSITIONLOCALTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x183C1610)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_POSITIONLOCAL_OFFSET UNITYSDK_OFFSET(0x183C0D70)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_POSITIONWORLD_OFFSET UNITYSDK_OFFSET(0x183C16B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_PRIVATEVALUESFORFIELDS_OFFSET UNITYSDK_OFFSET(0x183B15D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x183C4F70)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x183A6E40)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x183A6F90)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x183B2D80)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x183C0CE0)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurvePoint_TypeDefinitionIndex = 35326;

	class BGCurvePoint : public ::System::Object
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum controlType; // 0x10
		::UnityEngine::Vector3 positionLocal; // 0x14
		::UnityEngine::Vector3 controlFirstLocal; // 0x20
		::UnityEngine::Vector3 controlSecondLocal; // 0x2C
		::UnityEngine::Transform* pointTransform; // 0x38
		::BansheeGz::BGSpline::Curve::BGCurve* curve; // 0x40
		::Il2CppArray<::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*>* fieldsValues; // 0x48

		::System::Void _ctor(::BansheeGz::BGSpline::Curve::BGCurve* a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::BansheeGz::BGSpline::Curve::BGCurve* a1, ::UnityEngine::Vector3 a2, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*, ::UnityEngine::Vector3, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_2(::BansheeGz::BGSpline::Curve::BGCurve* a1, ::UnityEngine::Vector3 a2, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*, ::UnityEngine::Vector3, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_3(::BansheeGz::BGSpline::Curve::BGCurve* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Vector3 a3, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT__CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::BansheeGz::BGSpline::Curve::BGCurve* get_Curve()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CURVE_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues* get_PrivateValuesForFields()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_PRIVATEVALUESFORFIELDS_OFFSET))(this);
		}

		::System::Void set_PrivateValuesForFields(::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_PRIVATEVALUESFORFIELDS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_PositionLocal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_POSITIONLOCAL_OFFSET))(this);
		}

		::System::Void set_PositionLocal(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_POSITIONLOCAL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_PositionLocalTransformed()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_POSITIONLOCALTRANSFORMED_OFFSET))(this);
		}

		::System::Void set_PositionLocalTransformed(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_POSITIONLOCALTRANSFORMED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_PositionWorld()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_POSITIONWORLD_OFFSET))(this);
		}

		::System::Void set_PositionWorld(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_POSITIONWORLD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ControlFirstLocal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLFIRSTLOCAL_OFFSET))(this);
		}

		::System::Void set_ControlFirstLocal(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLFIRSTLOCAL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ControlFirstLocalTransformed()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET))(this);
		}

		::System::Void set_ControlFirstLocalTransformed(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLFIRSTLOCALTRANSFORMED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ControlFirstWorld()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLFIRSTWORLD_OFFSET))(this);
		}

		::System::Void set_ControlFirstWorld(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLFIRSTWORLD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ControlSecondLocal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLSECONDLOCAL_OFFSET))(this);
		}

		::System::Void set_ControlSecondLocal(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLSECONDLOCAL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ControlSecondLocalTransformed()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLSECONDLOCALTRANSFORMED_OFFSET))(this);
		}

		::System::Void set_ControlSecondLocalTransformed(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLSECONDLOCALTRANSFORMED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ControlSecondWorld()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLSECONDWORLD_OFFSET))(this);
		}

		::System::Void set_ControlSecondWorld(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLSECONDWORLD_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum get_ControlType()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_CONTROLTYPE_OFFSET))(this);
		}

		::System::Void set_ControlType(::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_CONTROLTYPE_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_PointTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_POINTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_PointTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SET_POINTTRANSFORM_OFFSET))(this, a1);
		}

		::System::Single GetFloat(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETFLOAT_OFFSET))(this, a1);
		}

		::System::Boolean GetBool(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETBOOL_OFFSET))(this, a1);
		}

		::System::Int32 GetInt(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetVector3(::System::String* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETVECTOR3_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion GetQuaternion(::System::String* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETQUATERNION_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds GetBounds(::System::String* a1)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETBOUNDS_OFFSET))(this, a1);
		}

		::UnityEngine::Color GetColor(::System::String* a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETCOLOR_OFFSET))(this, a1);
		}

		::System::Object* GetField(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GETFIELD_OFFSET))(this, a1, a2);
		}

		::System::Void SetField(::System::String* a1, ::System::Object* a2, ::System::Type* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETFIELD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetFloat(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETFLOAT_OFFSET))(this, a1, a2);
		}

		::System::Void SetBool(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETBOOL_OFFSET))(this, a1, a2);
		}

		::System::Void SetInt(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETINT_OFFSET))(this, a1, a2);
		}

		::System::Void SetVector3(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETVECTOR3_OFFSET))(this, a1, a2);
		}

		::System::Void SetQuaternion(::System::String* a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETQUATERNION_OFFSET))(this, a1, a2);
		}

		::System::Void SetBounds(::System::String* a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETBOUNDS_OFFSET))(this, a1, a2);
		}

		::System::Void SetColor(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETCOLOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Get(::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldEnum a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_GET_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_TOSTRING_OFFSET))(this);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void SetControlFirstLocal(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETCONTROLFIRSTLOCAL_OFFSET))(this, a1);
		}

		::System::Void SetControlSecondLocal(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_SETCONTROLSECONDLOCAL_OFFSET))(this, a1);
		}

		static ::System::Void PrivateFieldDeleted(::BansheeGz::BGSpline::Curve::BGCurvePointField* a1, ::System::Int32 a2, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues* a3)
		{
			return ((::System::Void(*)(::BansheeGz::BGSpline::Curve::BGCurvePointField*, ::System::Int32, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_PRIVATEFIELDDELETED_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PrivateFieldAdded(::BansheeGz::BGSpline::Curve::BGCurvePointField* a1, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues* a2)
		{
			return ((::System::Void(*)(::BansheeGz::BGSpline::Curve::BGCurvePointField*, ::BansheeGz::BGSpline::Curve::BGCurvePoint_FieldsValues*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEPOINT_PRIVATEFIELDADDED_OFFSET))(a1, a2);
		}
	};
}
