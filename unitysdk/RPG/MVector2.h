#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_MVECTOR2_ANGLE_OFFSET UNITYSDK_OFFSET(0x163C0640)
#define RPG_MVECTOR2_CLAMPMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x163C09C0)
#define RPG_MVECTOR2_DISTANCE_OFFSET UNITYSDK_OFFSET(0x163C0980)
#define RPG_MVECTOR2_DOT_OFFSET UNITYSDK_OFFSET(0x163C0610)
#define RPG_MVECTOR2_EQUALS_OFFSET UNITYSDK_OFFSET(0x3A55000)
#define RPG_MVECTOR2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3A54FC0)
#define RPG_MVECTOR2_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1EF462B0)
#define RPG_MVECTOR2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3A54C40)
#define RPG_MVECTOR2_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1EF462C0)
#define RPG_MVECTOR2_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3A55080)
#define RPG_MVECTOR2_GET_NEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x1EF462F0)
#define RPG_MVECTOR2_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x3A54DE0)
#define RPG_MVECTOR2_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1EF46290)
#define RPG_MVECTOR2_GET_POSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x1EF462E0)
#define RPG_MVECTOR2_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1EF462D0)
#define RPG_MVECTOR2_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3A550B0)
#define RPG_MVECTOR2_GET_UP_OFFSET UNITYSDK_OFFSET(0x1EF462A0)
#define RPG_MVECTOR2_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1EF46280)
#define RPG_MVECTOR2_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x163C0230)
#define RPG_MVECTOR2_LERP_OFFSET UNITYSDK_OFFSET(0x163C01C0)
#define RPG_MVECTOR2_MAX_OFFSET UNITYSDK_OFFSET(0x163C0AF0)
#define RPG_MVECTOR2_MIN_OFFSET UNITYSDK_OFFSET(0x163C0AC0)
#define RPG_MVECTOR2_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x163C0270)
#define RPG_MVECTOR2_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x3A54D70)
#define RPG_MVECTOR2_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1638EE80)
#define RPG_MVECTOR2_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x16394E70)
#define RPG_MVECTOR2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EF461C0)
#define RPG_MVECTOR2_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1EF46250)
#define RPG_MVECTOR2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EF46240)
#define RPG_MVECTOR2_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EF46200)
#define RPG_MVECTOR2_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1638EE50)
#define RPG_MVECTOR2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x16391030)
#define RPG_MVECTOR2_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1638E210)
#define RPG_MVECTOR2_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x163A9600)
#define RPG_MVECTOR2_REFLECT_OFFSET UNITYSDK_OFFSET(0x163C05B0)
#define RPG_MVECTOR2_SCALE_1_OFFSET UNITYSDK_OFFSET(0x3A54D50)
#define RPG_MVECTOR2_SCALE_OFFSET UNITYSDK_OFFSET(0x163C0350)
#define RPG_MVECTOR2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3A54CC0)
#define RPG_MVECTOR2_SET_OFFSET UNITYSDK_OFFSET(0x6B9800)
#define RPG_MVECTOR2_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x163C07C0)
#define RPG_MVECTOR2_SMOOTHDAMP_OFFSET UNITYSDK_OFFSET(0x163C0B20)
#define RPG_MVECTOR2_SQRMAGNITUDE_1_OFFSET UNITYSDK_OFFSET(0x3A550B0)
#define RPG_MVECTOR2_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x163C0A90)
#define RPG_MVECTOR2_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3A54F10)
#define RPG_MVECTOR2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3A54E60)
#define RPG_MVECTOR2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF46300)
#define RPG_MVECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x6B9800)

namespace RPG
{
	inline static constexpr unsigned int MVector2_TypeDefinitionIndex = 6382;

