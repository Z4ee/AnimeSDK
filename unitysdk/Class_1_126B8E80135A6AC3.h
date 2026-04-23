#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_365;

#define CLASS_1_126B8E80135A6AC3_METHOD_1_D03A1D59D9C56F9E_OFFSET UNITYSDK_OFFSET(0x1255ACD0)
#define CLASS_1_126B8E80135A6AC3__CTOR_OFFSET UNITYSDK_OFFSET(0x1255AC80)

inline static constexpr unsigned int Class_1_126B8E80135A6AC3_TypeDefinitionIndex = 57727;

class Class_1_126B8E80135A6AC3 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_365* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_365* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_365*))((::PBYTE)hIl2Cpp + CLASS_1_126B8E80135A6AC3__CTOR_OFFSET))(this, a1);
	}

	::System::Single Method_1_D03A1D59D9C56F9E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_126B8E80135A6AC3_METHOD_1_D03A1D59D9C56F9E_OFFSET))(this);
	}
};
