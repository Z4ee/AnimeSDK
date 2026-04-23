#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C584489F76966D79_3.h"

class Class_0_16E4307DCC419505_578;
namespace System { class String; }

#define CLASS_2_37BAD7EDE29ECF2B_2_METHOD_2_84BFD8A83698EFF5_OFFSET UNITYSDK_OFFSET(0xCD3F9C0)
#define CLASS_2_37BAD7EDE29ECF2B_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0xCD3FB60)
#define CLASS_2_37BAD7EDE29ECF2B_2__CTOR_OFFSET UNITYSDK_OFFSET(0xCD3F9B0)
#define CLASS_2_37BAD7EDE29ECF2B_2___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xCD3FC00)

inline static constexpr unsigned int Class_2_37BAD7EDE29ECF2B_2_TypeDefinitionIndex = 72516;

class Class_2_37BAD7EDE29ECF2B_2 : public ::Class_1_C584489F76966D79_3
{
public:
	::System::Void _ctor(::Class_0_16E4307DCC419505_578* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_578*))((::PBYTE)hIl2Cpp + CLASS_2_37BAD7EDE29ECF2B_2__CTOR_OFFSET))(this, a1);
	}

	::System::Double Method_2_84BFD8A83698EFF5()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37BAD7EDE29ECF2B_2_METHOD_2_84BFD8A83698EFF5_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37BAD7EDE29ECF2B_2_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37BAD7EDE29ECF2B_2___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
