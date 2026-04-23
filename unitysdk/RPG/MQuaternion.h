#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_MQUATERNION_ANGLE_OFFSET UNITYSDK_OFFSET(0x19228E60)
#define RPG_MQUATERNION_CREATEQUATERNIONFROMAXISQUATERNIONS_OFFSET UNITYSDK_OFFSET(0x192298B0)
#define RPG_MQUATERNION_DOT_OFFSET UNITYSDK_OFFSET(0x19228DF0)
#define RPG_MQUATERNION_EQUALS_OFFSET UNITYSDK_OFFSET(0x22C97D0)
#define RPG_MQUATERNION_EULER_OFFSET UNITYSDK_OFFSET(0x192296B0)
#define RPG_MQUATERNION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22C8A20)
#define RPG_MQUATERNION_GET_EULERANGLES_OFFSET UNITYSDK_OFFSET(0x22C97B0)
#define RPG_MQUATERNION_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x19228BC0)
#define RPG_MQUATERNION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x22C9650)
#define RPG_MQUATERNION_INTERNAL_MAKEPOSITIVE_OFFSET UNITYSDK_OFFSET(0x19228EC0)
#define RPG_MQUATERNION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x19228DB0)
#define RPG_MQUATERNION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x19228E20)
#define RPG_MQUATERNION_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x19228C80)
#define RPG_MQUATERNION_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x19228BD0)
#define RPG_MQUATERNION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x22C9700)
#define RPG_MQUATERNION_SET_OFFSET UNITYSDK_OFFSET(0x24C30)
#define RPG_MQUATERNION_TOEULERANGLE_OFFSET UNITYSDK_OFFSET(0x19228850)
#define RPG_MQUATERNION_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x22C98E0)
#define RPG_MQUATERNION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22C98D0)
#define RPG_MQUATERNION__CCTOR_OFFSET UNITYSDK_OFFSET(0x19229A60)
#define RPG_MQUATERNION__CTOR_OFFSET UNITYSDK_OFFSET(0x24C30)

namespace RPG
{
	inline static constexpr unsigned int MQuaternion_TypeDefinitionIndex = 8898;

	struct alignas(4) MQuaternion
	{
		static ::RPG::MQuaternion* StaticGet_identityQuaternion()
		{
			return (::RPG::MQuaternion*)Il2CppClass::FromTypeDefinitionIndex(MQuaternion_TypeDefinitionIndex)->GetStaticField(0xCE30);
		}
		// static const ::System::Single kEpsilon; // 0x0
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18
		::System::Single w; // 0x1C

		::System::Void _ctor(::System::Single x, ::System::Single y, ::System::Single z, ::System::Single w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MQUATERNION__CTOR_OFFSET))(this, x, y, z, w);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_MQUATERNION__CCTOR_OFFSET))();
		}

		::System::Single get_Item(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_SET_ITEM_OFFSET))(this, index, value);
		}

		/*
		::RPG::MVector3 get_eulerAngles()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_GET_EULERANGLES_OFFSET))(this);
		}
		*/

		::System::Void Set(::System::Single newX, ::System::Single newY, ::System::Single newZ, ::System::Single newW)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_SET_OFFSET))(this, newX, newY, newZ, newW);
		}

		static ::RPG::MQuaternion get_identity()
		{
			return ((::RPG::MQuaternion(*)())((::PBYTE)hIl2Cpp + RPG_MQUATERNION_GET_IDENTITY_OFFSET))();
		}

		static ::RPG::MQuaternion op_Multiply(::RPG::MQuaternion lhs, ::RPG::MQuaternion rhs)
		{
			return ((::RPG::MQuaternion(*)(::RPG::MQuaternion, ::RPG::MQuaternion))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_OP_MULTIPLY_OFFSET))(lhs, rhs);
		}

		/*
		static ::RPG::MVector3 op_Multiply_1(::RPG::MQuaternion rotation, ::RPG::MVector3 point)
		{
			return ((::RPG::MVector3(*)(::RPG::MQuaternion, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_OP_MULTIPLY_1_OFFSET))(rotation, point);
		}
		*/

		static ::System::Boolean op_Equality(::RPG::MQuaternion lhs, ::RPG::MQuaternion rhs)
		{
			return ((::System::Boolean(*)(::RPG::MQuaternion, ::RPG::MQuaternion))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::RPG::MQuaternion lhs, ::RPG::MQuaternion rhs)
		{
			return ((::System::Boolean(*)(::RPG::MQuaternion, ::RPG::MQuaternion))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Single Dot(::RPG::MQuaternion a, ::RPG::MQuaternion b)
		{
			return ((::System::Single(*)(::RPG::MQuaternion, ::RPG::MQuaternion))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_DOT_OFFSET))(a, b);
		}

		static ::System::Single Angle(::RPG::MQuaternion a, ::RPG::MQuaternion b)
		{
			return ((::System::Single(*)(::RPG::MQuaternion, ::RPG::MQuaternion))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_ANGLE_OFFSET))(a, b);
		}

		/*
		static ::RPG::MVector3 Internal_MakePositive(::RPG::MVector3 euler)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_INTERNAL_MAKEPOSITIVE_OFFSET))(euler);
		}
		*/

		/*
		static ::RPG::MVector3 ToEulerAngle(::RPG::MQuaternion& rotation)
		{
			return ((::RPG::MVector3(*)(::RPG::MQuaternion&))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_TOEULERANGLE_OFFSET))(rotation);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_EQUALS_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_TOSTRING_1_OFFSET))(this, format);
		}

		static ::RPG::MQuaternion Euler(::System::Single fX, ::System::Single fY, ::System::Single fZ)
		{
			return ((::RPG::MQuaternion(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_EULER_OFFSET))(fX, fY, fZ);
		}

		static ::RPG::MQuaternion CreateQuaternionFromAxisQuaternions(::RPG::MQuaternion Q1, ::RPG::MQuaternion Q2, ::RPG::MQuaternion Q3, ::RPG::MQuaternion& QReturn)
		{
			return ((::RPG::MQuaternion(*)(::RPG::MQuaternion, ::RPG::MQuaternion, ::RPG::MQuaternion, ::RPG::MQuaternion&))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_CREATEQUATERNIONFROMAXISQUATERNIONS_OFFSET))(Q1, Q2, Q3, QReturn);
		}
	};
}
