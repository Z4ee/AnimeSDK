#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_520;
class Class_0_16E4307DCC419505_527;

#define CLASS_1_7D46F1066EF90FA6_METHOD_1_84024BF09FAFFF61_OFFSET UNITYSDK_OFFSET(0x159EFB50)
#define CLASS_1_7D46F1066EF90FA6__CTOR_OFFSET UNITYSDK_OFFSET(0x159EFAC0)

inline static constexpr unsigned int Class_1_7D46F1066EF90FA6_TypeDefinitionIndex = 62562;

class Class_1_7D46F1066EF90FA6 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_520* EOEACGLNPMC; // 0x10
	::Class_0_16E4307DCC419505_527* JILBKMEGBDK; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_527* a1, ::Class_0_16E4307DCC419505_520* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_527*, ::Class_0_16E4307DCC419505_520*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_84024BF09FAFFF61()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_METHOD_1_84024BF09FAFFF61_OFFSET))(this);
	}
};
