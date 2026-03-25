#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_352;
class Class_0_16E4307DCC419505_357;

#define CLASS_1_7D46F1066EF90FA6_METHOD_1_84024BF09FAFFF61_OFFSET UNITYSDK_OFFSET(0x979D590)
#define CLASS_1_7D46F1066EF90FA6__CTOR_OFFSET UNITYSDK_OFFSET(0x979D500)

inline static constexpr unsigned int Class_1_7D46F1066EF90FA6_TypeDefinitionIndex = 50848;

class Class_1_7D46F1066EF90FA6 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_352* Field_1_1; // 0x10
	::Class_0_16E4307DCC419505_357* Field_1_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_357* a1, ::Class_0_16E4307DCC419505_352* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_357*, ::Class_0_16E4307DCC419505_352*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_84024BF09FAFFF61()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_METHOD_1_84024BF09FAFFF61_OFFSET))(this);
	}
};
