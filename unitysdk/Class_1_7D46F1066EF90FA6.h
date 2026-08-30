#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_433;
class Class_0_16E4307DCC419505_440;

#define CLASS_1_7D46F1066EF90FA6_METHOD_1_84024BF09FAFFF61_OFFSET UNITYSDK_OFFSET(0x19AD20E0)
#define CLASS_1_7D46F1066EF90FA6__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD2050)

inline static constexpr unsigned int Class_1_7D46F1066EF90FA6_TypeDefinitionIndex = 62644;

class Class_1_7D46F1066EF90FA6 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_440* JILBKMEGBDK; // 0x10
	::Class_0_16E4307DCC419505_433* EOEACGLNPMC; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_440* a1, ::Class_0_16E4307DCC419505_433* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_440*, ::Class_0_16E4307DCC419505_433*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_84024BF09FAFFF61()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_METHOD_1_84024BF09FAFFF61_OFFSET))(this);
	}
};
