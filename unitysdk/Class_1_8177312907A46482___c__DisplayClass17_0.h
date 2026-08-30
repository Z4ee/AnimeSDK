#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_650;

#define CLASS_1_8177312907A46482___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBCC5B20)
#define CLASS_1_8177312907A46482___C__DISPLAYCLASS17_0__PROGRESSSTART_B__0_OFFSET UNITYSDK_OFFSET(0xBCC7670)

inline static constexpr unsigned int Class_1_8177312907A46482___c__DisplayClass17_0_TypeDefinitionIndex = 59773;

class Class_1_8177312907A46482___c__DisplayClass17_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_650* progress; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8177312907A46482___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _ProgressStart_b__0(::Class_0_16E4307DCC419505_650* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_650*))((::PBYTE)hIl2Cpp + CLASS_1_8177312907A46482___C__DISPLAYCLASS17_0__PROGRESSSTART_B__0_OFFSET))(this, a1);
	}
};
