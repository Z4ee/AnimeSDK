#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E23A2D2E72B0716C;
class Class_1_F9FBCC956DFCF137_25;
namespace System { class Action; }

#define CLASS_1_E23A2D2E72B0716C___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x173206A0)
#define CLASS_1_E23A2D2E72B0716C___C__DISPLAYCLASS4_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0x17320A60)

inline static constexpr unsigned int Class_1_E23A2D2E72B0716C___c__DisplayClass4_0_TypeDefinitionIndex = 73696;

class Class_1_E23A2D2E72B0716C___c__DisplayClass4_0 : public ::System::Object
{
public:
	::System::Action* onComplete; // 0x10
	::Class_1_F9FBCC956DFCF137_25* context; // 0x18
	::Class_1_E23A2D2E72B0716C* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E23A2D2E72B0716C___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _Execute_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E23A2D2E72B0716C___C__DISPLAYCLASS4_0__EXECUTE_B__0_OFFSET))(this);
	}
};
