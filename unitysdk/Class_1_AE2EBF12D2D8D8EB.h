#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_AE2EBF12D2D8D8EB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18806330)
#define CLASS_1_AE2EBF12D2D8D8EB_EQUALS_OFFSET UNITYSDK_OFFSET(0x18806490)
#define CLASS_1_AE2EBF12D2D8D8EB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x188063A0)
#define CLASS_1_AE2EBF12D2D8D8EB_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x188060B0)
#define CLASS_1_AE2EBF12D2D8D8EB_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x188062B0)
#define CLASS_1_AE2EBF12D2D8D8EB_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18806230)
#define CLASS_1_AE2EBF12D2D8D8EB_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x18806220)
#define CLASS_1_AE2EBF12D2D8D8EB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x188060E0)
#define CLASS_1_AE2EBF12D2D8D8EB__CLONE___OFFSET UNITYSDK_OFFSET(0x18806550)
#define CLASS_1_AE2EBF12D2D8D8EB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x188065A0)
#define CLASS_1_AE2EBF12D2D8D8EB__CTOR_OFFSET UNITYSDK_OFFSET(0x18806590)

inline static constexpr unsigned int Class_1_AE2EBF12D2D8D8EB_TypeDefinitionIndex = 79772;

class Class_1_AE2EBF12D2D8D8EB : public ::System::Object
{
public:
	::System::Void _ctor(::Class_1_AE2EBF12D2D8D8EB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AE2EBF12D2D8D8EB*))((::PBYTE)hIl2Cpp + CLASS_1_AE2EBF12D2D8D8EB__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE2EBF12D2D8D8EB__CTOR_1_OFFSET))(this);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE2EBF12D2D8D8EB_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE2EBF12D2D8D8EB_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_AE2EBF12D2D8D8EB_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Class_1_AE2EBF12D2D8D8EB* a1, ::Class_1_AE2EBF12D2D8D8EB* a2)
	{
		return ((::System::Boolean(*)(::Class_1_AE2EBF12D2D8D8EB*, ::Class_1_AE2EBF12D2D8D8EB*))((::PBYTE)hIl2Cpp + CLASS_1_AE2EBF12D2D8D8EB_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Class_1_AE2EBF12D2D8D8EB* a1, ::Class_1_AE2EBF12D2D8D8EB* a2)
	{
		return ((::System::Boolean(*)(::Class_1_AE2EBF12D2D8D8EB*, ::Class_1_AE2EBF12D2D8D8EB*))((::PBYTE)hIl2Cpp + CLASS_1_AE2EBF12D2D8D8EB_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE2EBF12D2D8D8EB_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AE2EBF12D2D8D8EB_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_AE2EBF12D2D8D8EB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AE2EBF12D2D8D8EB*))((::PBYTE)hIl2Cpp + CLASS_1_AE2EBF12D2D8D8EB_EQUALS_1_OFFSET))(this, a1);
	}

	::Class_1_AE2EBF12D2D8D8EB* _Clone__()
	{
		return ((::Class_1_AE2EBF12D2D8D8EB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE2EBF12D2D8D8EB__CLONE___OFFSET))(this);
	}
};
