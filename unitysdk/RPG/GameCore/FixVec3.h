#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_FIXVEC3_ANGLEBETWEEN_OFFSET UNITYSDK_OFFSET(0x179E0580)
#define RPG_GAMECORE_FIXVEC3_ANGLE_OFFSET UNITYSDK_OFFSET(0x179DDDD0)
#define RPG_GAMECORE_FIXVEC3_CLAMPMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x179DF120)
#define RPG_GAMECORE_FIXVEC3_CROSS_OFFSET UNITYSDK_OFFSET(0x179DBED0)
#define RPG_GAMECORE_FIXVEC3_DISTANCE_OFFSET UNITYSDK_OFFSET(0x179DEF20)
#define RPG_GAMECORE_FIXVEC3_DOT_OFFSET UNITYSDK_OFFSET(0x179DD220)
#define RPG_GAMECORE_FIXVEC3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20EB270)
#define RPG_GAMECORE_FIXVEC3_EQUALS_OFFSET UNITYSDK_OFFSET(0x20EB230)
#define RPG_GAMECORE_FIXVEC3_EXCLUDE_OFFSET UNITYSDK_OFFSET(0x179E06F0)
#define RPG_GAMECORE_FIXVEC3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20EB1F0)
#define RPG_GAMECORE_FIXVEC3_GET_BACK_OFFSET UNITYSDK_OFFSET(0x179DFBD0)
#define RPG_GAMECORE_FIXVEC3_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x179DFC10)
#define RPG_GAMECORE_FIXVEC3_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x179DFBB0)
#define RPG_GAMECORE_FIXVEC3_GET_FWD_OFFSET UNITYSDK_OFFSET(0x179E0560)
#define RPG_GAMECORE_FIXVEC3_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x20EAE10)
#define RPG_GAMECORE_FIXVEC3_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x179DFC30)
#define RPG_GAMECORE_FIXVEC3_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x20EB3E0)
#define RPG_GAMECORE_FIXVEC3_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x20EB340)
#define RPG_GAMECORE_FIXVEC3_GET_ONE_OFFSET UNITYSDK_OFFSET(0x179DFB90)
#define RPG_GAMECORE_FIXVEC3_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x179DFC50)
#define RPG_GAMECORE_FIXVEC3_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x20EB560)
#define RPG_GAMECORE_FIXVEC3_GET_UP_OFFSET UNITYSDK_OFFSET(0x179DFBF0)
#define RPG_GAMECORE_FIXVEC3_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x179DFB70)
#define RPG_GAMECORE_FIXVEC3_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x179DACF0)
#define RPG_GAMECORE_FIXVEC3_LERP_OFFSET UNITYSDK_OFFSET(0x179DA870)
#define RPG_GAMECORE_FIXVEC3_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x179DF4F0)
#define RPG_GAMECORE_FIXVEC3_MAX_OFFSET UNITYSDK_OFFSET(0x179DFB30)
#define RPG_GAMECORE_FIXVEC3_MIN_OFFSET UNITYSDK_OFFSET(0x179DFAF0)
#define RPG_GAMECORE_FIXVEC3_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x179DB110)
#define RPG_GAMECORE_FIXVEC3_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x20EB2A0)
#define RPG_GAMECORE_FIXVEC3_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x179DCEC0)
#define RPG_GAMECORE_FIXVEC3_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x179DFC70)
#define RPG_GAMECORE_FIXVEC3_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x179E03F0)
#define RPG_GAMECORE_FIXVEC3_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x179E0450)
#define RPG_GAMECORE_FIXVEC3_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x179E0C60)
#define RPG_GAMECORE_FIXVEC3_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x179E0BE0)
#define RPG_GAMECORE_FIXVEC3_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x179E0C20)
#define RPG_GAMECORE_FIXVEC3_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x179E0BA0)
#define RPG_GAMECORE_FIXVEC3_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x179E0480)
#define RPG_GAMECORE_FIXVEC3_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x179E0110)
#define RPG_GAMECORE_FIXVEC3_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x179DFE30)
#define RPG_GAMECORE_FIXVEC3_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x179DFD30)
#define RPG_GAMECORE_FIXVEC3_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x179DFDD0)
#define RPG_GAMECORE_FIXVEC3_PROJECTONPLANE_OFFSET UNITYSDK_OFFSET(0x179DD920)
#define RPG_GAMECORE_FIXVEC3_PROJECT_OFFSET UNITYSDK_OFFSET(0x179DD530)
#define RPG_GAMECORE_FIXVEC3_REFLECT_OFFSET UNITYSDK_OFFSET(0x179DC6A0)
#define RPG_GAMECORE_FIXVEC3_SCALE_1_OFFSET UNITYSDK_OFFSET(0x20EAF40)
#define RPG_GAMECORE_FIXVEC3_SCALE_OFFSET UNITYSDK_OFFSET(0x179DB950)
#define RPG_GAMECORE_FIXVEC3_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x20EAE90)
#define RPG_GAMECORE_FIXVEC3_SET_OFFSET UNITYSDK_OFFSET(0x29380)
#define RPG_GAMECORE_FIXVEC3_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x179DE1E0)
#define RPG_GAMECORE_FIXVEC3_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x179DF7F0)
#define RPG_GAMECORE_FIXVEC3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20EB570)
#define RPG_GAMECORE_FIXVEC3__CCTOR_OFFSET UNITYSDK_OFFSET(0x179E0CA0)
#define RPG_GAMECORE_FIXVEC3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x20EAF20)
#define RPG_GAMECORE_FIXVEC3__CTOR_OFFSET UNITYSDK_OFFSET(0x29380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixVec3_TypeDefinitionIndex = 9398;

	struct alignas(8) FixVec3
	{
		static ::RPG::GameCore::FixVec3* StaticGet_zeroVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x9770);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_upVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x9788);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_forwardVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x97A0);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_oneVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x97B8);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_downVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x97D0);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_rightVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x97E8);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_EpsilonNormalSqrt()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x9800);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_leftVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x9808);
		}
		static ::RPG::GameCore::FixVec3* StaticGet_backVector()
		{
			return (::RPG::GameCore::FixVec3*)Il2CppClass::FromTypeDefinitionIndex(FixVec3_TypeDefinitionIndex)->GetStaticField(0x9820);
		}
		::RPG::GameCore::FixPoint x; // 0x10
		::RPG::GameCore::FixPoint y; // 0x18
		::RPG::GameCore::FixPoint z; // 0x20

		::System::Void _ctor(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y, ::RPG::GameCore::FixPoint z)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3__CTOR_OFFSET))(this, x, y, z);
		}

		::System::Void _ctor_1(::RPG::GameCore::FixPoint x, ::RPG::GameCore::FixPoint y)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3__CTOR_1_OFFSET))(this, x, y);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::FixVec3 Lerp(::RPG::GameCore::FixVec3 a, ::RPG::GameCore::FixVec3 b, ::RPG::GameCore::FixPoint t)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_LERP_OFFSET))(a, b, t);
		}

		static ::RPG::GameCore::FixVec3 LerpUnclamped(::RPG::GameCore::FixVec3 a, ::RPG::GameCore::FixVec3 b, ::RPG::GameCore::FixPoint t)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_LERPUNCLAMPED_OFFSET))(a, b, t);
		}

		static ::RPG::GameCore::FixVec3 MoveTowards(::RPG::GameCore::FixVec3 current, ::RPG::GameCore::FixVec3 target, ::RPG::GameCore::FixPoint maxDistanceDelta)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_MOVETOWARDS_OFFSET))(current, target, maxDistanceDelta);
		}

		::RPG::GameCore::FixPoint get_Item(::System::Int32 index)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Void Set(::RPG::GameCore::FixPoint newX, ::RPG::GameCore::FixPoint newY, ::RPG::GameCore::FixPoint newZ)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_SET_OFFSET))(this, newX, newY, newZ);
		}

		static ::RPG::GameCore::FixVec3 Scale(::RPG::GameCore::FixVec3 a, ::RPG::GameCore::FixVec3 b)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_SCALE_OFFSET))(a, b);
		}

		::System::Void Scale_1(::RPG::GameCore::FixVec3 scale)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_SCALE_1_OFFSET))(this, scale);
		}

		static ::RPG::GameCore::FixVec3 Cross(::RPG::GameCore::FixVec3 lhs, ::RPG::GameCore::FixVec3 rhs)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_CROSS_OFFSET))(lhs, rhs);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::RPG::GameCore::FixVec3 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_EQUALS_1_OFFSET))(this, other);
		}

		static ::RPG::GameCore::FixVec3 Reflect(::RPG::GameCore::FixVec3 inDirection, ::RPG::GameCore::FixVec3 inNormal)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_REFLECT_OFFSET))(inDirection, inNormal);
		}

		static ::RPG::GameCore::FixVec3 Normalize(::RPG::GameCore::FixVec3 value)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_NORMALIZE_OFFSET))(value);
		}

		::System::Void Normalize_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_NORMALIZE_1_OFFSET))(this);
		}

		::RPG::GameCore::FixVec3 get_normalized()
		{
			return ((::RPG::GameCore::FixVec3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_NORMALIZED_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint Dot(::RPG::GameCore::FixVec3 lhs, ::RPG::GameCore::FixVec3 rhs)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_DOT_OFFSET))(lhs, rhs);
		}

		static ::RPG::GameCore::FixVec3 Project(::RPG::GameCore::FixVec3 vector, ::RPG::GameCore::FixVec3 onNormal)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_PROJECT_OFFSET))(vector, onNormal);
		}

		static ::RPG::GameCore::FixVec3 ProjectOnPlane(::RPG::GameCore::FixVec3 vector, ::RPG::GameCore::FixVec3 planeNormal)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_PROJECTONPLANE_OFFSET))(vector, planeNormal);
		}

		static ::RPG::GameCore::FixPoint Angle(::RPG::GameCore::FixVec3 from, ::RPG::GameCore::FixVec3 to)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_ANGLE_OFFSET))(from, to);
		}

		static ::RPG::GameCore::FixPoint SignedAngle(::RPG::GameCore::FixVec3 from, ::RPG::GameCore::FixVec3 to, ::RPG::GameCore::FixVec3 axis)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_SIGNEDANGLE_OFFSET))(from, to, axis);
		}

		static ::RPG::GameCore::FixPoint Distance(::RPG::GameCore::FixVec3 a, ::RPG::GameCore::FixVec3 b)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_DISTANCE_OFFSET))(a, b);
		}

		static ::RPG::GameCore::FixVec3 ClampMagnitude(::RPG::GameCore::FixVec3 vector, ::RPG::GameCore::FixPoint maxLength)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_CLAMPMAGNITUDE_OFFSET))(vector, maxLength);
		}

		static ::RPG::GameCore::FixPoint Magnitude(::RPG::GameCore::FixVec3 vector)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_MAGNITUDE_OFFSET))(vector);
		}

		::RPG::GameCore::FixPoint get_magnitude()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_MAGNITUDE_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint SqrMagnitude(::RPG::GameCore::FixVec3 vector)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_SQRMAGNITUDE_OFFSET))(vector);
		}

		::RPG::GameCore::FixPoint get_sqrMagnitude()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_SQRMAGNITUDE_OFFSET))(this);
		}

		static ::RPG::GameCore::FixVec3 Min(::RPG::GameCore::FixVec3 lhs, ::RPG::GameCore::FixVec3 rhs)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_MIN_OFFSET))(lhs, rhs);
		}

		static ::RPG::GameCore::FixVec3 Max(::RPG::GameCore::FixVec3 lhs, ::RPG::GameCore::FixVec3 rhs)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_MAX_OFFSET))(lhs, rhs);
		}

		static ::RPG::GameCore::FixVec3 get_zero()
		{
			return ((::RPG::GameCore::FixVec3(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_ZERO_OFFSET))();
		}

		static ::RPG::GameCore::FixVec3 get_one()
		{
			return ((::RPG::GameCore::FixVec3(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_ONE_OFFSET))();
		}

		static ::RPG::GameCore::FixVec3 get_forward()
		{
			return ((::RPG::GameCore::FixVec3(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_FORWARD_OFFSET))();
		}

		static ::RPG::GameCore::FixVec3 get_back()
		{
			return ((::RPG::GameCore::FixVec3(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_BACK_OFFSET))();
		}

		static ::RPG::GameCore::FixVec3 get_up()
		{
			return ((::RPG::GameCore::FixVec3(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_UP_OFFSET))();
		}

		static ::RPG::GameCore::FixVec3 get_down()
		{
			return ((::RPG::GameCore::FixVec3(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_DOWN_OFFSET))();
		}

		static ::RPG::GameCore::FixVec3 get_left()
		{
			return ((::RPG::GameCore::FixVec3(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_LEFT_OFFSET))();
		}

		static ::RPG::GameCore::FixVec3 get_right()
		{
			return ((::RPG::GameCore::FixVec3(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_RIGHT_OFFSET))();
		}

		static ::RPG::GameCore::FixVec3 op_Addition(::RPG::GameCore::FixVec3 a, ::RPG::GameCore::FixVec3 b)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_OP_ADDITION_OFFSET))(a, b);
		}

		static ::RPG::GameCore::FixVec3 op_Subtraction(::RPG::GameCore::FixVec3 a, ::RPG::GameCore::FixVec3 b)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::RPG::GameCore::FixVec3 op_UnaryNegation(::RPG::GameCore::FixVec3 a)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_OP_UNARYNEGATION_OFFSET))(a);
		}

		static ::RPG::GameCore::FixVec3 op_Multiply(::RPG::GameCore::FixVec3 a, ::RPG::GameCore::FixPoint d)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_OP_MULTIPLY_OFFSET))(a, d);
		}

		static ::RPG::GameCore::FixVec3 op_Multiply_1(::RPG::GameCore::FixPoint d, ::RPG::GameCore::FixVec3 a)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_OP_MULTIPLY_1_OFFSET))(d, a);
		}

		static ::RPG::GameCore::FixVec3 op_Division(::RPG::GameCore::FixVec3 a, ::RPG::GameCore::FixPoint d)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_OP_DIVISION_OFFSET))(a, d);
		}

		static ::System::Boolean op_Equality(::RPG::GameCore::FixVec3 lhs, ::RPG::GameCore::FixVec3 rhs)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::RPG::GameCore::FixVec3 lhs, ::RPG::GameCore::FixVec3 rhs)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_TOSTRING_OFFSET))(this);
		}

		static ::RPG::GameCore::FixVec3 get_fwd()
		{
			return ((::RPG::GameCore::FixVec3(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_GET_FWD_OFFSET))();
		}

		static ::RPG::GameCore::FixPoint AngleBetween(::RPG::GameCore::FixVec3 from, ::RPG::GameCore::FixVec3 to)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_ANGLEBETWEEN_OFFSET))(from, to);
		}

		static ::RPG::GameCore::FixVec3 Exclude(::RPG::GameCore::FixVec3 excludeThis, ::RPG::GameCore::FixVec3 fromThat)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::FixVec3, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_EXCLUDE_OFFSET))(excludeThis, fromThat);
		}

		/*
		static ::RPG::MVector3 op_Implicit(::RPG::GameCore::FixVec3 vec)
		{
			return ((::RPG::MVector3(*)(::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_OP_IMPLICIT_OFFSET))(vec);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec3 op_Explicit(::RPG::MVector3 vec)
		{
			return ((::RPG::GameCore::FixVec3(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_OP_EXPLICIT_OFFSET))(vec);
		}
		*/

		/*
		static ::UnityEngine::Vector3 op_Implicit_1(::RPG::GameCore::FixVec3 vec)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_OP_IMPLICIT_1_OFFSET))(vec);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec3 op_Explicit_1(::UnityEngine::Vector3 vec)
		{
			return ((::RPG::GameCore::FixVec3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC3_OP_EXPLICIT_1_OFFSET))(vec);
		}
		*/
	};
}
