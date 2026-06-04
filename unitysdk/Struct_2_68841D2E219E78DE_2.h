#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_68841D2E219E78DE_2_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x7F5B0)
#define STRUCT_2_68841D2E219E78DE_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7F480)
#define STRUCT_2_68841D2E219E78DE_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x7F470)
#define STRUCT_2_68841D2E219E78DE_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F360)
#define STRUCT_2_68841D2E219E78DE_2_GET_ID_OFFSET UNITYSDK_OFFSET(0xDAD0)
#define STRUCT_2_68841D2E219E78DE_2_GET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x5B60)
#define STRUCT_2_68841D2E219E78DE_2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA616DB0)
#define STRUCT_2_68841D2E219E78DE_2_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA616C90)
#define STRUCT_2_68841D2E219E78DE_2_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x7F340)
#define STRUCT_2_68841D2E219E78DE_2_SET_ID_OFFSET UNITYSDK_OFFSET(0xDAE0)
#define STRUCT_2_68841D2E219E78DE_2_SET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC630)
#define STRUCT_2_68841D2E219E78DE_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7F330)
#define STRUCT_2_68841D2E219E78DE_2__CTOR_OFFSET UNITYSDK_OFFSET(0x7F320)

inline static constexpr unsigned int Struct_2_68841D2E219E78DE_2_TypeDefinitionIndex = 48593;

struct alignas(4) Struct_2_68841D2E219E78DE_2
{
	::Struct_2_BC950E36747FB4C9 _PrototypeIdentifier_k__BackingField; // 0x10
	::System::UInt32 _ID_k__BackingField; // 0x18

	::System::Void _ctor(::Struct_2_BC950E36747FB4C9& a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_2__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_BC950E36747FB4C9 get_PrototypeIdentifier()
	{
		return ((::Struct_2_BC950E36747FB4C9(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_2_GET_PROTOTYPEIDENTIFIER_OFFSET))(this);
	}

	::System::Void set_PrototypeIdentifier(::Struct_2_BC950E36747FB4C9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_2_SET_PROTOTYPEIDENTIFIER_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_2_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_2_SET_ID_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_2_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_2_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_68841D2E219E78DE_2 a1, ::Struct_2_68841D2E219E78DE_2 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_68841D2E219E78DE_2, ::Struct_2_68841D2E219E78DE_2))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_2_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_68841D2E219E78DE_2 a1, ::Struct_2_68841D2E219E78DE_2 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_68841D2E219E78DE_2, ::Struct_2_68841D2E219E78DE_2))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_2_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_2_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_68841D2E219E78DE_2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_68841D2E219E78DE_2))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::Struct_2_BC950E36747FB4C9& a1, ::System::UInt32& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_68841D2E219E78DE_2_DECONSTRUCT_OFFSET))(this, a1, a2);
	}
};
