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

#define RPG_CUSTOMRP_RPMATH_ADDMUL_OFFSET UNITYSDK_OFFSET(0x16ACB660)
#define RPG_CUSTOMRP_RPMATH_ADD_1_OFFSET UNITYSDK_OFFSET(0x16ACB6B0)
#define RPG_CUSTOMRP_RPMATH_ADD_OFFSET UNITYSDK_OFFSET(0x16ACB610)
#define RPG_CUSTOMRP_RPMATH_BOXINTERSECTFRUSTUM_OFFSET UNITYSDK_OFFSET(0x16ACB030)
#define RPG_CUSTOMRP_RPMATH_DOT_1_OFFSET UNITYSDK_OFFSET(0x16A9FA30)
#define RPG_CUSTOMRP_RPMATH_DOT_OFFSET UNITYSDK_OFFSET(0x16ACA5F0)
#define RPG_CUSTOMRP_RPMATH_GAMMATOLINEARSPACEHDR_OFFSET UNITYSDK_OFFSET(0x16ACC1B0)
#define RPG_CUSTOMRP_RPMATH_GETCOLUMN_1_OFFSET UNITYSDK_OFFSET(0x16ACB540)
#define RPG_CUSTOMRP_RPMATH_GETCOLUMN_OFFSET UNITYSDK_OFFSET(0x16ACBBB0)
#define RPG_CUSTOMRP_RPMATH_GETRANDOM2D_OFFSET UNITYSDK_OFFSET(0x16ACB8F0)
#define RPG_CUSTOMRP_RPMATH_INTERSECTSAABB_OFFSET UNITYSDK_OFFSET(0x16ACAF70)
#define RPG_CUSTOMRP_RPMATH_ISSAMEROUGH_1_OFFSET UNITYSDK_OFFSET(0x16ACBF50)
#define RPG_CUSTOMRP_RPMATH_ISSAMEROUGH_2_OFFSET UNITYSDK_OFFSET(0x16ACC270)
#define RPG_CUSTOMRP_RPMATH_ISSAMEROUGH_OFFSET UNITYSDK_OFFSET(0x16ACB730)
#define RPG_CUSTOMRP_RPMATH_ISSAME_1_OFFSET UNITYSDK_OFFSET(0x16ACB700)
#define RPG_CUSTOMRP_RPMATH_ISSAME_2_OFFSET UNITYSDK_OFFSET(0x16A9F770)
#define RPG_CUSTOMRP_RPMATH_ISSAME_3_OFFSET UNITYSDK_OFFSET(0x16ACB770)
#define RPG_CUSTOMRP_RPMATH_ISSAME_4_OFFSET UNITYSDK_OFFSET(0x16A9F800)
#define RPG_CUSTOMRP_RPMATH_ISSAME_5_OFFSET UNITYSDK_OFFSET(0x16ACC160)
#define RPG_CUSTOMRP_RPMATH_ISSAME_6_OFFSET UNITYSDK_OFFSET(0x16A9F7B0)
#define RPG_CUSTOMRP_RPMATH_ISSAME_OFFSET UNITYSDK_OFFSET(0x16ACA610)
#define RPG_CUSTOMRP_RPMATH_MAD_OFFSET UNITYSDK_OFFSET(0x16ACB6D0)
#define RPG_CUSTOMRP_RPMATH_MAX2_OFFSET UNITYSDK_OFFSET(0x16ACB640)
#define RPG_CUSTOMRP_RPMATH_MIN2_OFFSET UNITYSDK_OFFSET(0x16ACB5D0)
#define RPG_CUSTOMRP_RPMATH_MULCOLUMN_OFFSET UNITYSDK_OFFSET(0x16ACBDA0)
#define RPG_CUSTOMRP_RPMATH_MULINDEX_OFFSET UNITYSDK_OFFSET(0x16ACBCE0)
#define RPG_CUSTOMRP_RPMATH_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x16AA0C90)
#define RPG_CUSTOMRP_RPMATH_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x16ABD620)
#define RPG_CUSTOMRP_RPMATH_MUL_1_OFFSET UNITYSDK_OFFSET(0x16ACB9E0)
#define RPG_CUSTOMRP_RPMATH_MUL_OFFSET UNITYSDK_OFFSET(0x16ACB5B0)
#define RPG_CUSTOMRP_RPMATH_NEARDISTPOINT2AABB_1_OFFSET UNITYSDK_OFFSET(0x16ACA940)
#define RPG_CUSTOMRP_RPMATH_NEARDISTPOINT2AABB_OFFSET UNITYSDK_OFFSET(0x16ACA770)
#define RPG_CUSTOMRP_RPMATH_NEARDIST_OFFSET UNITYSDK_OFFSET(0x16ACA5C0)
#define RPG_CUSTOMRP_RPMATH_NEARPOINT2AABB_1_OFFSET UNITYSDK_OFFSET(0x16ACACF0)
#define RPG_CUSTOMRP_RPMATH_NEARPOINT2AABB_OFFSET UNITYSDK_OFFSET(0x16ACAA70)
#define RPG_CUSTOMRP_RPMATH_RGB_NEWA_OFFSET UNITYSDK_OFFSET(0x16ACC140)
#define RPG_CUSTOMRP_RPMATH_SETCOLUMN_OFFSET UNITYSDK_OFFSET(0x16ACBC50)
#define RPG_CUSTOMRP_RPMATH_SETIDENTITY_OFFSET UNITYSDK_OFFSET(0x16ACBE70)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_1_OFFSET UNITYSDK_OFFSET(0x16ACA660)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_2_OFFSET UNITYSDK_OFFSET(0x16ACA690)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_3_OFFSET UNITYSDK_OFFSET(0x16ACA6C0)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_4_OFFSET UNITYSDK_OFFSET(0x16ACA6D0)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_5_OFFSET UNITYSDK_OFFSET(0x16ACA720)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_6_OFFSET UNITYSDK_OFFSET(0x16ACB7C0)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_7_OFFSET UNITYSDK_OFFSET(0x16ACB800)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_8_OFFSET UNITYSDK_OFFSET(0x16ACB850)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_9_OFFSET UNITYSDK_OFFSET(0x16ACC210)
#define RPG_CUSTOMRP_RPMATH_SETIFNOTSAME_OFFSET UNITYSDK_OFFSET(0x16ACA630)
#define RPG_CUSTOMRP_RPMATH_SETORTHO_OFFSET UNITYSDK_OFFSET(0x16ACBEA0)
#define RPG_CUSTOMRP_RPMATH_SET_1_OFFSET UNITYSDK_OFFSET(0x16ACB970)
#define RPG_CUSTOMRP_RPMATH_SET_OFFSET UNITYSDK_OFFSET(0x16ACB5F0)
#define RPG_CUSTOMRP_RPMATH_SQR_1_OFFSET UNITYSDK_OFFSET(0x16ACB8B0)
#define RPG_CUSTOMRP_RPMATH_SQR_OFFSET UNITYSDK_OFFSET(0x16A9F9F0)
#define RPG_CUSTOMRP_RPMATH_SUB_OFFSET UNITYSDK_OFFSET(0x16ACB690)
#define RPG_CUSTOMRP_RPMATH_TRANSFORMBOUNDS_OFFSET UNITYSDK_OFFSET(0x16ACB160)
#define RPG_CUSTOMRP_RPMATH_VECTOR2AABBSQR_OFFSET UNITYSDK_OFFSET(0x16ACAFD0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPMath_TypeDefinitionIndex = 29490;

	class RPMath : public ::System::Object
	{
	public:
		static ::RPG::CustomRP::RPMath_TransformBoundsTmp* StaticGet_boundTmp()
		{
			return (::RPG::CustomRP::RPMath_TransformBoundsTmp*)Il2CppClass::FromTypeDefinitionIndex(RPMath_TypeDefinitionIndex)->GetStaticField(0xF8B0);
		}
		static ::UnityEngine::Vector3* StaticGet_tmp0()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(RPMath_TypeDefinitionIndex)->GetStaticField(0xF940);
		}
		static ::UnityEngine::Vector3* StaticGet_tmp1()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(RPMath_TypeDefinitionIndex)->GetStaticField(0xF94C);
		}
		static ::UnityEngine::Matrix4x4* StaticGet_tmpMatrix0()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(RPMath_TypeDefinitionIndex)->GetStaticField(0xF958);
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
