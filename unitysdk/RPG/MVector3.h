#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_MVECTOR3_ANGLEBETWEEN_OFFSET UNITYSDK_OFFSET(0x1DD646C0)
#define RPG_MVECTOR3_ANGLE_OFFSET UNITYSDK_OFFSET(0x1DD63D60)
#define RPG_MVECTOR3_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x1DD64150)
#define RPG_MVECTOR3_CLAMPMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1DD641A0)
#define RPG_MVECTOR3_CROSS_OFFSET UNITYSDK_OFFSET(0x1DD63810)
#define RPG_MVECTOR3_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1DD640C0)
#define RPG_MVECTOR3_DOT_OFFSET UNITYSDK_OFFSET(0x1DD639F0)
#define RPG_MVECTOR3_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C4FA20)
#define RPG_MVECTOR3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C4F9C0)
#define RPG_MVECTOR3_GET_BACK_OFFSET UNITYSDK_OFFSET(0x1DD64370)
#define RPG_MVECTOR3_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1DD643B0)
#define RPG_MVECTOR3_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1DD64350)
#define RPG_MVECTOR3_GET_FWD_OFFSET UNITYSDK_OFFSET(0x1DD646A0)
#define RPG_MVECTOR3_GET_ISINFINITY_OFFSET UNITYSDK_OFFSET(0x3C4F7F0)
#define RPG_MVECTOR3_GET_ISNAN_OFFSET UNITYSDK_OFFSET(0x3C4F7B0)
#define RPG_MVECTOR3_GET_ISNEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x3C4F850)
#define RPG_MVECTOR3_GET_ISPOSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x3C4F830)
#define RPG_MVECTOR3_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3C4F870)
#define RPG_MVECTOR3_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1DD643D0)
#define RPG_MVECTOR3_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3C4FC00)
#define RPG_MVECTOR3_GET_NEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x1DD64430)
#define RPG_MVECTOR3_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x3C4FB70)
#define RPG_MVECTOR3_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1DD64330)
#define RPG_MVECTOR3_GET_POSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x1DD64410)
#define RPG_MVECTOR3_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1DD643F0)
#define RPG_MVECTOR3_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3C4FC30)
#define RPG_MVECTOR3_GET_UP_OFFSET UNITYSDK_OFFSET(0x1DD64390)
#define RPG_MVECTOR3_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1DD64310)
#define RPG_MVECTOR3_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1DD63480)
#define RPG_MVECTOR3_LERP_OFFSET UNITYSDK_OFFSET(0x1DD63430)
#define RPG_MVECTOR3_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1DD63AD0)
#define RPG_MVECTOR3_MAX_OFFSET UNITYSDK_OFFSET(0x1DD642E0)
#define RPG_MVECTOR3_MIN_OFFSET UNITYSDK_OFFSET(0x1DD642B0)
#define RPG_MVECTOR3_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x1DD634C0)
#define RPG_MVECTOR3_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x3C4FAE0)
#define RPG_MVECTOR3_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1DD63A40)
#define RPG_MVECTOR3_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1DD63640)
#define RPG_MVECTOR3_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1DD63600)
#define RPG_MVECTOR3_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1DD64480)
#define RPG_MVECTOR3_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1DD644D0)
#define RPG_MVECTOR3_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1DD63A20)
#define RPG_MVECTOR3_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1DD63620)
#define RPG_MVECTOR3_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1DD635A0)
#define RPG_MVECTOR3_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1DD64450)
#define RPG_MVECTOR3_PROJECTONPLANE_OFFSET UNITYSDK_OFFSET(0x1DD63CB0)
#define RPG_MVECTOR3_PROJECT_OFFSET UNITYSDK_OFFSET(0x1DD63C20)
#define RPG_MVECTOR3_REFLECT_OFFSET UNITYSDK_OFFSET(0x1DD63980)
#define RPG_MVECTOR3_SCALE_1_OFFSET UNITYSDK_OFFSET(0x3C4F9A0)
#define RPG_MVECTOR3_SCALE_OFFSET UNITYSDK_OFFSET(0x1DD637B0)
#define RPG_MVECTOR3_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3C4F8F0)
#define RPG_MVECTOR3_SET_OFFSET UNITYSDK_OFFSET(0x14CC0)
#define RPG_MVECTOR3_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x1DD63EC0)
#define RPG_MVECTOR3_SQRDISTANCE_OFFSET UNITYSDK_OFFSET(0x1DD64110)
#define RPG_MVECTOR3_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1DD64290)
#define RPG_MVECTOR3_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3C4FD00)
#define RPG_MVECTOR3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C4FC50)
#define RPG_MVECTOR3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD64810)
#define RPG_MVECTOR3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C4F980)
#define RPG_MVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x14CC0)

namespace RPG
{
	inline static constexpr unsigned int MVector3_TypeDefinitionIndex = 6392;

