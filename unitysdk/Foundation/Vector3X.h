#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/Vector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define FOUNDATION_VECTOR3X_ALMOSTZERO_OFFSET UNITYSDK_OFFSET(0x1D59D8A0)
#define FOUNDATION_VECTOR3X_ANGLE_OFFSET UNITYSDK_OFFSET(0x1D5A2240)
#define FOUNDATION_VECTOR3X_CALREFLECT_1_OFFSET UNITYSDK_OFFSET(0x1D5A1730)
#define FOUNDATION_VECTOR3X_CALREFLECT_OFFSET UNITYSDK_OFFSET(0x1D5A1690)
#define FOUNDATION_VECTOR3X_CLAMPANGLEINDEGREE_OFFSET UNITYSDK_OFFSET(0x1D5A30A0)
#define FOUNDATION_VECTOR3X_COSANGLE_1_OFFSET UNITYSDK_OFFSET(0x1D5A1570)
#define FOUNDATION_VECTOR3X_COSANGLE_OFFSET UNITYSDK_OFFSET(0x1D5A1460)
#define FOUNDATION_VECTOR3X_DISTANCE2_OFFSET UNITYSDK_OFFSET(0x1D5A3340)
#define FOUNDATION_VECTOR3X_DISTANCETO_OFFSET UNITYSDK_OFFSET(0x1D5A2080)
#define FOUNDATION_VECTOR3X_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x1D5A1000)
#define FOUNDATION_VECTOR3X_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x1D5A1070)
#define FOUNDATION_VECTOR3X_GET_NAN_OFFSET UNITYSDK_OFFSET(0x1D5A1150)
#define FOUNDATION_VECTOR3X_GET_NULLVALUE_OFFSET UNITYSDK_OFFSET(0x1D5A10E0)
#define FOUNDATION_VECTOR3X_ISINFINITY_OFFSET UNITYSDK_OFFSET(0x1D5A26A0)
#define FOUNDATION_VECTOR3X_ISNAN_OFFSET UNITYSDK_OFFSET(0x1D5A2620)
#define FOUNDATION_VECTOR3X_LERP_OFFSET UNITYSDK_OFFSET(0x1D5A0B30)
#define FOUNDATION_VECTOR3X_LOCALTOWORLD_OFFSET UNITYSDK_OFFSET(0x1D5A1BE0)
#define FOUNDATION_VECTOR3X_LOOKATDIRECTION_OFFSET UNITYSDK_OFFSET(0x1D5A1EA0)
#define FOUNDATION_VECTOR3X_MANHATTANDIS_OFFSET UNITYSDK_OFFSET(0x1D5A33E0)
#define FOUNDATION_VECTOR3X_MOVETO_1_OFFSET UNITYSDK_OFFSET(0x1D5A28A0)
#define FOUNDATION_VECTOR3X_MOVETO_OFFSET UNITYSDK_OFFSET(0x1D5A2720)
#define FOUNDATION_VECTOR3X_PROJECTONPLANE_OFFSET UNITYSDK_OFFSET(0x1D5A2130)
#define FOUNDATION_VECTOR3X_PROJECTONTOPLANE_OFFSET UNITYSDK_OFFSET(0x1D59D7C0)
#define FOUNDATION_VECTOR3X_RATIO_1_OFFSET UNITYSDK_OFFSET(0x1D5A0F70)
#define FOUNDATION_VECTOR3X_RATIO_OFFSET UNITYSDK_OFFSET(0x1D5A0C90)
#define FOUNDATION_VECTOR3X_REVERSEROTATE_OFFSET UNITYSDK_OFFSET(0x1D5A23F0)
#define FOUNDATION_VECTOR3X_SET_OFFSET UNITYSDK_OFFSET(0x1D59FE80)
#define FOUNDATION_VECTOR3X_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x1D59E2F0)
#define FOUNDATION_VECTOR3X_SPEEDTO_OFFSET UNITYSDK_OFFSET(0x1D5A2A40)
#define FOUNDATION_VECTOR3X_TOFULLSTRING_OFFSET UNITYSDK_OFFSET(0x1D5A11C0)
#define FOUNDATION_VECTOR3X_TOSYSTEMNUMERICS_OFFSET UNITYSDK_OFFSET(0x1D5A3480)
#define FOUNDATION_VECTOR3X_TOTRANSMATRIXVECTOR3_OFFSET UNITYSDK_OFFSET(0x1D5A18A0)
#define FOUNDATION_VECTOR3X_TOTRANSMATRIXVECTOR4_OFFSET UNITYSDK_OFFSET(0x1D5A1810)
#define FOUNDATION_VECTOR3X_WORLDTOLOCALPOSTION_OFFSET UNITYSDK_OFFSET(0x1D5A1920)
#define FOUNDATION_VECTOR3X__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5A3500)

