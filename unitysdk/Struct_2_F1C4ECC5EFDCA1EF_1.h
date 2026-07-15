#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_F1C4ECC5EFDCA1EF_1_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x38FC7B0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x38FC780)
#define STRUCT_2_F1C4ECC5EFDCA1EF_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x38FC710)
#define STRUCT_2_F1C4ECC5EFDCA1EF_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x38FC700)
#define STRUCT_2_F1C4ECC5EFDCA1EF_1_GET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x676EB0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_1_GET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_1_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x160B2BE0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_1_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x160B2BA0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_1_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x38FC6E0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_1_SET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x38C2BD0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_1_SET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x164FF0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x38FC6D0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_1__CTOR_OFFSET UNITYSDK_OFFSET(0x38FC6C0)

inline static constexpr unsigned int Struct_2_F1C4ECC5EFDCA1EF_1_TypeDefinitionIndex = 49599;

struct alignas(4) Struct_2_F1C4ECC5EFDCA1EF_1
{
	::Struct_2_BC950E36747FB4C9 _PrototypeIdentifier_k__BackingField; // 0x10
	::System::UInt32 _PromotionLevel_k__BackingField; // 0x18

	::System::Void _ctor(::Struct_2_BC950E36747FB4C9& a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_1__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_BC950E36747FB4C9 get_PrototypeIdentifier()
	{
		return ((::Struct_2_BC950E36747FB4C9(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_1_GET_PROTOTYPEIDENTIFIER_OFFSET))(this);
	}

	::System::Void set_PrototypeIdentifier(::Struct_2_BC950E36747FB4C9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_1_SET_PROTOTYPEIDENTIFIER_OFFSET))(this, a1);
	}

	::System::UInt32 get_PromotionLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_1_GET_PROMOTIONLEVEL_OFFSET))(this);
	}

	::System::Void set_PromotionLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_1_SET_PROMOTIONLEVEL_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_1_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_1_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_F1C4ECC5EFDCA1EF_1 a1, ::Struct_2_F1C4ECC5EFDCA1EF_1 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_F1C4ECC5EFDCA1EF_1, ::Struct_2_F1C4ECC5EFDCA1EF_1))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_1_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_F1C4ECC5EFDCA1EF_1 a1, ::Struct_2_F1C4ECC5EFDCA1EF_1 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_F1C4ECC5EFDCA1EF_1, ::Struct_2_F1C4ECC5EFDCA1EF_1))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_1_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_1_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_F1C4ECC5EFDCA1EF_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_F1C4ECC5EFDCA1EF_1))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::Struct_2_BC950E36747FB4C9& a1, ::System::UInt32& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_1_DECONSTRUCT_OFFSET))(this, a1, a2);
	}
};
