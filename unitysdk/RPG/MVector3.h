#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_MVECTOR3_ANGLEBETWEEN_OFFSET UNITYSDK_OFFSET(0x1922CA80)
#define RPG_MVECTOR3_ANGLE_OFFSET UNITYSDK_OFFSET(0x1922C120)
#define RPG_MVECTOR3_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x1922C510)
#define RPG_MVECTOR3_CLAMPMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1922C560)
#define RPG_MVECTOR3_CROSS_OFFSET UNITYSDK_OFFSET(0x1922BBD0)
#define RPG_MVECTOR3_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1922C480)
#define RPG_MVECTOR3_DOT_OFFSET UNITYSDK_OFFSET(0x1922BDB0)
#define RPG_MVECTOR3_EQUALS_OFFSET UNITYSDK_OFFSET(0x22CA630)
#define RPG_MVECTOR3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22CA5D0)
#define RPG_MVECTOR3_GET_BACK_OFFSET UNITYSDK_OFFSET(0x1922C730)
#define RPG_MVECTOR3_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1922C770)
#define RPG_MVECTOR3_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1922C710)
#define RPG_MVECTOR3_GET_FWD_OFFSET UNITYSDK_OFFSET(0x1922CA60)
#define RPG_MVECTOR3_GET_ISINFINITY_OFFSET UNITYSDK_OFFSET(0x22CA400)
#define RPG_MVECTOR3_GET_ISNAN_OFFSET UNITYSDK_OFFSET(0x22CA3C0)
#define RPG_MVECTOR3_GET_ISNEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x22CA460)
#define RPG_MVECTOR3_GET_ISPOSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x22CA440)
#define RPG_MVECTOR3_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x22CA480)
#define RPG_MVECTOR3_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1922C790)
#define RPG_MVECTOR3_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x22CA810)
#define RPG_MVECTOR3_GET_NEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x1922C7F0)
#define RPG_MVECTOR3_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x22CA780)
#define RPG_MVECTOR3_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1922C6F0)
#define RPG_MVECTOR3_GET_POSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x1922C7D0)
#define RPG_MVECTOR3_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1922C7B0)
#define RPG_MVECTOR3_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x22CA840)
#define RPG_MVECTOR3_GET_UP_OFFSET UNITYSDK_OFFSET(0x1922C750)
#define RPG_MVECTOR3_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1922C6D0)
#define RPG_MVECTOR3_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1922B840)
#define RPG_MVECTOR3_LERP_OFFSET UNITYSDK_OFFSET(0x1922B7F0)
#define RPG_MVECTOR3_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1922BE90)
#define RPG_MVECTOR3_MAX_OFFSET UNITYSDK_OFFSET(0x1922C6A0)
#define RPG_MVECTOR3_MIN_OFFSET UNITYSDK_OFFSET(0x1922C670)
#define RPG_MVECTOR3_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x1922B880)
#define RPG_MVECTOR3_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x22CA6F0)
#define RPG_MVECTOR3_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1922BE00)
#define RPG_MVECTOR3_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1922BA00)
#define RPG_MVECTOR3_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1922B9C0)
#define RPG_MVECTOR3_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1922C840)
#define RPG_MVECTOR3_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1922C890)
#define RPG_MVECTOR3_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1922BDE0)
#define RPG_MVECTOR3_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1922B9E0)
#define RPG_MVECTOR3_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1922B960)
#define RPG_MVECTOR3_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1922C810)
#define RPG_MVECTOR3_PROJECTONPLANE_OFFSET UNITYSDK_OFFSET(0x1922C070)
#define RPG_MVECTOR3_PROJECT_OFFSET UNITYSDK_OFFSET(0x1922BFE0)
#define RPG_MVECTOR3_REFLECT_OFFSET UNITYSDK_OFFSET(0x1922BD40)
#define RPG_MVECTOR3_SCALE_1_OFFSET UNITYSDK_OFFSET(0x22CA5B0)
#define RPG_MVECTOR3_SCALE_OFFSET UNITYSDK_OFFSET(0x1922BB70)
#define RPG_MVECTOR3_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x22CA500)
#define RPG_MVECTOR3_SET_OFFSET UNITYSDK_OFFSET(0xD4E60)
#define RPG_MVECTOR3_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x1922C280)
#define RPG_MVECTOR3_SQRDISTANCE_OFFSET UNITYSDK_OFFSET(0x1922C4D0)
#define RPG_MVECTOR3_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1922C650)
#define RPG_MVECTOR3_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x22CA910)
#define RPG_MVECTOR3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22CA860)
#define RPG_MVECTOR3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1922CBD0)
#define RPG_MVECTOR3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x22CA590)
#define RPG_MVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0xD4E60)

namespace RPG
{
	inline static constexpr unsigned int MVector3_TypeDefinitionIndex = 8902;