	struct alignas(4) MVector3
	{
		static ::RPG::MVector3* StaticGet_upVector()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(MVector3_TypeDefinitionIndex)->GetStaticField(0x330);
		}
		static ::RPG::MVector3* StaticGet_backVector()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(MVector3_TypeDefinitionIndex)->GetStaticField(0x33C);
		}
		static ::RPG::MVector3* StaticGet_negativeInfinityVector()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(MVector3_TypeDefinitionIndex)->GetStaticField(0x348);
		}
		static ::RPG::MVector3* StaticGet_oneVector()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(MVector3_TypeDefinitionIndex)->GetStaticField(0x354);
		}
		static ::RPG::MVector3* StaticGet_positiveInfinityVector()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(MVector3_TypeDefinitionIndex)->GetStaticField(0x360);
		}
		static ::RPG::MVector3* StaticGet_forwardVector()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(MVector3_TypeDefinitionIndex)->GetStaticField(0x36C);
		}
		static ::RPG::MVector3* StaticGet_leftVector()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(MVector3_TypeDefinitionIndex)->GetStaticField(0x378);
		}
		static ::RPG::MVector3* StaticGet_downVector()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(MVector3_TypeDefinitionIndex)->GetStaticField(0x384);
		}
		static ::RPG::MVector3* StaticGet_zeroVector()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(MVector3_TypeDefinitionIndex)->GetStaticField(0x390);
		}
		static ::RPG::MVector3* StaticGet_rightVector()
		{
			return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(MVector3_TypeDefinitionIndex)->GetStaticField(0x39C);
		}
		// static const ::System::Single kEpsilon; // 0x0
		// static const ::System::Single kSqrEpsilon; // 0x0
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR3__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR3__CTOR_1_OFFSET))(this, a1, a2);
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

		static ::RPG::MVector3 Lerp(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_LERP_OFFSET))(a1, a2, a3);
		}

		static ::RPG::MVector3 LerpUnclamped(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_LERPUNCLAMPED_OFFSET))(a1, a2, a3);
		}

		static ::RPG::MVector3 MoveTowards(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_MOVETOWARDS_OFFSET))(a1, a2, a3);
		}

		::System::Single get_Item(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void Set(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_SET_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::MVector3 Scale(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_SCALE_OFFSET))(a1, a2);
		}

		::System::Void Scale_1(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_SCALE_1_OFFSET))(this, a1);
		}

		static ::RPG::MVector3 Cross(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_CROSS_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_EQUALS_OFFSET))(this, a1);
		}

		static ::RPG::MVector3 Reflect(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_REFLECT_OFFSET))(a1, a2);
		}

		static ::RPG::MVector3 Normalize(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_NORMALIZE_OFFSET))(a1);
		}

		::System::Void Normalize_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_NORMALIZE_1_OFFSET))(this);
		}

		::RPG::MVector3 get_normalized()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_NORMALIZED_OFFSET))(this);
		}

		static ::System::Single Dot(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_DOT_OFFSET))(a1, a2);
		}

		static ::RPG::MVector3 Project(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_PROJECT_OFFSET))(a1, a2);
		}

		static ::RPG::MVector3 ProjectOnPlane(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_PROJECTONPLANE_OFFSET))(a1, a2);
		}

		static ::System::Single Angle(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_ANGLE_OFFSET))(a1, a2);
		}

		static ::System::Single SignedAngle(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_SIGNEDANGLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single Distance(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_DISTANCE_OFFSET))(a1, a2);
		}

		static ::System::Single SqrDistance(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_SQRDISTANCE_OFFSET))(a1, a2);
		}

		static ::System::Boolean Approximately(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Boolean(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_APPROXIMATELY_OFFSET))(a1, a2);
		}

		static ::RPG::MVector3 ClampMagnitude(::RPG::MVector3 a1, ::System::Single a2)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_CLAMPMAGNITUDE_OFFSET))(a1, a2);
		}

		static ::System::Single Magnitude(::RPG::MVector3 a1)
		{
			return ((::System::Single(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_MAGNITUDE_OFFSET))(a1);
		}

		::System::Single get_magnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_MAGNITUDE_OFFSET))(this);
		}

		static ::System::Single SqrMagnitude(::RPG::MVector3 a1)
		{
			return ((::System::Single(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_SQRMAGNITUDE_OFFSET))(a1);
		}

		::System::Single get_sqrMagnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_SQRMAGNITUDE_OFFSET))(this);
		}

		static ::RPG::MVector3 Min(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_MIN_OFFSET))(a1, a2);
		}

		static ::RPG::MVector3 Max(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_MAX_OFFSET))(a1, a2);
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

		static ::RPG::MVector3 op_Addition(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_OP_ADDITION_OFFSET))(a1, a2);
		}

		static ::RPG::MVector3 op_Subtraction(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_OP_SUBTRACTION_OFFSET))(a1, a2);
		}

		static ::RPG::MVector3 op_UnaryNegation(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_OP_UNARYNEGATION_OFFSET))(a1);
		}

		static ::RPG::MVector3 op_Multiply(::RPG::MVector3 a1, ::System::Single a2)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_OP_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::RPG::MVector3 op_Multiply_1(::System::Single a1, ::RPG::MVector3 a2)
		{
			return ((::RPG::MVector3(*)(::System::Single, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_OP_MULTIPLY_1_OFFSET))(a1, a2);
		}

		static ::RPG::MVector3 op_Division(::RPG::MVector3 a1, ::System::Single a2)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_OP_DIVISION_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Boolean(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Boolean(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_TOSTRING_1_OFFSET))(this, a1);
		}

		static ::RPG::MVector3 get_fwd()
		{
			return ((::RPG::MVector3(*)())((::PBYTE)hIl2Cpp + RPG_MVECTOR3_GET_FWD_OFFSET))();
		}

		static ::System::Single AngleBetween(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MVECTOR3_ANGLEBETWEEN_OFFSET))(a1, a2);
		}
	};
}
