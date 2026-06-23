#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7A7210476589789D;
namespace System { class Action; }

#define CLASS_1_53EF53585AF9D88A_METHOD_1_00F34DD1CABB08D0_OFFSET UNITYSDK_OFFSET(0x12CBE240)
#define CLASS_1_53EF53585AF9D88A_METHOD_1_583F1446ECB3FC58_OFFSET UNITYSDK_OFFSET(0x12CBE4F0)
#define CLASS_1_53EF53585AF9D88A__CTOR_OFFSET UNITYSDK_OFFSET(0x12CBE4E0)

inline static constexpr unsigned int Class_1_53EF53585AF9D88A_TypeDefinitionIndex = 83754;

class Class_1_53EF53585AF9D88A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53EF53585AF9D88A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_00F34DD1CABB08D0(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_53EF53585AF9D88A_METHOD_1_00F34DD1CABB08D0_OFFSET))(this, a1);
	}

	static ::Class_1_53EF53585AF9D88A* Method_1_583F1446ECB3FC58(::Class_3_7A7210476589789D* a1)
	{
		return ((::Class_1_53EF53585AF9D88A*(*)(::Class_3_7A7210476589789D*))((::PBYTE)hIl2Cpp + CLASS_1_53EF53585AF9D88A_METHOD_1_583F1446ECB3FC58_OFFSET))(a1);
	}
};