	struct alignas(4) MVector2
	{
		static ::RPG::MVector2* StaticGet_downVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x2E0);
		}
		static ::RPG::MVector2* StaticGet_negativeInfinityVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x2E8);
		}
		static ::RPG::MVector2* StaticGet_rightVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x2F0);
		}
		static ::RPG::MVector2* StaticGet_leftVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x2F8);
		}
		static ::RPG::MVector2* StaticGet_oneVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x300);
		}
		static ::RPG::MVector2* StaticGet_positiveInfinityVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x308);
		}
		static ::RPG::MVector2* StaticGet_zeroVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x310);
		}
		static ::RPG::MVector2* StaticGet_upVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x318);
		}
		// static const ::System::Single kEpsilon; // 0x0
		::System::Single x; // 0x10
		::System::Single y; // 0x14

		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR2__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_MVECTOR2__CCTOR_OFFSET))();
		}

		::System::Single get_Item(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void Set(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_SET_OFFSET))(this, a1, a2);
		}

		static ::RPG::MVector2 Lerp(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::System::Single a3)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_LERP_OFFSET))(a1, a2, a3);
		}

		static ::RPG::MVector2 LerpUnclamped(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::System::Single a3)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_LERPUNCLAMPED_OFFSET))(a1, a2, a3);
		}

		static ::RPG::MVector2 MoveTowards(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::System::Single a3)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_MOVETOWARDS_OFFSET))(a1, a2, a3);
		}

		static ::RPG::MVector2 Scale(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_SCALE_OFFSET))(a1, a2);
		}

		::System::Void Scale_1(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_SCALE_1_OFFSET))(this, a1);
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

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_EQUALS_OFFSET))(this, a1);
		}

		static ::RPG::MVector2 Reflect(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_REFLECT_OFFSET))(a1, a2);
		}

		static ::System::Single Dot(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_DOT_OFFSET))(a1, a2);
		}

		::System::Single get_magnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_GET_MAGNITUDE_OFFSET))(this);
		}

		::System::Single get_sqrMagnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_GET_SQRMAGNITUDE_OFFSET))(this);
		}

		static ::System::Single Angle(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_ANGLE_OFFSET))(a1, a2);
		}

		static ::System::Single SignedAngle(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_SIGNEDANGLE_OFFSET))(a1, a2);
		}

		static ::System::Single Distance(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_DISTANCE_OFFSET))(a1, a2);
		}

		static ::RPG::MVector2 ClampMagnitude(::RPG::MVector2 a1, ::System::Single a2)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_CLAMPMAGNITUDE_OFFSET))(a1, a2);
		}

		static ::System::Single SqrMagnitude(::RPG::MVector2 a1)
		{
			return ((::System::Single(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_SQRMAGNITUDE_OFFSET))(a1);
		}

		::System::Single SqrMagnitude_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_SQRMAGNITUDE_1_OFFSET))(this);
		}

		static ::RPG::MVector2 Min(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_MIN_OFFSET))(a1, a2);
		}

		static ::RPG::MVector2 Max(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_MAX_OFFSET))(a1, a2);
		}

		static ::RPG::MVector2 SmoothDamp(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::RPG::MVector2& a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_SMOOTHDAMP_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::MVector2 op_Addition(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_OP_ADDITION_OFFSET))(a1, a2);
		}

		static ::RPG::MVector2 op_Subtraction(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_OP_SUBTRACTION_OFFSET))(a1, a2);
		}

		static ::RPG::MVector2 op_UnaryNegation(::RPG::MVector2 a1)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_OP_UNARYNEGATION_OFFSET))(a1);
		}

		static ::RPG::MVector2 op_Multiply(::RPG::MVector2 a1, ::System::Single a2)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_OP_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::RPG::MVector2 op_Multiply_1(::System::Single a1, ::RPG::MVector2 a2)
		{
			return ((::RPG::MVector2(*)(::System::Single, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_OP_MULTIPLY_1_OFFSET))(a1, a2);
		}

		static ::RPG::MVector2 op_Division(::RPG::MVector2 a1, ::System::Single a2)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_OP_DIVISION_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Boolean(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Boolean(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		/*
		static ::RPG::MVector2 op_Implicit(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::MVector3 op_Implicit_1(::RPG::MVector2 a1)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MVECTOR2_OP_IMPLICIT_1_OFFSET))(a1);
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
