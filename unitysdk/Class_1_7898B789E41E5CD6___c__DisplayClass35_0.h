#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_98114A4376157A5D;
namespace System { class String; }

#define CLASS_1_7898B789E41E5CD6___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17A049A0)
#define CLASS_1_7898B789E41E5CD6___C__DISPLAYCLASS35_0__GETINSTANTIATEOPERATION_B__0_OFFSET UNITYSDK_OFFSET(0x17A06DC0)

inline static constexpr unsigned int Class_1_7898B789E41E5CD6___c__DisplayClass35_0_TypeDefinitionIndex = 80881;

class Class_1_7898B789E41E5CD6___c__DisplayClass35_0 : public ::System::Object
{
public:
	::System::String* name; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7898B789E41E5CD6___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetInstantiateOperation_b__0(::Class_1_98114A4376157A5D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_98114A4376157A5D*))((::PBYTE)hIl2Cpp + CLASS_1_7898B789E41E5CD6___C__DISPLAYCLASS35_0__GETINSTANTIATEOPERATION_B__0_OFFSET))(this, a1);
	}
};
