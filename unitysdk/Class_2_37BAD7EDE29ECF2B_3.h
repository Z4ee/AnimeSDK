#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C584489F76966D79_3.h"

class Class_0_16E4307DCC419505_763;
namespace System { class String; }

#define CLASS_2_37BAD7EDE29ECF2B_3_METHOD_2_84BFD8A83698EFF5_OFFSET UNITYSDK_OFFSET(0xC330B60)
#define CLASS_2_37BAD7EDE29ECF2B_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC330D50)
#define CLASS_2_37BAD7EDE29ECF2B_3__CTOR_OFFSET UNITYSDK_OFFSET(0xC330B50)

inline static constexpr unsigned int Class_2_37BAD7EDE29ECF2B_3_TypeDefinitionIndex = 82149;

class Class_2_37BAD7EDE29ECF2B_3 : public ::Class_1_C584489F76966D79_3
{
public:
	::System::Void _ctor(::Class_0_16E4307DCC419505_763* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_763*))((::PBYTE)hIl2Cpp + CLASS_2_37BAD7EDE29ECF2B_3__CTOR_OFFSET))(this, a1);
	}

	::System::Double Method_2_84BFD8A83698EFF5()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37BAD7EDE29ECF2B_3_METHOD_2_84BFD8A83698EFF5_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37BAD7EDE29ECF2B_3_TOSTRING_OFFSET))(this);
	}
};
