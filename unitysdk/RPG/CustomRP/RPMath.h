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

#define RPG_CUSTOMRP_RPMATH_ADDMUL_OFFSET UNITYSDK_OFFSET(0x1816E890)
#define RPG_CUSTOMRP_RPMATH_ADD_1_OFFSET UNITYSDK_OFFSET(0x1816E8E0)
#define RPG_CUSTOMRP_RPMATH_ADD_OFFSET UNITYSDK_OFFSET(0x1816E840)
#define RPG_CUSTOMRP_RPMATH_BOXINTERSECTFRUSTUM_OFFSET UNITYSDK_OFFSET(0x1816E2F0)
#define RPG_CUSTOMRP_RPMATH_DOT_1_OFFSET UNITYSDK_OFFSET(0x18143430)
#define RPG_CUSTOMRP_RPMATH_DOT_OFFSET UNITYSDK_OFFSET(0x1816D8B0)
#define RPG_CUSTOMRP_RPMATH_GAMMATOLINEARSPACEHDR_OFFSET UNITYSDK_OFFSET(0x1816F420)
#define RPG_CUSTOMRP_RPMATH_GETCOLUMN_1_OFFSET UNITYSDK_OFFSET(0x1816E770)
#define RPG_CUSTOMRP_RPMATH_GETCOLUMN_OFFSET UNITYSDK_OFFSET(0x1816EDE0)
#define RPG_CUSTOMRP_RPMATH_GETRANDOM2D_OFFSET UNITYSDK_OFFSET(0x1816EB20)
#define RPG_CUSTOMRP_RPMATH_INTERSECTSAABB_OFFSET UNITYSDK_OFFSET(0x1816E230)
#define RPG_CUSTOMRP_RPMATH_ISSAMEROUGH_1_OFFSET UNITYSDK_OFFSET(0x1816F1C0)
#define RPG_CUSTOMRP_RPMATH_ISSAMEROUGH_2_OFFSET UNITYSDK_OFFSET(0x1816F4E0)
#define RPG_CUSTOMRP_RPMATH_ISSAMEROUGH_OFFSET UNITYSDK_OFFSET(0x1816E960)
#define RPG_CUSTOMRP_RPMATH_ISSAME_1_OFFSET UNITYSDK_OFFSET(0x1816E930)
#define RPG_CUSTOMRP_RPMATH_ISSAME_2_OFFSET UNITYSDK_OFFSET(0x18143170)
#define RPG_CUSTOMRP_RPMATH_ISSAME_3_OFFSET UNITYSDK_OFFSET(0x1816E9A0)
#define RPG_CUSTOMRP_RPMATH_ISSAME_4_OFFSET UNITYSDK_OFFSET(0x18143200)
#define RPG_CUSTOMRP_RPMATH_ISSAME_5_OFFSET UNITYSDK_OFFSET(0x1816F3D0)
#define RPG_CUSTOMRP_RPMATH_ISSAME_6_OFFSET UNITYSDK_OFFSET(0x181431B0)
#define RPG_CUSTOMRP_RPMATH_ISSAME_OFFSET UNITYSDK_OFFSET(0x1816D8D0)
#define RPG_CUSTOMRP_RPMATH_MAD_OFFSET UNITYSDK_OFFSET(0x1816E900)
#define RPG_CUSTOMRP_RPMATH_MAX2_OFFSET UNITYSDK_OFFSET(0x1816E870)
#define RPG_CUSTOMRP_RPMATH_MIN2_OFFSET UNITYSDK_OFFSET(0x1816E800)
#define RPG_CUSTOMRP_RPMATH_MULCOLUMN_OFFSET UNITYSDK_OFFSET(0x1816F010)
#define RPG_CUSTOMRP_RPMATH_MULINDEX_OFFSET UNITYSDK_OFFSET(0x1816EF50)
#define RPG_CUSTOMRP_RPMATH_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x181442F0)
#define RPG_CUSTOMRP_RPMATH_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x18160990)
#define RPG_CUSTOMRP_RPMATH_MUL_1_OFFSET UNITYSDK_OFFSET(0x1816EC10)
#define RPG_CUSTOMRP_RPMATH_MUL_OFFSET UNITYSDK_OFFSET(0x1816E7E0)
#define RPG_CUSTOMRP_RPMATH_NEARDISTPOINT2AABB_1_OFFSET UNITYSDK_OFFSET(0x1816DC00)
#define RPG_CUSTOMRP_RPMATH_NEARDISTPOINT2AABB_OFFSET UNITYSDK_OFFSET(0x1816DA30)
#define RPG_CUSTOMRP_RPMATH_NEARDIST_OFFSET UNITYSDK_OFFSET(0x1816D880)
#define RPG_CUSTOMRP_RPMATH_NEARPOINT2AABB_1_OFFSET UNITYSDK_OFFSET(0x1816DFB0)
#define RPG_CUSTOMRP_RPMATH_NEARPOINT2AABB_OFFSET UNITYSDK_OFFSET(0x1816DD30)
#define RPG_CUSTOMRP_RPMATH_RGB_NEWA_OFFSET UNITYSDK_OFFSET(0x1816F3B0)
#define RPG_CUSTOMRP_RPMATH_SETCOLUMN_OFFSET UNITYSDK_OFFSET(0x1816EE80)
#define RPG_CUSTOMRP_RPMATH_SETIDENTITY_OFFSET UNITYSDK_OFFSET(0x1816F0E0)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_1_OFFSET UNITYSDK_OFFSET(0x1816D920)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_2_OFFSET UNITYSDK_OFFSET(0x1816D950)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_3_OFFSET UNITYSDK_OFFSET(0x1816D980)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_4_OFFSET UNITYSDK_OFFSET(0x1816D990)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_5_OFFSET UNITYSDK_OFFSET(0x1816D9E0)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_6_OFFSET UNITYSDK_OFFSET(0x1816E9F0)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_7_OFFSET UNITYSDK_OFFSET(0x1816EA30)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_8_OFFSET UNITYSDK_OFFSET(0x1816EA80)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_9_OFFSET UNITYSDK_OFFSET(0x1816F480)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_OFFSET UNITYSDK_OFFSET(0x1816D8F0)
#define RPG_CUSTOMRP_RPMATH_SETORTHO_OFFSET UNITYSDK_OFFSET(0x1816F110)
#define RPG_CUSTOMRP_RPMATH_SET_1_OFFSET UNITYSDK_OFFSET(0x1816EBA0)
#define RPG_CUSTOMRP_RPMATH_SET_OFFSET UNITYSDK_OFFSET(0x1816E820)
#define RPG_CUSTOMRP_RPMATH_SQR_1_OFFSET UNITYSDK_OFFSET(0x1816EAE0)
#define RPG_CUSTOMRP_RPMATH_SQR_OFFSET UNITYSDK_OFFSET(0x181433F0)
#define RPG_CUSTOMRP_RPMATH_SUB_OFFSET UNITYSDK_OFFSET(0x1816E8C0)
#define RPG_CUSTOMRP_RPMATH_TRANSFORMBOUNDS_OFFSET UNITYSDK_OFFSET(0x1816E420)
#define RPG_CUSTOMRP_RPMATH_VECTOR2AABBSQR_OFFSET UNITYSDK_OFFSET(0x1816E290)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPMath_TypeDefinitionIndex = 35257;

	class RPMath : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_tmp0()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(RPMath_TypeDefinitionIndex)->GetStaticField(0x108B0);
		}
		static ::UnityEngine::Vector3* StaticGet_tmp1()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(RPMath_TypeDefinitionIndex)->GetStaticField(0x108BC);
		}
		static ::RPG::CustomRP::RPMath_TransformBoundsTmp* StaticGet_boundTmp()
		{
			return (::RPG::CustomRP::RPMath_TransformBoundsTmp*)Il2CppClass::FromTypeDefinitionIndex(RPMath_TypeDefinitionIndex)->GetStaticField(0x108C8);
		}
		static ::UnityEngine::Matrix4x4* StaticGet_tmpMatrix0()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(RPMath_TypeDefinitionIndex)->GetStaticField(0x10958);
		}

		static ::System::Boolean NearDist(::System::Single min, ::System::Single max, ::System::Single pos, ::System::Single& d)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_NEARDIST_OFFSET))(min, max, pos, d);
		}

		static ::System::Single Dot(::System::Single vx, ::System::Single vy, ::System::Single vz, ::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_DOT_OFFSET))(vx, vy, vz, x, y, z);
		}

		static ::System::Boolean IsSame(::System::Single a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ISSAME_OFFSET))(a, b);
		}

		static ::System::Boolean SetIfNotSame(::System::Single& a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_OFFSET))(a, b);
		}

		static ::System::Boolean SetIfNotSame_1(::System::Int32& a, ::System::Int32 b)
		{
			return ((::System::Boolean(*)(::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_1_OFFSET))(a, b);
		}

		static ::System::Boolean SetIfNotSame_2(::System::UInt32& a, ::System::UInt32 b)
		{
			return ((::System::Boolean(*)(::System::UInt32&, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_2_OFFSET))(a, b);
		}

		static ::System::Boolean SetIfNotSame_3(::System::Boolean& a, ::System::Boolean b)
		{
			return ((::System::Boolean(*)(::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_3_OFFSET))(a, b);
		}

		static ::System::Boolean SetIfNotSame_4(::System::String*& a, ::System::String* b)
		{
			return ((::System::Boolean(*)(::System::String*&, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_4_OFFSET))(a, b);
		}

		static ::System::Boolean SetIfNotSame_5(::UnityEngine::GameObject*& a, ::UnityEngine::GameObject* b)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*&, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_5_OFFSET))(a, b);
		}

		static ::System::Single NearDistPoint2AABB(::UnityEngine::Vector3& ext, ::UnityEngine::Vector3& pos)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_NEARDISTPOINT2AABB_OFFSET))(ext, pos);
		}

		static ::System::Single NearDistPoint2AABB_1(::UnityEngine::Vector4& ext, ::UnityEngine::Vector3& pos)
		{
			return ((::System::Single(*)(::UnityEngine::Vector4&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_NEARDISTPOINT2AABB_1_OFFSET))(ext, pos);
		}

		static ::UnityEngine::Vector3 NearPoint2AABB(::UnityEngine::Vector3& ext, ::UnityEngine::Vector3& pos)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_NEARPOINT2AABB_OFFSET))(ext, pos);
		}

		static ::UnityEngine::Vector3 NearPoint2AABB_1(::UnityEngine::Vector4& ext, ::UnityEngine::Vector3& pos)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector4&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_NEARPOINT2AABB_1_OFFSET))(ext, pos);
		}

		static ::System::Boolean IntersectsAABB(::UnityEngine::Vector3& min0, ::UnityEngine::Vector3& max0, ::UnityEngine::Vector3& min1, ::UnityEngine::Vector3& max1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_INTERSECTSAABB_OFFSET))(min0, max0, min1, max1);
		}

		static ::System::Single Vector2AABBSqr(::UnityEngine::Vector3& pos, ::RPG::CustomRP::AABB& aabb)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::RPG::CustomRP::AABB&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_VECTOR2AABBSQR_OFFSET))(pos, aabb);
		}

		static ::System::Boolean BoxIntersectFrustum(::RPG::CustomRP::AABB& aabb, ::Il2CppArray<::UnityEngine::Plane>* planes)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::AABB&, ::Il2CppArray<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_BOXINTERSECTFRUSTUM_OFFSET))(aabb, planes);
		}

		static ::System::Void TransformBounds(::UnityEngine::Matrix4x4& m, ::RPG::CustomRP::AABB& bounds, ::RPG::CustomRP::AABB& boundsLS)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::RPG::CustomRP::AABB&, ::RPG::CustomRP::AABB&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_TRANSFORMBOUNDS_OFFSET))(m, bounds, boundsLS);
		}

		static ::System::Void Set(::UnityEngine::Vector3& result, ::UnityEngine::Vector3& v)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SET_OFFSET))(result, v);
		}

		static ::System::Void Add(::UnityEngine::Vector3& result, ::UnityEngine::Vector3& v)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ADD_OFFSET))(result, v);
		}

		static ::System::Void Add_1(::UnityEngine::Vector3& result, ::UnityEngine::Vector3& a, ::UnityEngine::Vector3& b)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ADD_1_OFFSET))(result, a, b);
		}

		static ::System::Void AddMul(::UnityEngine::Vector3& result, ::UnityEngine::Vector3& a, ::UnityEngine::Vector3& b, ::System::Single s)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ADDMUL_OFFSET))(result, a, b, s);
		}

		static ::System::Void Mad(::UnityEngine::Vector3& result, ::UnityEngine::Vector3& a, ::UnityEngine::Vector3& b, ::System::Single s)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_MAD_OFFSET))(result, a, b, s);
		}

		static ::System::Void Sub(::UnityEngine::Vector3& result, ::UnityEngine::Vector3& a, ::UnityEngine::Vector3& b)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SUB_OFFSET))(result, a, b);
		}

		static ::System::Void Mul(::UnityEngine::Vector3& result, ::UnityEngine::Vector3& v, ::System::Single scale)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_MUL_OFFSET))(result, v, scale);
		}

		static ::UnityEngine::Vector4 Multiply(::UnityEngine::Vector4& a, ::UnityEngine::Vector4& b)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_MULTIPLY_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector3 Multiply_1(::UnityEngine::Vector3& a, ::UnityEngine::Vector3& b)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_MULTIPLY_1_OFFSET))(a, b);
		}

		static ::System::Void Min2(::UnityEngine::Vector3& result, ::UnityEngine::Vector3& a, ::UnityEngine::Vector3& b)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_MIN2_OFFSET))(result, a, b);
		}

		static ::System::Void Max2(::UnityEngine::Vector3& result, ::UnityEngine::Vector3& a, ::UnityEngine::Vector3& b)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_MAX2_OFFSET))(result, a, b);
		}

		static ::System::Boolean IsSame_1(::UnityEngine::Vector2& a, ::UnityEngine::Vector2& b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ISSAME_1_OFFSET))(a, b);
		}

		static ::System::Boolean IsSame_2(::UnityEngine::Vector3& a, ::UnityEngine::Vector3& b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ISSAME_2_OFFSET))(a, b);
		}

		static ::System::Boolean IsSameRough(::UnityEngine::Vector3& a, ::UnityEngine::Vector3& b, ::System::Single eps)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ISSAMEROUGH_OFFSET))(a, b, eps);
		}

		static ::System::Boolean IsSame_3(::UnityEngine::Vector4& a, ::UnityEngine::Vector4& b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ISSAME_3_OFFSET))(a, b);
		}

		static ::System::Boolean SetIfNotSame_6(::UnityEngine::Vector2& a, ::UnityEngine::Vector2& b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_6_OFFSET))(a, b);
		}

		static ::System::Boolean SetIfNotSame_7(::UnityEngine::Vector3& a, ::UnityEngine::Vector3& b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_7_OFFSET))(a, b);
		}

		static ::System::Boolean SetIfNotSame_8(::UnityEngine::Vector4& a, ::UnityEngine::Vector4& b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_8_OFFSET))(a, b);
		}

		static ::System::Single Sqr(::UnityEngine::Vector3& a, ::UnityEngine::Vector3& b)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SQR_OFFSET))(a, b);
		}

		static ::System::Single Sqr_1(::UnityEngine::Vector4& a, ::UnityEngine::Vector3& b)
		{
			return ((::System::Single(*)(::UnityEngine::Vector4&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SQR_1_OFFSET))(a, b);
		}

		static ::System::Single Dot_1(::UnityEngine::Vector3& a, ::UnityEngine::Vector3& b)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_DOT_1_OFFSET))(a, b);
		}

		static ::UnityEngine::Vector2 GetRandom2D()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_GETRANDOM2D_OFFSET))();
		}

		static ::System::Void Set_1(::UnityEngine::Matrix4x4& result, ::UnityEngine::Matrix4x4& v)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SET_1_OFFSET))(result, v);
		}

		static ::System::Void Mul_1(::UnityEngine::Matrix4x4& result, ::UnityEngine::Matrix4x4& lhs, ::UnityEngine::Matrix4x4& rhs)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_MUL_1_OFFSET))(result, lhs, rhs);
		}

		static ::System::Void GetColumn(::UnityEngine::Matrix4x4& matrix, ::System::Int32 index, ::UnityEngine::Vector4& result)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_GETCOLUMN_OFFSET))(matrix, index, result);
		}

		static ::System::Void GetColumn_1(::UnityEngine::Matrix4x4& matrix, ::System::Int32 index, ::UnityEngine::Vector3& result)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_GETCOLUMN_1_OFFSET))(matrix, index, result);
		}

		static ::System::Void SetColumn(::UnityEngine::Matrix4x4& matrix, ::System::Int32 index, ::System::Single x, ::System::Single y, ::System::Single z, ::System::Single w)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETCOLUMN_OFFSET))(matrix, index, x, y, z, w);
		}

		static ::System::Void MulIndex(::UnityEngine::Matrix4x4& matrix, ::System::Int32 index, ::System::Single s)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_MULINDEX_OFFSET))(matrix, index, s);
		}

		static ::System::Void MulColumn(::UnityEngine::Matrix4x4& matrix, ::System::Int32 index, ::System::Single s)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_MULCOLUMN_OFFSET))(matrix, index, s);
		}

		static ::System::Void SetIdentity(::UnityEngine::Matrix4x4& result)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETIDENTITY_OFFSET))(result);
		}

		static ::System::Void SetOrtho(::UnityEngine::Matrix4x4& result, ::System::Single left, ::System::Single right, ::System::Single bottom, ::System::Single top, ::System::Single zNear, ::System::Single zFar)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETORTHO_OFFSET))(result, left, right, bottom, top, zNear, zFar);
		}

		static ::System::Boolean IsSame_4(::UnityEngine::Matrix4x4& a, ::UnityEngine::Matrix4x4& b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ISSAME_4_OFFSET))(a, b);
		}

		static ::System::Boolean IsSameRough_1(::UnityEngine::Matrix4x4& a, ::UnityEngine::Matrix4x4& b, ::System::Single eps)
		{
			return ((::System::Boolean(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ISSAMEROUGH_1_OFFSET))(a, b, eps);
		}

		static ::UnityEngine::Color RGB_NewA(::UnityEngine::Color& c, ::System::Single a)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_RGB_NEWA_OFFSET))(c, a);
		}

		static ::System::Boolean IsSame_5(::UnityEngine::Color& a, ::UnityEngine::Color& b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ISSAME_5_OFFSET))(a, b);
		}

		static ::System::Single GammaToLinearSpaceHDR(::System::Single value)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_GAMMATOLINEARSPACEHDR_OFFSET))(value);
		}

		static ::System::Boolean SetIfNotSame_9(::UnityEngine::Color& a, ::UnityEngine::Color& b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_9_OFFSET))(a, b);
		}

		static ::System::Boolean IsSame_6(::UnityEngine::Quaternion& a, ::UnityEngine::Quaternion& b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ISSAME_6_OFFSET))(a, b);
		}

		static ::System::Boolean IsSameRough_2(::UnityEngine::Quaternion& a, ::UnityEngine::Quaternion& b, ::System::Single eps)
		{
			return ((::System::Boolean(*)(::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPMATH_ISSAMEROUGH_2_OFFSET))(a, b, eps);
		}
	};
}
