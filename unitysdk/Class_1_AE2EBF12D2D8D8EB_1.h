#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_AE2EBF12D2D8D8EB_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB2EF480)
#define CLASS_1_AE2EBF12D2D8D8EB_1_EQUALS_OFFSET UNITYSDK_OFFSET(0xB2EF5E0)
#define CLASS_1_AE2EBF12D2D8D8EB_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB2EF4F0)
#define CLASS_1_AE2EBF12D2D8D8EB_1_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xB2EF200)
#define CLASS_1_AE2EBF12D2D8D8EB_1_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB2EF400)
#define CLASS_1_AE2EBF12D2D8D8EB_1_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB2EF380)
#define CLASS_1_AE2EBF12D2D8D8EB_1_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xB2EF370)
#define CLASS_1_AE2EBF12D2D8D8EB_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB2EF230)
#define CLASS_1_AE2EBF12D2D8D8EB_1__CLONE___OFFSET UNITYSDK_OFFSET(0xB2EF6A0)
#define CLASS_1_AE2EBF12D2D8D8EB_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB2EF6E0)
#define CLASS_1_AE2EBF12D2D8D8EB_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB2EF1F0)

inline static constexpr unsigned int Class_1_AE2EBF12D2D8D8EB_1_TypeDefinitionIndex = 82065;

class Class_1_AE2EBF12D2D8D8EB_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE2EBF12D2D8D8EB_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_AE2EBF12D2D8D8EB_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AE2EBF12D2D8D8EB_1*))((::PBYTE)hIl2Cpp + CLASS_1_AE2EBF12D2D8D8EB_1__CTOR_1_OFFSET))(this, a1);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE2EBF12D2D8D8EB_1_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE2EBF12D2D8D8EB_1_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_AE2EBF12D2D8D8EB_1_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Class_1_AE2EBF12D2D8D8EB_1* a1, ::Class_1_AE2EBF12D2D8D8EB_1* a2)
	{
		return ((::System::Boolean(*)(::Class_1_AE2EBF12D2D8D8EB_1*, ::Class_1_AE2EBF12D2D8D8EB_1*))((::PBYTE)hIl2Cpp + CLASS_1_AE2EBF12D2D8D8EB_1_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Class_1_AE2EBF12D2D8D8EB_1* a1, ::Class_1_AE2EBF12D2D8D8EB_1* a2)
	{
		return ((::System::Boolean(*)(::Class_1_AE2EBF12D2D8D8EB_1*, ::Class_1_AE2EBF12D2D8D8EB_1*))((::PBYTE)hIl2Cpp + CLASS_1_AE2EBF12D2D8D8EB_1_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE2EBF12D2D8D8EB_1_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AE2EBF12D2D8D8EB_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_AE2EBF12D2D8D8EB_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AE2EBF12D2D8D8EB_1*))((::PBYTE)hIl2Cpp + CLASS_1_AE2EBF12D2D8D8EB_1_EQUALS_1_OFFSET))(this, a1);
	}

	::Class_1_AE2EBF12D2D8D8EB_1* _Clone__()
	{
		return ((::Class_1_AE2EBF12D2D8D8EB_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE2EBF12D2D8D8EB_1__CLONE___OFFSET))(this);
	}
};
