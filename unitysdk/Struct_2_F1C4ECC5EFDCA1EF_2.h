#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_F1C4ECC5EFDCA1EF_2_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x38FC7B0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x395E490)
#define STRUCT_2_F1C4ECC5EFDCA1EF_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x395E450)
#define STRUCT_2_F1C4ECC5EFDCA1EF_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x395E440)
#define STRUCT_2_F1C4ECC5EFDCA1EF_2_GET_ID_OFFSET UNITYSDK_OFFSET(0x676EB0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_2_GET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x179F8D30)
#define STRUCT_2_F1C4ECC5EFDCA1EF_2_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x179F8CF0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_2_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x395E420)
#define STRUCT_2_F1C4ECC5EFDCA1EF_2_SET_ID_OFFSET UNITYSDK_OFFSET(0x38C2BD0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_2_SET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x164FF0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x395E410)
#define STRUCT_2_F1C4ECC5EFDCA1EF_2__CTOR_OFFSET UNITYSDK_OFFSET(0x38FC6C0)

inline static constexpr unsigned int Struct_2_F1C4ECC5EFDCA1EF_2_TypeDefinitionIndex = 49606;

struct alignas(4) Struct_2_F1C4ECC5EFDCA1EF_2
{
	::Struct_2_BC950E36747FB4C9 _PrototypeIdentifier_k__BackingField; // 0x10
	::System::UInt32 _ID_k__BackingField; // 0x18

	::System::Void _ctor(::Struct_2_BC950E36747FB4C9& a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_2__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_BC950E36747FB4C9 get_PrototypeIdentifier()
	{
		return ((::Struct_2_BC950E36747FB4C9(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_2_GET_PROTOTYPEIDENTIFIER_OFFSET))(this);
	}

	::System::Void set_PrototypeIdentifier(::Struct_2_BC950E36747FB4C9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_2_SET_PROTOTYPEIDENTIFIER_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_2_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_2_SET_ID_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_2_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_2_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_F1C4ECC5EFDCA1EF_2 a1, ::Struct_2_F1C4ECC5EFDCA1EF_2 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_F1C4ECC5EFDCA1EF_2, ::Struct_2_F1C4ECC5EFDCA1EF_2))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_2_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_F1C4ECC5EFDCA1EF_2 a1, ::Struct_2_F1C4ECC5EFDCA1EF_2 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_F1C4ECC5EFDCA1EF_2, ::Struct_2_F1C4ECC5EFDCA1EF_2))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_2_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_2_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_F1C4ECC5EFDCA1EF_2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_F1C4ECC5EFDCA1EF_2))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::Struct_2_BC950E36747FB4C9& a1, ::System::UInt32& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_2_DECONSTRUCT_OFFSET))(this, a1, a2);
	}
};
