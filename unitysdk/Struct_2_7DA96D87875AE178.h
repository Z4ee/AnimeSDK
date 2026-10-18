#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_412;
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_7DA96D87875AE178_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3C51F20)
#define STRUCT_2_7DA96D87875AE178_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C51F10)
#define STRUCT_2_7DA96D87875AE178_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C51EB0)
#define STRUCT_2_7DA96D87875AE178_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C51EA0)
#define STRUCT_2_7DA96D87875AE178_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC64C30)
#define STRUCT_2_7DA96D87875AE178_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC64C10)
#define STRUCT_2_7DA96D87875AE178_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3C51DC0)
#define STRUCT_2_7DA96D87875AE178_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C51DB0)
#define STRUCT_2_7DA96D87875AE178__CTOR_OFFSET UNITYSDK_OFFSET(0x94B0)

inline static constexpr unsigned int Struct_2_7DA96D87875AE178_TypeDefinitionIndex = 44196;

struct alignas(8) Struct_2_7DA96D87875AE178
{
	::Il2CppArray<::Class_0_16E4307DCC419505_412*>* ACJMMAMOOLF; // 0x10

	::System::Void _ctor(::Il2CppArray<::Class_0_16E4307DCC419505_412*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_412*>*))((::PBYTE)hIl2Cpp + STRUCT_2_7DA96D87875AE178__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7DA96D87875AE178_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_7DA96D87875AE178_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_7DA96D87875AE178 a1, ::Struct_2_7DA96D87875AE178 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_7DA96D87875AE178, ::Struct_2_7DA96D87875AE178))((::PBYTE)hIl2Cpp + STRUCT_2_7DA96D87875AE178_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_7DA96D87875AE178 a1, ::Struct_2_7DA96D87875AE178 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_7DA96D87875AE178, ::Struct_2_7DA96D87875AE178))((::PBYTE)hIl2Cpp + STRUCT_2_7DA96D87875AE178_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7DA96D87875AE178_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_7DA96D87875AE178_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_7DA96D87875AE178 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_7DA96D87875AE178))((::PBYTE)hIl2Cpp + STRUCT_2_7DA96D87875AE178_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::Il2CppArray<::Class_0_16E4307DCC419505_412*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_412*>*&))((::PBYTE)hIl2Cpp + STRUCT_2_7DA96D87875AE178_DECONSTRUCT_OFFSET))(this, a1);
	}
};
