#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_MQUATERNION_ANGLE_OFFSET UNITYSDK_OFFSET(0x19F72180)
#define RPG_MQUATERNION_CREATEQUATERNIONFROMAXISQUATERNIONS_OFFSET UNITYSDK_OFFSET(0x19F72B10)
#define RPG_MQUATERNION_DOT_OFFSET UNITYSDK_OFFSET(0x19F72110)
#define RPG_MQUATERNION_EQUALS_OFFSET UNITYSDK_OFFSET(0x3862EF0)
#define RPG_MQUATERNION_EULER_OFFSET UNITYSDK_OFFSET(0x19F72910)
#define RPG_MQUATERNION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3858310)
#define RPG_MQUATERNION_GET_EULERANGLES_OFFSET UNITYSDK_OFFSET(0x3862ED0)
#define RPG_MQUATERNION_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x19F71EE0)
#define RPG_MQUATERNION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3862D70)
#define RPG_MQUATERNION_INTERNAL_MAKEPOSITIVE_OFFSET UNITYSDK_OFFSET(0x19F721E0)
#define RPG_MQUATERNION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x19F720D0)
#define RPG_MQUATERNION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x19F72140)
#define RPG_MQUATERNION_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x19F71FA0)
#define RPG_MQUATERNION_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x19F71EF0)
#define RPG_MQUATERNION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3862E20)
#define RPG_MQUATERNION_SET_OFFSET UNITYSDK_OFFSET(0x259B0)
#define RPG_MQUATERNION_TOEULERANGLE_OFFSET UNITYSDK_OFFSET(0x19F71B70)
#define RPG_MQUATERNION_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3863000)
#define RPG_MQUATERNION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3862FF0)
#define RPG_MQUATERNION__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F72CC0)
#define RPG_MQUATERNION__CTOR_OFFSET UNITYSDK_OFFSET(0x259B0)

namespace RPG
{
	inline static constexpr unsigned int MQuaternion_TypeDefinitionIndex = 6762;

	struct alignas(4) MQuaternion
	{
		static ::RPG::MQuaternion* StaticGet_identityQuaternion()
		{
			return (::RPG::MQuaternion*)Il2CppClass::FromTypeDefinitionIndex(MQuaternion_TypeDefinitionIndex)->GetStaticField(0x3760);
		}
		// static const ::System::Single kEpsilon; // 0x0
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18
		::System::Single w; // 0x1C

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MQUATERNION__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_MQUATERNION__CCTOR_OFFSET))();
		}

		::System::Single get_Item(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_SET_ITEM_OFFSET))(this, a1, a2);
		}

		/*
		::RPG::MVector3 get_eulerAngles()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_GET_EULERANGLES_OFFSET))(this);
		}
		*/

		::System::Void Set(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_SET_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::RPG::MQuaternion get_identity()
		{
			return ((::RPG::MQuaternion(*)())((::PBYTE)hIl2Cpp + RPG_MQUATERNION_GET_IDENTITY_OFFSET))();
		}

		static ::RPG::MQuaternion op_Multiply(::RPG::MQuaternion a1, ::RPG::MQuaternion a2)
		{
			return ((::RPG::MQuaternion(*)(::RPG::MQuaternion, ::RPG::MQuaternion))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_OP_MULTIPLY_OFFSET))(a1, a2);
		}

		/*
		static ::RPG::MVector3 op_Multiply_1(::RPG::MQuaternion a1, ::RPG::MVector3 a2)
		{
			return ((::RPG::MVector3(*)(::RPG::MQuaternion, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_OP_MULTIPLY_1_OFFSET))(a1, a2);
		}
		*/

		static ::System::Boolean op_Equality(::RPG::MQuaternion a1, ::RPG::MQuaternion a2)
		{
			return ((::System::Boolean(*)(::RPG::MQuaternion, ::RPG::MQuaternion))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::MQuaternion a1, ::RPG::MQuaternion a2)
		{
			return ((::System::Boolean(*)(::RPG::MQuaternion, ::RPG::MQuaternion))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Single Dot(::RPG::MQuaternion a1, ::RPG::MQuaternion a2)
		{
			return ((::System::Single(*)(::RPG::MQuaternion, ::RPG::MQuaternion))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_DOT_OFFSET))(a1, a2);
		}

		static ::System::Single Angle(::RPG::MQuaternion a1, ::RPG::MQuaternion a2)
		{
			return ((::System::Single(*)(::RPG::MQuaternion, ::RPG::MQuaternion))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_ANGLE_OFFSET))(a1, a2);
		}

		/*
		static ::RPG::MVector3 Internal_MakePositive(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_INTERNAL_MAKEPOSITIVE_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::MVector3 ToEulerAngle(::RPG::MQuaternion& a1)
		{
			return ((::RPG::MVector3(*)(::RPG::MQuaternion&))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_TOEULERANGLE_OFFSET))(a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_EQUALS_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_TOSTRING_1_OFFSET))(this, a1);
		}

		static ::RPG::MQuaternion Euler(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::RPG::MQuaternion(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_EULER_OFFSET))(a1, a2, a3);
		}

		static ::RPG::MQuaternion CreateQuaternionFromAxisQuaternions(::RPG::MQuaternion a1, ::RPG::MQuaternion a2, ::RPG::MQuaternion a3, ::RPG::MQuaternion& a4)
		{
			return ((::RPG::MQuaternion(*)(::RPG::MQuaternion, ::RPG::MQuaternion, ::RPG::MQuaternion, ::RPG::MQuaternion&))((::PBYTE)hIl2Cpp + RPG_MQUATERNION_CREATEQUATERNIONFROMAXISQUATERNIONS_OFFSET))(a1, a2, a3, a4);
		}
	};
}
