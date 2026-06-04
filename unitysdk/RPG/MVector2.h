#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_MVECTOR2_ANGLE_OFFSET UNITYSDK_OFFSET(0x19F74040)
#define RPG_MVECTOR2_CLAMPMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x19F743C0)
#define RPG_MVECTOR2_DISTANCE_OFFSET UNITYSDK_OFFSET(0x19F74380)
#define RPG_MVECTOR2_DOT_OFFSET UNITYSDK_OFFSET(0x19F74010)
#define RPG_MVECTOR2_EQUALS_OFFSET UNITYSDK_OFFSET(0x3863A10)
#define RPG_MVECTOR2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x38639D0)
#define RPG_MVECTOR2_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x19F74870)
#define RPG_MVECTOR2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3863650)
#define RPG_MVECTOR2_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x19F74880)
#define RPG_MVECTOR2_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3863A90)
#define RPG_MVECTOR2_GET_NEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x19F748B0)
#define RPG_MVECTOR2_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x38637F0)
#define RPG_MVECTOR2_GET_ONE_OFFSET UNITYSDK_OFFSET(0x19F74850)
#define RPG_MVECTOR2_GET_POSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x19F748A0)
#define RPG_MVECTOR2_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x19F74890)
#define RPG_MVECTOR2_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3863AC0)
#define RPG_MVECTOR2_GET_UP_OFFSET UNITYSDK_OFFSET(0x19F74860)
#define RPG_MVECTOR2_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x19F74840)
#define RPG_MVECTOR2_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x19F73C30)
#define RPG_MVECTOR2_LERP_OFFSET UNITYSDK_OFFSET(0x19F73BC0)
#define RPG_MVECTOR2_MAX_OFFSET UNITYSDK_OFFSET(0x19F744F0)
#define RPG_MVECTOR2_MIN_OFFSET UNITYSDK_OFFSET(0x19F744C0)
#define RPG_MVECTOR2_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x19F73C70)
#define RPG_MVECTOR2_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x3863780)
#define RPG_MVECTOR2_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x19F43550)
#define RPG_MVECTOR2_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x19F49180)
#define RPG_MVECTOR2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x19F74780)
#define RPG_MVECTOR2_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x19F74810)
#define RPG_MVECTOR2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x19F74800)
#define RPG_MVECTOR2_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x19F747C0)
#define RPG_MVECTOR2_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x19F43520)
#define RPG_MVECTOR2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x19F457A0)
#define RPG_MVECTOR2_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x19F428E0)
#define RPG_MVECTOR2_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x19F5D370)
#define RPG_MVECTOR2_REFLECT_OFFSET UNITYSDK_OFFSET(0x19F73FB0)
#define RPG_MVECTOR2_SCALE_1_OFFSET UNITYSDK_OFFSET(0x3863760)
#define RPG_MVECTOR2_SCALE_OFFSET UNITYSDK_OFFSET(0x19F73D50)
#define RPG_MVECTOR2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x38636D0)
#define RPG_MVECTOR2_SET_OFFSET UNITYSDK_OFFSET(0x2CFA0)
#define RPG_MVECTOR2_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x19F741C0)
#define RPG_MVECTOR2_SMOOTHDAMP_OFFSET UNITYSDK_OFFSET(0x19F74520)
#define RPG_MVECTOR2_SQRMAGNITUDE_1_OFFSET UNITYSDK_OFFSET(0x3863AC0)
#define RPG_MVECTOR2_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x19F74490)
#define RPG_MVECTOR2_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3863920)
#define RPG_MVECTOR2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3863870)
#define RPG_MVECTOR2__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F748C0)
#define RPG_MVECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x2CFA0)

namespace RPG
{
	inline static constexpr unsigned int MVector2_TypeDefinitionIndex = 6765;

	struct alignas(4) MVector2
	{
		static ::RPG::MVector2* StaticGet_zeroVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x430);
		}
		static ::RPG::MVector2* StaticGet_oneVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x438);
		}
		static ::RPG::MVector2* StaticGet_downVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x440);
		}
		static ::RPG::MVector2* StaticGet_rightVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x448);
		}
		static ::RPG::MVector2* StaticGet_leftVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x450);
		}
		static ::RPG::MVector2* StaticGet_positiveInfinityVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x458);
		}
		static ::RPG::MVector2* StaticGet_upVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x460);
		}
		static ::RPG::MVector2* StaticGet_negativeInfinityVector()
		{
			return (::RPG::MVector2*)Il2CppClass::FromTypeDefinitionIndex(MVector2_TypeDefinitionIndex)->GetStaticField(0x468);
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
