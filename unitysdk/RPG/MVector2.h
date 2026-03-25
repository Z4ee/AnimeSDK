#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_MVECTOR2_ANGLE_OFFSET UNITYSDK_OFFSET(0x17A65E00)
#define RPG_MVECTOR2_CLAMPMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x17A66170)
#define RPG_MVECTOR2_DISTANCE_OFFSET UNITYSDK_OFFSET(0x17A66130)
#define RPG_MVECTOR2_DOT_OFFSET UNITYSDK_OFFSET(0x17A65DD0)
#define RPG_MVECTOR2_EQUALS_OFFSET UNITYSDK_OFFSET(0x20F7AA0)
#define RPG_MVECTOR2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20F7A60)
#define RPG_MVECTOR2_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x17A66610)
#define RPG_MVECTOR2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x20F76E0)
#define RPG_MVECTOR2_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x17A66620)
#define RPG_MVECTOR2_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x20F7B20)
#define RPG_MVECTOR2_GET_NEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x17A66650)
#define RPG_MVECTOR2_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x20F7880)
#define RPG_MVECTOR2_GET_ONE_OFFSET UNITYSDK_OFFSET(0x17A665F0)
#define RPG_MVECTOR2_GET_POSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x17A66640)
#define RPG_MVECTOR2_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x17A66630)
#define RPG_MVECTOR2_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x20F7B50)
#define RPG_MVECTOR2_GET_UP_OFFSET UNITYSDK_OFFSET(0x17A66600)
#define RPG_MVECTOR2_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x17A665E0)
#define RPG_MVECTOR2_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x17A65950)
#define RPG_MVECTOR2_LERP_OFFSET UNITYSDK_OFFSET(0x17A658F0)
#define RPG_MVECTOR2_MAX_OFFSET UNITYSDK_OFFSET(0x17A662A0)
#define RPG_MVECTOR2_MIN_OFFSET UNITYSDK_OFFSET(0x17A66270)
#define RPG_MVECTOR2_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x17A65990)
#define RPG_MVECTOR2_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x20F7810)
#define RPG_MVECTOR2_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x17A31F30)
#define RPG_MVECTOR2_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x17A65A70)
#define RPG_MVECTOR2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x17A66550)
#define RPG_MVECTOR2_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x17A460D0)
#define RPG_MVECTOR2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x17A665D0)
#define RPG_MVECTOR2_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x17A66590)
#define RPG_MVECTOR2_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x17A31F00)
#define RPG_MVECTOR2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x17A32B70)
#define RPG_MVECTOR2_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x17A31EB0)
#define RPG_MVECTOR2_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x17A66530)
#define RPG_MVECTOR2_REFLECT_OFFSET UNITYSDK_OFFSET(0x17A65D70)
#define RPG_MVECTOR2_SCALE_1_OFFSET UNITYSDK_OFFSET(0x20F77F0)
#define RPG_MVECTOR2_SCALE_OFFSET UNITYSDK_OFFSET(0x17A65AA0)
#define RPG_MVECTOR2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x20F7760)
#define RPG_MVECTOR2_SET_OFFSET UNITYSDK_OFFSET(0x29890)
#define RPG_MVECTOR2_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x17A65F80)
#define RPG_MVECTOR2_SMOOTHDAMP_OFFSET UNITYSDK_OFFSET(0x17A662D0)
#define RPG_MVECTOR2_SQRMAGNITUDE_1_OFFSET UNITYSDK_OFFSET(0x20F7B50)
#define RPG_MVECTOR2_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x17A66240)
#define RPG_MVECTOR2_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x20F79B0)
#define RPG_MVECTOR2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20F7900)
#define RPG_MVECTOR2__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A66660)
#define RPG_MVECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x29890)

namespace RPG
{
	inline static constexpr unsigned int MVector2_TypeDefinitionIndex = 8706;

