#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
namespace System { class Action; }

#define CLASS_2_FF98DBE640782344_CLASS_1_1BE26D5952576616_1_METHOD_1_B819424FB5AF6083_OFFSET UNITYSDK_OFFSET(0x1747FA50)
#define CLASS_2_FF98DBE640782344_CLASS_1_1BE26D5952576616_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1747FA40)

inline static constexpr unsigned int Class_2_FF98DBE640782344_Class_1_1BE26D5952576616_1_TypeDefinitionIndex = 74295;

class Class_2_FF98DBE640782344_Class_1_1BE26D5952576616_1 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF98DBE640782344_CLASS_1_1BE26D5952576616_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B819424FB5AF6083(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_FF98DBE640782344_CLASS_1_1BE26D5952576616_1_METHOD_1_B819424FB5AF6083_OFFSET))(this, a1);
	}
};