	struct alignas(4) MVector3
	{
		static ::RPG::MVector3* StaticGet_zeroVector()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(MVector3_TypeDefinitionIndex)->GetStaticField(0x550);
		}
		static ::RPG::MVector3* StaticGet_downVector()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(MVector3_TypeDefinitionIndex)->GetStaticField(0x55C);
		}
		static ::RPG::MVector3* StaticGet_oneVector()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(MVector3_TypeDefinitionIndex)->GetStaticField(0x568);
		}
		static ::RPG::MVector3* StaticGet_upVector()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(MVector3_TypeDefinitionIndex)->GetStaticField(0x574);
		}
		static ::RPG::MVector3* StaticGet_negativeInfinityVector()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(MVector3_TypeDefinitionIndex)->GetStaticField(0x580);
		}
		static ::RPG::MVector3* StaticGet_positiveInfinityVector()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(MVector3_TypeDefinitionIndex)->GetStaticField(0x58C);
		}
		static ::RPG::MVector3* StaticGet_forwardVector()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(MVector3_TypeDefinitionIndex)->GetStaticField(0x598);
		}
		static ::RPG::MVector3* StaticGet_leftVector()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(MVector3_TypeDefinitionIndex)->GetStaticField(0x5A4);
		}
		static ::RPG::MVector3* StaticGet_backVector()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(MVector3_TypeDefinitionIndex)->GetStaticField(0x5B0);
		}
		static ::RPG::MVector3* StaticGet_rightVector()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(MVector3_TypeDefinitionIndex)->GetStaticField(0x5BC);
		}
		// static const ::System::Single kEpsilon; // 0x0
		// static const ::System::Single kSqrEpsilon; // 0x0
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18

		::System::Void _ctor(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR3__CTOR_OFFSET))(this, x, y, z);
		}

		::System::Void _ctor_1(::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR3__CTOR_1_OFFSET))(this, x, y);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_MVECTOR3__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNaN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_ISNAN_OFFSET))(this);
		}

		::System::Boolean get_IsInfinity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_ISINFINITY_OFFSET))(this);
		}

		::System::Boolean get_IsPositiveInfinity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_ISPOSITIVEINFINITY_OFFSET))(this);
		}

		::System::Boolean get_IsNegativeInfinity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_ISNEGATIVEINFINITY_OFFSET))(this);
		}

		static ::RPG::MVector3 Lerp(::RPG::MVector3 a, ::RPG::MVector3 b, ::System::Single t)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_LERP_OFFSET))(a, b, t);
		}

		static ::RPG::MVector3 LerpUnclamped(::RPG::MVector3 a, ::RPG::MVector3 b, ::System::Single t)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_LERPUNCLAMPED_OFFSET))(a, b, t);
		}

		static ::RPG::MVector3 MoveTowards(::RPG::MVector3 current, ::RPG::MVector3 target, ::System::Single maxDistanceDelta)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_MOVETOWARDS_OFFSET))(current, target, maxDistanceDelta);
		}

		::System::Single get_Item(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Void Set(::System::Single newX, ::System::Single newY, ::System::Single newZ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_SET_OFFSET))(this, newX, newY, newZ);
		}

		static ::RPG::MVector3 Scale(::RPG::MVector3 a, ::RPG::MVector3 b)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_SCALE_OFFSET))(a, b);
		}

		::System::Void Scale_1(::RPG::MVector3 scale)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_SCALE_1_OFFSET))(this, scale);
		}

		static ::RPG::MVector3 Cross(::RPG::MVector3 lhs, ::RPG::MVector3 rhs)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_CROSS_OFFSET))(lhs, rhs);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_EQUALS_OFFSET))(this, other);
		}

		static ::RPG::MVector3 Reflect(::RPG::MVector3 inDirection, ::RPG::MVector3 inNormal)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_REFLECT_OFFSET))(inDirection, inNormal);
		}

		static ::RPG::MVector3 Normalize(::RPG::MVector3 value)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_NORMALIZE_OFFSET))(value);
		}

		::System::Void Normalize_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_NORMALIZE_1_OFFSET))(this);
		}

		::RPG::MVector3 get_normalized()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_NORMALIZED_OFFSET))(this);
		}

		static ::System::Single Dot(::RPG::MVector3 lhs, ::RPG::MVector3 rhs)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_DOT_OFFSET))(lhs, rhs);
		}

		static ::RPG::MVector3 Project(::RPG::MVector3 vector, ::RPG::MVector3 onNormal)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_PROJECT_OFFSET))(vector, onNormal);
		}

		static ::RPG::MVector3 ProjectOnPlane(::RPG::MVector3 vector, ::RPG::MVector3 planeNormal)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_PROJECTONPLANE_OFFSET))(vector, planeNormal);
		}

		static ::System::Single Angle(::RPG::MVector3 from, ::RPG::MVector3 to)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_ANGLE_OFFSET))(from, to);
		}

		static ::System::Single SignedAngle(::RPG::MVector3 from, ::RPG::MVector3 to, ::RPG::MVector3 axis)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_SIGNEDANGLE_OFFSET))(from, to, axis);
		}

		static ::System::Single Distance(::RPG::MVector3 a, ::RPG::MVector3 b)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_DISTANCE_OFFSET))(a, b);
		}

		static ::System::Single SqrDistance(::RPG::MVector3 a, ::RPG::MVector3 b)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_SQRDISTANCE_OFFSET))(a, b);
		}

		static ::System::Boolean Approximately(::RPG::MVector3 a, ::RPG::MVector3 b)
		{
			return ((::System::Boolean(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_APPROXIMATELY_OFFSET))(a, b);
		}

		static ::RPG::MVector3 ClampMagnitude(::RPG::MVector3 vector, ::System::Single maxLength)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_CLAMPMAGNITUDE_OFFSET))(vector, maxLength);
		}

		static ::System::Single Magnitude(::RPG::MVector3 vector)
		{
			return ((::System::Single(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_MAGNITUDE_OFFSET))(vector);
		}

		::System::Single get_magnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_MAGNITUDE_OFFSET))(this);
		}

		static ::System::Single SqrMagnitude(::RPG::MVector3 vector)
		{
			return ((::System::Single(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_SQRMAGNITUDE_OFFSET))(vector);
		}

		::System::Single get_sqrMagnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_SQRMAGNITUDE_OFFSET))(this);
		}

		static ::RPG::MVector3 Min(::RPG::MVector3 lhs, ::RPG::MVector3 rhs)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_MIN_OFFSET))(lhs, rhs);
		}

		static ::RPG::MVector3 Max(::RPG::MVector3 lhs, ::RPG::MVector3 rhs)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_MAX_OFFSET))(lhs, rhs);
		}

		static ::RPG::MVector3 get_zero()
		{
			return ((::RPG::MVector3(*)())((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_ZERO_OFFSET))();
		}

		static ::RPG::MVector3 get_one()
		{
			return ((::RPG::MVector3(*)())((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_ONE_OFFSET))();
		}

		static ::RPG::MVector3 get_forward()
		{
			return ((::RPG::MVector3(*)())((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_FORWARD_OFFSET))();
		}

		static ::RPG::MVector3 get_back()
		{
			return ((::RPG::MVector3(*)())((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_BACK_OFFSET))();
		}

		static ::RPG::MVector3 get_up()
		{
			return ((::RPG::MVector3(*)())((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_UP_OFFSET))();
		}

		static ::RPG::MVector3 get_down()
		{
			return ((::RPG::MVector3(*)())((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_DOWN_OFFSET))();
		}

		static ::RPG::MVector3 get_left()
		{
			return ((::RPG::MVector3(*)())((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_LEFT_OFFSET))();
		}

		static ::RPG::MVector3 get_right()
		{
			return ((::RPG::MVector3(*)())((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_RIGHT_OFFSET))();
		}

		static ::RPG::MVector3 get_positiveInfinity()
		{
			return ((::RPG::MVector3(*)())((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_POSITIVEINFINITY_OFFSET))();
		}

		static ::RPG::MVector3 get_negativeInfinity()
		{
			return ((::RPG::MVector3(*)())((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_NEGATIVEINFINITY_OFFSET))();
		}

		static ::RPG::MVector3 op_Addition(::RPG::MVector3 a, ::RPG::MVector3 b)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_OP_ADDITION_OFFSET))(a, b);
		}

		static ::RPG::MVector3 op_Subtraction(::RPG::MVector3 a, ::RPG::MVector3 b)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::RPG::MVector3 op_UnaryNegation(::RPG::MVector3 a)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_OP_UNARYNEGATION_OFFSET))(a);
		}

		static ::RPG::MVector3 op_Multiply(::RPG::MVector3 a, ::System::Single d)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_OP_MULTIPLY_OFFSET))(a, d);
		}

		static ::RPG::MVector3 op_Multiply_1(::System::Single d, ::RPG::MVector3 a)
		{
			return ((::RPG::MVector3(*)(::System::Single, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_OP_MULTIPLY_1_OFFSET))(d, a);
		}

		static ::RPG::MVector3 op_Division(::RPG::MVector3 a, ::System::Single d)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_OP_DIVISION_OFFSET))(a, d);
		}

		static ::System::Boolean op_Equality(::RPG::MVector3 lhs, ::RPG::MVector3 rhs)
		{
			return ((::System::Boolean(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::RPG::MVector3 lhs, ::RPG::MVector3 rhs)
		{
			return ((::System::Boolean(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_TOSTRING_1_OFFSET))(this, format);
		}

		static ::RPG::MVector3 get_fwd()
		{
			return ((::RPG::MVector3(*)())((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_FWD_OFFSET))();
		}

		static ::System::Single AngleBetween(::RPG::MVector3 from, ::RPG::MVector3 to)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_ANGLEBETWEEN_OFFSET))(from, to);
		}
	};
}
