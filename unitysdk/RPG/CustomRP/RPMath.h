#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/AABB.h"
#include "unitysdk/RPG/CustomRP/RPMath_TransformBoundsTmp.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CUSTOMRP_RPMATH_ADDMUL_OFFSET UNITYSDK_OFFSET(0x1C6DE190)
#define RPG_CUSTOMRP_RPMATH_ADD_1_OFFSET UNITYSDK_OFFSET(0x1C6DE1E0)
#define RPG_CUSTOMRP_RPMATH_ADD_OFFSET UNITYSDK_OFFSET(0x1C6DE140)
#define RPG_CUSTOMRP_RPMATH_BOXINTERSECTFRUSTUM_OFFSET UNITYSDK_OFFSET(0x1C6DDBF0)
#define RPG_CUSTOMRP_RPMATH_DOT_1_OFFSET UNITYSDK_OFFSET(0x1C6AFBA0)
#define RPG_CUSTOMRP_RPMATH_DOT_OFFSET UNITYSDK_OFFSET(0x1C6DD1E0)
#define RPG_CUSTOMRP_RPMATH_GAMMATOLINEARSPACEHDR_OFFSET UNITYSDK_OFFSET(0x1C6DECE0)
#define RPG_CUSTOMRP_RPMATH_GETCOLUMN_1_OFFSET UNITYSDK_OFFSET(0x1C6DE070)
#define RPG_CUSTOMRP_RPMATH_GETCOLUMN_OFFSET UNITYSDK_OFFSET(0x1C6DE6E0)
#define RPG_CUSTOMRP_RPMATH_GETRANDOM2D_OFFSET UNITYSDK_OFFSET(0x1C6DE420)
#define RPG_CUSTOMRP_RPMATH_INTERSECTSAABB_OFFSET UNITYSDK_OFFSET(0x1C6DDB30)
#define RPG_CUSTOMRP_RPMATH_ISSAMEROUGH_1_OFFSET UNITYSDK_OFFSET(0x1C6DEA80)
#define RPG_CUSTOMRP_RPMATH_ISSAMEROUGH_2_OFFSET UNITYSDK_OFFSET(0x1C6DEDA0)
#define RPG_CUSTOMRP_RPMATH_ISSAMEROUGH_OFFSET UNITYSDK_OFFSET(0x1C6DE260)
#define RPG_CUSTOMRP_RPMATH_ISSAME_1_OFFSET UNITYSDK_OFFSET(0x1C6DE230)
#define RPG_CUSTOMRP_RPMATH_ISSAME_2_OFFSET UNITYSDK_OFFSET(0x1C6AF8E0)
#define RPG_CUSTOMRP_RPMATH_ISSAME_3_OFFSET UNITYSDK_OFFSET(0x1C6DE2A0)
#define RPG_CUSTOMRP_RPMATH_ISSAME_4_OFFSET UNITYSDK_OFFSET(0x1C6AF970)
#define RPG_CUSTOMRP_RPMATH_ISSAME_5_OFFSET UNITYSDK_OFFSET(0x1C6DEC90)
#define RPG_CUSTOMRP_RPMATH_ISSAME_6_OFFSET UNITYSDK_OFFSET(0x1C6AF920)
#define RPG_CUSTOMRP_RPMATH_ISSAME_OFFSET UNITYSDK_OFFSET(0x1C6DD200)
#define RPG_CUSTOMRP_RPMATH_MAD_OFFSET UNITYSDK_OFFSET(0x1C6DE200)
#define RPG_CUSTOMRP_RPMATH_MAX2_OFFSET UNITYSDK_OFFSET(0x1C6DE170)
#define RPG_CUSTOMRP_RPMATH_MIN2_OFFSET UNITYSDK_OFFSET(0x1C6DE100)
#define RPG_CUSTOMRP_RPMATH_MULCOLUMN_OFFSET UNITYSDK_OFFSET(0x1C6DE8D0)
#define RPG_CUSTOMRP_RPMATH_MULINDEX_OFFSET UNITYSDK_OFFSET(0x1C6DE810)
#define RPG_CUSTOMRP_RPMATH_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1C6B0A50)
#define RPG_CUSTOMRP_RPMATH_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1C6CF340)
#define RPG_CUSTOMRP_RPMATH_MUL_1_OFFSET UNITYSDK_OFFSET(0x1C6DE510)
#define RPG_CUSTOMRP_RPMATH_MUL_OFFSET UNITYSDK_OFFSET(0x1C6DE0E0)
#define RPG_CUSTOMRP_RPMATH_NEARDISTPOINT2AABB_1_OFFSET UNITYSDK_OFFSET(0x1C6DD500)
#define RPG_CUSTOMRP_RPMATH_NEARDISTPOINT2AABB_OFFSET UNITYSDK_OFFSET(0x1C6DD360)
#define RPG_CUSTOMRP_RPMATH_NEARDIST_OFFSET UNITYSDK_OFFSET(0x1C6DD1B0)
#define RPG_CUSTOMRP_RPMATH_NEARPOINT2AABB_1_OFFSET UNITYSDK_OFFSET(0x1C6DD8B0)
#define RPG_CUSTOMRP_RPMATH_NEARPOINT2AABB_OFFSET UNITYSDK_OFFSET(0x1C6DD630)
#define RPG_CUSTOMRP_RPMATH_RGB_NEWA_OFFSET UNITYSDK_OFFSET(0x1C6DEC70)
#define RPG_CUSTOMRP_RPMATH_SETCOLUMN_OFFSET UNITYSDK_OFFSET(0x1C6DE780)
#define RPG_CUSTOMRP_RPMATH_SETIDENTITY_OFFSET UNITYSDK_OFFSET(0x1C6DE9A0)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_1_OFFSET UNITYSDK_OFFSET(0x1C6DD250)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_2_OFFSET UNITYSDK_OFFSET(0x1C6DD280)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_3_OFFSET UNITYSDK_OFFSET(0x1C6DD2B0)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_4_OFFSET UNITYSDK_OFFSET(0x1C6DD2C0)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_5_OFFSET UNITYSDK_OFFSET(0x1C6DD310)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_6_OFFSET UNITYSDK_OFFSET(0x1C6DE2F0)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_7_OFFSET UNITYSDK_OFFSET(0x1C6DE330)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_8_OFFSET UNITYSDK_OFFSET(0x1C6DE380)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_9_OFFSET UNITYSDK_OFFSET(0x1C6DED40)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_OFFSET UNITYSDK_OFFSET(0x1C6DD220)
#define RPG_CUSTOMRP_RPMATH_SETORTHO_OFFSET UNITYSDK_OFFSET(0x1C6DE9D0)
#define RPG_CUSTOMRP_RPMATH_SET_1_OFFSET UNITYSDK_OFFSET(0x1C6DE4A0)
#define RPG_CUSTOMRP_RPMATH_SET_OFFSET UNITYSDK_OFFSET(0x1C6DE120)
#define RPG_CUSTOMRP_RPMATH_SQR_1_OFFSET UNITYSDK_OFFSET(0x1C6DE3E0)
#define RPG_CUSTOMRP_RPMATH_SQR_OFFSET UNITYSDK_OFFSET(0x1C6AFB60)
#define RPG_CUSTOMRP_RPMATH_SUB_OFFSET UNITYSDK_OFFSET(0x1C6DE1C0)
#define RPG_CUSTOMRP_RPMATH_TRANSFORMBOUNDS_OFFSET UNITYSDK_OFFSET(0x1C6DDD20)
#define RPG_CUSTOMRP_RPMATH_VECTOR2AABBSQR_OFFSET UNITYSDK_OFFSET(0x1C6DDB90)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPMath_TypeDefinitionIndex = 37198;

	class RPMath : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_tmp0()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(RPMath_TypeDefinitionIndex)->GetStaticField(0xD1B0);
		}
		static ::UnityEngine::Vector3* StaticGet_tmp1()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(RPMath_TypeDefinitionIndex)->GetStaticField(0xD1BC);
		}
		static ::UnityEngine::Matrix4x4* StaticGet_tmpMatrix0()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(RPMath_TypeDefinitionIndex)->GetStaticField(0xD1C8);
		}
		static ::RPG::CustomRP::RPMath_TransformBoundsTmp* StaticGet_boundTmp()
		{
			return (::RPG::CustomRP::RPMath_TransformBoundsTmp*)Il2CppClass::FromTypeDefinitionIndex(RPMath_TypeDefinitionIndex)->GetStaticField(0xD208);
		}

		static ::System::Boolean NearDist(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single& a4)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_NEARDIST_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single Dot(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_DOT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean IsSame(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ISSAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean SetIfNotSame(::System::Single& a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean SetIfNotSame_1(::System::Int32& a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean SetIfNotSame_2(::System::UInt32& a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32&, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean SetIfNotSame_3(::System::Boolean& a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_3_OFFSET))(a1, a2);
		}

		static ::System::Boolean SetIfNotSame_4(::System::String*& a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*&, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_4_OFFSET))(a1, a2);
		}

		static ::System::Boolean SetIfNotSame_5(::UnityEngine::GameObject*& a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*&, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_5_OFFSET))(a1, a2);
		}

		static ::System::Single NearDistPoint2AABB(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_NEARDISTPOINT2AABB_OFFSET))(a1, a2);
		}

		static ::System::Single NearDistPoint2AABB_1(::UnityEngine::Vector4& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector4&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_NEARDISTPOINT2AABB_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 NearPoint2AABB(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_NEARPOINT2AABB_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 NearPoint2AABB_1(::UnityEngine::Vector4& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector4&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_NEARPOINT2AABB_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean IntersectsAABB(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_INTERSECTSAABB_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single Vector2AABBSqr(::UnityEngine::Vector3& a1, ::RPG::CustomRP::AABB& a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::RPG::CustomRP::AABB&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_VECTOR2AABBSQR_OFFSET))(a1, a2);
		}

		static ::System::Boolean BoxIntersectFrustum(::RPG::CustomRP::AABB& a1, ::Il2CppArray<::UnityEngine::Plane>* a2)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::AABB&, ::Il2CppArray<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_BOXINTERSECTFRUSTUM_OFFSET))(a1, a2);
		}

		static ::System::Void TransformBounds(::UnityEngine::Matrix4x4& a1, ::RPG::CustomRP::AABB& a2, ::RPG::CustomRP::AABB& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::RPG::CustomRP::AABB&, ::RPG::CustomRP::AABB&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_TRANSFORMBOUNDS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Set(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SET_OFFSET))(a1, a2);
		}

		static ::System::Void Add(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ADD_OFFSET))(a1, a2);
		}

		static ::System::Void Add_1(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ADD_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AddMul(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ADDMUL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Mad(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_MAD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Sub(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SUB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Mul(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_MUL_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector4 Multiply(::UnityEngine::Vector4& a1, ::UnityEngine::Vector4& a2)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 Multiply_1(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_MULTIPLY_1_OFFSET))(a1, a2);
		}

		static ::System::Void Min2(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_MIN2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Max2(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_MAX2_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsSame_1(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ISSAME_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsSame_2(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ISSAME_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsSameRough(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ISSAMEROUGH_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsSame_3(::UnityEngine::Vector4& a1, ::UnityEngine::Vector4& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ISSAME_3_OFFSET))(a1, a2);
		}

		static ::System::Boolean SetIfNotSame_6(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_6_OFFSET))(a1, a2);
		}

		static ::System::Boolean SetIfNotSame_7(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_7_OFFSET))(a1, a2);
		}

		static ::System::Boolean SetIfNotSame_8(::UnityEngine::Vector4& a1, ::UnityEngine::Vector4& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_8_OFFSET))(a1, a2);
		}

		static ::System::Single Sqr(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SQR_OFFSET))(a1, a2);
		}

		static ::System::Single Sqr_1(::UnityEngine::Vector4& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector4&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SQR_1_OFFSET))(a1, a2);
		}

		static ::System::Single Dot_1(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_DOT_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 GetRandom2D()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_GETRANDOM2D_OFFSET))();
		}

		static ::System::Void Set_1(::UnityEngine::Matrix4x4& a1, ::UnityEngine::Matrix4x4& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SET_1_OFFSET))(a1, a2);
		}

		static ::System::Void Mul_1(::UnityEngine::Matrix4x4& a1, ::UnityEngine::Matrix4x4& a2, ::UnityEngine::Matrix4x4& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_MUL_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GetColumn(::UnityEngine::Matrix4x4& a1, ::System::Int32 a2, ::UnityEngine::Vector4& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_GETCOLUMN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GetColumn_1(::UnityEngine::Matrix4x4& a1, ::System::Int32 a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_GETCOLUMN_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetColumn(::UnityEngine::Matrix4x4& a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETCOLUMN_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void MulIndex(::UnityEngine::Matrix4x4& a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_MULINDEX_OFFSET))(a1, a2, a3);
		}

		static ::System::Void MulColumn(::UnityEngine::Matrix4x4& a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_MULCOLUMN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetIdentity(::UnityEngine::Matrix4x4& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETIDENTITY_OFFSET))(a1);
		}

		static ::System::Void SetOrtho(::UnityEngine::Matrix4x4& a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETORTHO_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean IsSame_4(::UnityEngine::Matrix4x4& a1, ::UnityEngine::Matrix4x4& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ISSAME_4_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsSameRough_1(::UnityEngine::Matrix4x4& a1, ::UnityEngine::Matrix4x4& a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ISSAMEROUGH_1_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Color RGB_NewA(::UnityEngine::Color& a1, ::System::Single a2)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_RGB_NEWA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsSame_5(::UnityEngine::Color& a1, ::UnityEngine::Color& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ISSAME_5_OFFSET))(a1, a2);
		}

		static ::System::Single GammaToLinearSpaceHDR(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_GAMMATOLINEARSPACEHDR_OFFSET))(a1);
		}

		static ::System::Boolean SetIfNotSame_9(::UnityEngine::Color& a1, ::UnityEngine::Color& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_9_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsSame_6(::UnityEngine::Quaternion& a1, ::UnityEngine::Quaternion& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ISSAME_6_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsSameRough_2(::UnityEngine::Quaternion& a1, ::UnityEngine::Quaternion& a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ISSAMEROUGH_2_OFFSET))(a1, a2, a3);
		}
	};
}