	struct alignas(4) MVector2
	{
		static ::RPG::MVector2* StaticGet_zeroVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x46F0);
		}
		static ::RPG::MVector2* StaticGet_rightVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x46F8);
		}
		static ::RPG::MVector2* StaticGet_oneVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x4700);
		}
		static ::RPG::MVector2* StaticGet_downVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x4708);
		}
		static ::RPG::MVector2* StaticGet_upVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x4710);
		}
		static ::RPG::MVector2* StaticGet_negativeInfinityVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x4718);
		}
		static ::RPG::MVector2* StaticGet_leftVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x4720);
		}
		static ::RPG::MVector2* StaticGet_positiveInfinityVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x4728);
		}
		// static const ::System::Single kEpsilon; // 0x0
		::System::Single x; // 0x10
		::System::Single y; // 0x14

		::System::Void _ctor(::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR2__CTOR_OFFSET))(this, x, y);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_MVECTOR2__CCTOR_OFFSET))();
		}

		::System::Single get_Item(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Void Set(::System::Single newX, ::System::Single newY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_SET_OFFSET))(this, newX, newY);
		}

		static ::RPG::MVector2 Lerp(::RPG::MVector2 a, ::RPG::MVector2 b, ::System::Single t)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_LERP_OFFSET))(a, b, t);
		}

		static ::RPG::MVector2 LerpUnclamped(::RPG::MVector2 a, ::RPG::MVector2 b, ::System::Single t)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_LERPUNCLAMPED_OFFSET))(a, b, t);
		}

		static ::RPG::MVector2 MoveTowards(::RPG::MVector2 current, ::RPG::MVector2 target, ::System::Single maxDistanceDelta)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_MOVETOWARDS_OFFSET))(current, target, maxDistanceDelta);
		}

		static ::RPG::MVector2 Scale(::RPG::MVector2 a, ::RPG::MVector2 b)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_SCALE_OFFSET))(a, b);
		}

		::System::Void Scale_1(::RPG::MVector2 scale)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_SCALE_1_OFFSET))(this, scale);
		}

		::System::Void Normalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_NORMALIZE_OFFSET))(this);
		}

		::RPG::MVector2 get_normalized()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_GET_NORMALIZED_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_TOSTRING_1_OFFSET))(this, format);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_EQUALS_OFFSET))(this, other);
		}

		static ::RPG::MVector2 Reflect(::RPG::MVector2 inDirection, ::RPG::MVector2 inNormal)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_REFLECT_OFFSET))(inDirection, inNormal);
		}

		static ::System::Single Dot(::RPG::MVector2 lhs, ::RPG::MVector2 rhs)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_DOT_OFFSET))(lhs, rhs);
		}

		::System::Single get_magnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_GET_MAGNITUDE_OFFSET))(this);
		}

		::System::Single get_sqrMagnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_GET_SQRMAGNITUDE_OFFSET))(this);
		}

		static ::System::Single Angle(::RPG::MVector2 from, ::RPG::MVector2 to)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_ANGLE_OFFSET))(from, to);
		}

		static ::System::Single SignedAngle(::RPG::MVector2 from, ::RPG::MVector2 to)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_SIGNEDANGLE_OFFSET))(from, to);
		}

		static ::System::Single Distance(::RPG::MVector2 a, ::RPG::MVector2 b)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_DISTANCE_OFFSET))(a, b);
		}

		static ::RPG::MVector2 ClampMagnitude(::RPG::MVector2 vector, ::System::Single maxLength)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_CLAMPMAGNITUDE_OFFSET))(vector, maxLength);
		}

		static ::System::Single SqrMagnitude(::RPG::MVector2 a)
		{
			return ((::System::Single(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_SQRMAGNITUDE_OFFSET))(a);
		}

		::System::Single SqrMagnitude_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_SQRMAGNITUDE_1_OFFSET))(this);
		}

		static ::RPG::MVector2 Min(::RPG::MVector2 lhs, ::RPG::MVector2 rhs)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_MIN_OFFSET))(lhs, rhs);
		}

		static ::RPG::MVector2 Max(::RPG::MVector2 lhs, ::RPG::MVector2 rhs)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_MAX_OFFSET))(lhs, rhs);
		}

		static ::RPG::MVector2 SmoothDamp(::RPG::MVector2 current, ::RPG::MVector2 target, ::RPG::MVector2& currentVelocity, ::System::Single smoothTime, ::System::Single maxSpeed, ::System::Single deltaTime)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_SMOOTHDAMP_OFFSET))(current, target, currentVelocity, smoothTime, maxSpeed, deltaTime);
		}

		static ::RPG::MVector2 op_Addition(::RPG::MVector2 a, ::RPG::MVector2 b)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_OP_ADDITION_OFFSET))(a, b);
		}

		static ::RPG::MVector2 op_Subtraction(::RPG::MVector2 a, ::RPG::MVector2 b)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::RPG::MVector2 op_UnaryNegation(::RPG::MVector2 a)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_OP_UNARYNEGATION_OFFSET))(a);
		}

		static ::RPG::MVector2 op_Multiply(::RPG::MVector2 a, ::System::Single d)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_OP_MULTIPLY_OFFSET))(a, d);
		}

		static ::RPG::MVector2 op_Multiply_1(::System::Single d, ::RPG::MVector2 a)
		{
			return ((::RPG::MVector2(*)(::System::Single, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_OP_MULTIPLY_1_OFFSET))(d, a);
		}

		static ::RPG::MVector2 op_Division(::RPG::MVector2 a, ::System::Single d)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_OP_DIVISION_OFFSET))(a, d);
		}

		static ::System::Boolean op_Equality(::RPG::MVector2 lhs, ::RPG::MVector2 rhs)
		{
			return ((::System::Boolean(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::RPG::MVector2 lhs, ::RPG::MVector2 rhs)
		{
			return ((::System::Boolean(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		/*
		static ::RPG::MVector2 op_Implicit(::RPG::MVector3 v)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_OP_IMPLICIT_OFFSET))(v);
		}
		*/

		/*
		static ::RPG::MVector3 op_Implicit_1(::RPG::MVector2 v)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_OP_IMPLICIT_1_OFFSET))(v);
		}
		*/

		static ::RPG::MVector2 get_zero()
		{
			return ((::RPG::MVector2(*)())((::PBYTE)hIl2Cpp + RPG_MVECTOR2_GET_ZERO_OFFSET))();
		}

		static ::RPG::MVector2 get_one()
		{
			return ((::RPG::MVector2(*)())((::PBYTE)hIl2Cpp + RPG_MVECTOR2_GET_ONE_OFFSET))();
		}

		static ::RPG::MVector2 get_up()
		{
			return ((::RPG::MVector2(*)())((::PBYTE)hIl2Cpp + RPG_MVECTOR2_GET_UP_OFFSET))();
		}

		static ::RPG::MVector2 get_down()
		{
			return ((::RPG::MVector2(*)())((::PBYTE)hIl2Cpp + RPG_MVECTOR2_GET_DOWN_OFFSET))();
		}

		static ::RPG::MVector2 get_left()
		{
			return ((::RPG::MVector2(*)())((::PBYTE)hIl2Cpp + RPG_MVECTOR2_GET_LEFT_OFFSET))();
		}

		static ::RPG::MVector2 get_right()
		{
			return ((::RPG::MVector2(*)())((::PBYTE)hIl2Cpp + RPG_MVECTOR2_GET_RIGHT_OFFSET))();
		}

		static ::RPG::MVector2 get_positiveInfinity()
		{
			return ((::RPG::MVector2(*)())((::PBYTE)hIl2Cpp + RPG_MVECTOR2_GET_POSITIVEINFINITY_OFFSET))();
		}

		static ::RPG::MVector2 get_negativeInfinity()
		{
			return ((::RPG::MVector2(*)())((::PBYTE)hIl2Cpp + RPG_MVECTOR2_GET_NEGATIVEINFINITY_OFFSET))();
		}
	};
}
