#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AB111DB9731D063B;

#define CLASS_1_895FB63906FAA27E___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8DD7600)
#define CLASS_1_895FB63906FAA27E___C__DISPLAYCLASS6_0__GETOFFICEEVENT_B__0_OFFSET UNITYSDK_OFFSET(0x8DD84D0)

inline static constexpr unsigned int Class_1_895FB63906FAA27E___c__DisplayClass6_0_TypeDefinitionIndex = 61038;

class Class_1_895FB63906FAA27E___c__DisplayClass6_0 : public ::System::Object
{
public:
	::System::UInt32 officeEventID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895FB63906FAA27E___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetOfficeEvent_b__0(::Class_1_AB111DB9731D063B* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AB111DB9731D063B*))((::PBYTE)hIl2Cpp + CLASS_1_895FB63906FAA27E___C__DISPLAYCLASS6_0__GETOFFICEEVENT_B__0_OFFSET))(this, x);
	}
};
