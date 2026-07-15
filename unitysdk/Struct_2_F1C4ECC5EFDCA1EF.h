#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AvatarSystem/AvatarSkinSource.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_F1C4ECC5EFDCA1EF_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x38FC7B0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x39C3F20)
#define STRUCT_2_F1C4ECC5EFDCA1EF_EQUALS_OFFSET UNITYSDK_OFFSET(0x39C3EE0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x39C3ED0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_GET_ID_OFFSET UNITYSDK_OFFSET(0x676EB0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_GET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_METHOD_2_21777270C6646173_OFFSET UNITYSDK_OFFSET(0x39C3E50)
#define STRUCT_2_F1C4ECC5EFDCA1EF_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18B110F0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18B110B0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x39C3EB0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_SET_ID_OFFSET UNITYSDK_OFFSET(0x38C2BD0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_SET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x164FF0)
#define STRUCT_2_F1C4ECC5EFDCA1EF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x39C3EA0)
#define STRUCT_2_F1C4ECC5EFDCA1EF__CTOR_OFFSET UNITYSDK_OFFSET(0x38FC6C0)

inline static constexpr unsigned int Struct_2_F1C4ECC5EFDCA1EF_TypeDefinitionIndex = 49611;

struct alignas(4) Struct_2_F1C4ECC5EFDCA1EF
{
	// static const ::System::UInt32 Field_2_0 = 0x0; // 0x0
	::Struct_2_BC950E36747FB4C9 _PrototypeIdentifier_k__BackingField; // 0x10
	::System::UInt32 _ID_k__BackingField; // 0x18

	::System::Void _ctor(::Struct_2_BC950E36747FB4C9& a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_BC950E36747FB4C9 get_PrototypeIdentifier()
	{
		return ((::Struct_2_BC950E36747FB4C9(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_GET_PROTOTYPEIDENTIFIER_OFFSET))(this);
	}

	::System::Void set_PrototypeIdentifier(::Struct_2_BC950E36747FB4C9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_SET_PROTOTYPEIDENTIFIER_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_SET_ID_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::AvatarSkinSource Method_2_21777270C6646173()
	{
		return ((::RPG::AvatarSystem::AvatarSkinSource(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_METHOD_2_21777270C6646173_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_F1C4ECC5EFDCA1EF a1, ::Struct_2_F1C4ECC5EFDCA1EF a2)
	{
		return ((::System::Boolean(*)(::Struct_2_F1C4ECC5EFDCA1EF, ::Struct_2_F1C4ECC5EFDCA1EF))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_F1C4ECC5EFDCA1EF a1, ::Struct_2_F1C4ECC5EFDCA1EF a2)
	{
		return ((::System::Boolean(*)(::Struct_2_F1C4ECC5EFDCA1EF, ::Struct_2_F1C4ECC5EFDCA1EF))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_F1C4ECC5EFDCA1EF a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_F1C4ECC5EFDCA1EF))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::Struct_2_BC950E36747FB4C9& a1, ::System::UInt32& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_F1C4ECC5EFDCA1EF_DECONSTRUCT_OFFSET))(this, a1, a2);
	}
};
