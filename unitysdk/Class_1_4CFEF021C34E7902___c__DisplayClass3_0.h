#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_4CFEF021C34E7902___C__DISPLAYCLASS3_0__ADDHANDLER_B__0_OFFSET UNITYSDK_OFFSET(0xC40A270)
#define CLASS_1_4CFEF021C34E7902___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC40A140)

inline static constexpr unsigned int Class_1_4CFEF021C34E7902___c__DisplayClass3_0_TypeDefinitionIndex = 64398;

class Class_1_4CFEF021C34E7902___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::Action* handler; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CFEF021C34E7902___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddHandler_b__0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4CFEF021C34E7902___C__DISPLAYCLASS3_0__ADDHANDLER_B__0_OFFSET))(this, a1);
	}
};
