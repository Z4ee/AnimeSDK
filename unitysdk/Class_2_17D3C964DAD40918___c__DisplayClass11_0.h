#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1090;

#define CLASS_2_17D3C964DAD40918___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC0A2280)
#define CLASS_2_17D3C964DAD40918___C__DISPLAYCLASS11_0___CREATEITEMIFNEED_B__0_OFFSET UNITYSDK_OFFSET(0xC0A2810)

inline static constexpr unsigned int Class_2_17D3C964DAD40918___c__DisplayClass11_0_TypeDefinitionIndex = 71503;

class Class_2_17D3C964DAD40918___c__DisplayClass11_0 : public ::System::Object
{
public:
	::RPG::GameCore::FloatMessageType messageType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17D3C964DAD40918___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __CreateItemIfNeed_b__0(::Class_0_16E4307DCC419505_1090* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_1090*))((::PBYTE)hIl2Cpp + CLASS_2_17D3C964DAD40918___C__DISPLAYCLASS11_0___CREATEITEMIFNEED_B__0_OFFSET))(this, a1);
	}
};
