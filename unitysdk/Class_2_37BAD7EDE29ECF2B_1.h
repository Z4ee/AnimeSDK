#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C584489F76966D79_3.h"

class Class_0_16E4307DCC419505_671;
namespace System { class String; }

#define CLASS_2_37BAD7EDE29ECF2B_1_METHOD_2_79ABC616AF722D0B_OFFSET UNITYSDK_OFFSET(0x19C17CE0)
#define CLASS_2_37BAD7EDE29ECF2B_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C17E30)
#define CLASS_2_37BAD7EDE29ECF2B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19C17CD0)

inline static constexpr unsigned int Class_2_37BAD7EDE29ECF2B_1_TypeDefinitionIndex = 80765;

class Class_2_37BAD7EDE29ECF2B_1 : public ::Class_1_C584489F76966D79_3
{
public:
	::System::Void _ctor(::Class_0_16E4307DCC419505_671* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_671*))((::PBYTE)hIl2Cpp + CLASS_2_37BAD7EDE29ECF2B_1__CTOR_OFFSET))(this, a1);
	}

	::System::Double Method_2_79ABC616AF722D0B()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37BAD7EDE29ECF2B_1_METHOD_2_79ABC616AF722D0B_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37BAD7EDE29ECF2B_1_TOSTRING_OFFSET))(this);
	}
};
