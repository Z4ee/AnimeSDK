#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C584489F76966D79_3.h"

class Class_0_16E4307DCC419505_600;
namespace System { class String; }

#define CLASS_2_37BAD7EDE29ECF2B_METHOD_2_79ABC616AF722D0B_OFFSET UNITYSDK_OFFSET(0x1436FFA0)
#define CLASS_2_37BAD7EDE29ECF2B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x143700B0)
#define CLASS_2_37BAD7EDE29ECF2B__CTOR_OFFSET UNITYSDK_OFFSET(0x1436FF90)
#define CLASS_2_37BAD7EDE29ECF2B___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14370150)

inline static constexpr unsigned int Class_2_37BAD7EDE29ECF2B_TypeDefinitionIndex = 74333;

class Class_2_37BAD7EDE29ECF2B : public ::Class_1_C584489F76966D79_3
{
public:
	::System::Void _ctor(::Class_0_16E4307DCC419505_600* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_600*))((::PBYTE)hIl2Cpp + CLASS_2_37BAD7EDE29ECF2B__CTOR_OFFSET))(this, a1);
	}

	::System::Double Method_2_79ABC616AF722D0B()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37BAD7EDE29ECF2B_METHOD_2_79ABC616AF722D0B_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37BAD7EDE29ECF2B_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37BAD7EDE29ECF2B___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