namespace Foundation
{
	inline static constexpr unsigned int Vector3X_TypeDefinitionIndex = 7974;

	class Vector3X : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3* StaticGet__MinValue()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3X_TypeDefinitionIndex)->GetStaticField(0x3920);
		}
		static ::UnityEngine::Vector3* StaticGet__NullValue()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3X_TypeDefinitionIndex)->GetStaticField(0x392C);
		}
		static ::UnityEngine::Vector3* StaticGet__MaxValue()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3X_TypeDefinitionIndex)->GetStaticField(0x3938);
		}
		static ::UnityEngine::Vector3* StaticGet__NaN()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3X_TypeDefinitionIndex)->GetStaticField(0x3944);
		}
		// static const ::System::Single Epsilon; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X__CCTOR_OFFSET))();
		}

		static ::System::Void Set(::UnityEngine::Vector3& v, ::Il2CppArray<::System::Single>* coords)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_SET_OFFSET))(v, coords);
		}

		static ::UnityEngine::Vector3 Lerp(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::Il2CppArray<::System::Single>* t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_LERP_OFFSET))(from, to, t);
		}

		static ::UnityEngine::Vector3 Ratio(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::Il2CppArray<::System::Single>* t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_RATIO_OFFSET))(from, to, t);
		}

		static ::System::Single ratio_1(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_RATIO_1_OFFSET))(from, to, t);
		}

		static ::UnityEngine::Vector3 get_MaxValue()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_GET_MAXVALUE_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_MinValue()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_GET_MINVALUE_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_NullValue()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_GET_NULLVALUE_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_NaN()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_GET_NAN_OFFSET))();
		}

		static ::System::String* ToFullString(::UnityEngine::Vector3 vec)
		{
			return ((::System::String*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_TOFULLSTRING_OFFSET))(vec);
		}

		static ::System::Single CosAngle(::UnityEngine::Vector2 l, ::UnityEngine::Vector2 r)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_COSANGLE_OFFSET))(l, r);
		}

		static ::System::Single CosAngle_1(::UnityEngine::Vector3 l, ::UnityEngine::Vector3 r)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_COSANGLE_1_OFFSET))(l, r);
		}

		static ::UnityEngine::Vector2 CalReflect(::UnityEngine::Vector2 inDir, ::UnityEngine::Vector2 normal)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_CALREFLECT_OFFSET))(inDir, normal);
		}

		static ::UnityEngine::Vector3 CalReflect_1(::UnityEngine::Vector3 inDir, ::UnityEngine::Vector3 normal)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_CALREFLECT_1_OFFSET))(inDir, normal);
		}

		static ::UnityEngine::Vector4 ToTransMatrixVector4(::UnityEngine::Vector3 inVec)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_TOTRANSMATRIXVECTOR4_OFFSET))(inVec);
		}

		static ::UnityEngine::Vector3 ToTransMatrixVector3(::UnityEngine::Vector4 inVec)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_TOTRANSMATRIXVECTOR3_OFFSET))(inVec);
		}

		static ::UnityEngine::Vector3 WorldToLocalPostion(::UnityEngine::Vector3 worldPos, ::UnityEngine::Transform* parent)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_WORLDTOLOCALPOSTION_OFFSET))(worldPos, parent);
		}

		static ::UnityEngine::Vector3 LocalToWorld(::UnityEngine::Vector3 local, ::UnityEngine::Transform* parent)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_LOCALTOWORLD_OFFSET))(local, parent);
		}

		static ::System::Void LookAtDirection(::UnityEngine::Transform* t, ::UnityEngine::Vector3 dir)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_LOOKATDIRECTION_OFFSET))(t, dir);
		}

		static ::System::Single DistanceTo(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 dest)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_DISTANCETO_OFFSET))(start, dest);
		}

		static ::UnityEngine::Vector3 ProjectOnPlane(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 planeNormal)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_PROJECTONPLANE_OFFSET))(vector, planeNormal);
		}

		static ::UnityEngine::Vector3 ProjectOntoPlane(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 planeNormal)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_PROJECTONTOPLANE_OFFSET))(vector, planeNormal);
		}

		static ::System::Single SignedAngle(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::UnityEngine::Vector3 up)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_SIGNEDANGLE_OFFSET))(v1, v2, up);
		}

		static ::System::Single Angle(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_ANGLE_OFFSET))(v1, v2);
		}

		static ::UnityEngine::Vector3 ReverseRotate(::UnityEngine::Vector3 vp, ::UnityEngine::Vector3 vdir, ::UnityEngine::Vector3 worldUp)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_REVERSEROTATE_OFFSET))(vp, vdir, worldUp);
		}

		static ::System::Boolean AlmostZero(::UnityEngine::Vector3 v)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_ALMOSTZERO_OFFSET))(v);
		}

		static ::System::Boolean IsNaN(::UnityEngine::Vector3 v)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_ISNAN_OFFSET))(v);
		}

		static ::System::Boolean IsInfinity(::UnityEngine::Vector3 v)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_ISINFINITY_OFFSET))(v);
		}

		static ::UnityEngine::Vector3 MoveTo(::UnityEngine::Vector3 srcPos, ::UnityEngine::Vector3 tarPos, ::System::Single curSpeed, ::System::Single deltaTime, ::System::Boolean& isReach)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_MOVETO_OFFSET))(srcPos, tarPos, curSpeed, deltaTime, isReach);
		}

		static ::UnityEngine::Vector3 MoveTo_1(::UnityEngine::Vector3 srcPos, ::UnityEngine::Vector3 tarPos, ::UnityEngine::Vector3 curSpeedDir, ::System::Single deltaTime, ::System::Boolean& isReach)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_MOVETO_1_OFFSET))(srcPos, tarPos, curSpeedDir, deltaTime, isReach);
		}

		static ::UnityEngine::Vector3 SpeedTo(::UnityEngine::Vector3 srcSpeed, ::UnityEngine::Vector3 tarSpeed, ::System::Single accel, ::System::Single decel, ::System::Single angleRatio, ::System::Single deltaTime)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_SPEEDTO_OFFSET))(srcSpeed, tarSpeed, accel, decel, angleRatio, deltaTime);
		}

		static ::UnityEngine::Vector3 ClampAngleInDegree(::UnityEngine::Vector3 angle, ::UnityEngine::Vector3 toChangeAngle)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_CLAMPANGLEINDEGREE_OFFSET))(angle, toChangeAngle);
		}

		static ::System::Single Distance2(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_DISTANCE2_OFFSET))(v1, v2);
		}

		static ::System::Single ManhattanDis(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_MANHATTANDIS_OFFSET))(v1, v2);
		}

		static ::System::Numerics::Vector3 ToSystemNumerics(::UnityEngine::Vector3 vector)
		{
			return ((::System::Numerics::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_VECTOR3X_TOSYSTEMNUMERICS_OFFSET))(vector);
		}
	};
}
