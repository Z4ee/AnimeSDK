#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_46D151C34C1078BD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xE4F39E0)
#define CLASS_1_46D151C34C1078BD_EQUALS_OFFSET UNITYSDK_OFFSET(0xE4F38F0)
#define CLASS_1_46D151C34C1078BD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE4F37B0)
#define CLASS_1_46D151C34C1078BD_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xE4F33F0)
#define CLASS_1_46D151C34C1078BD_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xE4F3710)
#define CLASS_1_46D151C34C1078BD_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xE4F3670)
#define CLASS_1_46D151C34C1078BD_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xE4F3660)
#define CLASS_1_46D151C34C1078BD_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE4F3420)
#define CLASS_1_46D151C34C1078BD__CLONE___OFFSET UNITYSDK_OFFSET(0xE4F3AF0)
#define CLASS_1_46D151C34C1078BD__CTOR_1_OFFSET UNITYSDK_OFFSET(0xE4F3B10)
#define CLASS_1_46D151C34C1078BD__CTOR_OFFSET UNITYSDK_OFFSET(0xE4F3B00)

inline static constexpr unsigned int Class_1_46D151C34C1078BD_TypeDefinitionIndex = 75647;

class Class_1_46D151C34C1078BD : public ::System::Object
{
public:
	::System::Void _ctor(::Class_1_46D151C34C1078BD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_46D151C34C1078BD*))((::PBYTE)hIl2Cpp + CLASS_1_46D151C34C1078BD__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46D151C34C1078BD__CTOR_1_OFFSET))(this);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46D151C34C1078BD_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46D151C34C1078BD_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_46D151C34C1078BD_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Class_1_46D151C34C1078BD* a1, ::Class_1_46D151C34C1078BD* a2)
	{
		return ((::System::Boolean(*)(::Class_1_46D151C34C1078BD*, ::Class_1_46D151C34C1078BD*))((::PBYTE)hIl2Cpp + CLASS_1_46D151C34C1078BD_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Class_1_46D151C34C1078BD* a1, ::Class_1_46D151C34C1078BD* a2)
	{
		return ((::System::Boolean(*)(::Class_1_46D151C34C1078BD*, ::Class_1_46D151C34C1078BD*))((::PBYTE)hIl2Cpp + CLASS_1_46D151C34C1078BD_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46D151C34C1078BD_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_46D151C34C1078BD_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_46D151C34C1078BD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_46D151C34C1078BD*))((::PBYTE)hIl2Cpp + CLASS_1_46D151C34C1078BD_EQUALS_1_OFFSET))(this, a1);
	}

	::Class_1_46D151C34C1078BD* _Clone__()
	{
		return ((::Class_1_46D151C34C1078BD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46D151C34C1078BD__CLONE___OFFSET))(this);
	}
};
