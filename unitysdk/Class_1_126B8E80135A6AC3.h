#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_382;

#define CLASS_1_126B8E80135A6AC3_METHOD_1_DE3A3E1360312C52_OFFSET UNITYSDK_OFFSET(0x13AD0A90)
#define CLASS_1_126B8E80135A6AC3__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD0A40)

inline static constexpr unsigned int Class_1_126B8E80135A6AC3_TypeDefinitionIndex = 58528;

class Class_1_126B8E80135A6AC3 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_382* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_126B8E80135A6AC3__CTOR_OFFSET))(this, a1);
	}

	::System::Single Method_1_DE3A3E1360312C52()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_126B8E80135A6AC3_METHOD_1_DE3A3E1360312C52_OFFSET))(this);
	}
};
