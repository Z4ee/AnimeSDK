#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1090;
class Class_1_95EEF67A826E14FF;

#define CLASS_2_17D3C964DAD40918___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__0_OFFSET UNITYSDK_OFFSET(0xC0A2940)
#define CLASS_2_17D3C964DAD40918___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__1_OFFSET UNITYSDK_OFFSET(0xC0A2A40)
#define CLASS_2_17D3C964DAD40918___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__2_OFFSET UNITYSDK_OFFSET(0xC0A2A60)
#define CLASS_2_17D3C964DAD40918___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC0A1190)

inline static constexpr unsigned int Class_2_17D3C964DAD40918___c__DisplayClass1_0_TypeDefinitionIndex = 71505;

class Class_2_17D3C964DAD40918___c__DisplayClass1_0 : public ::System::Object
{
public:
	::RPG::GameCore::FloatMessageType messageType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17D3C964DAD40918___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _ClearAllToast_b__0(::Class_0_16E4307DCC419505_1090* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_1090*))((::PBYTE)hIl2Cpp + CLASS_2_17D3C964DAD40918___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__0_OFFSET))(this, a1);
	}

	::System::Boolean _ClearAllToast_b__1(::Class_1_95EEF67A826E14FF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_95EEF67A826E14FF*))((::PBYTE)hIl2Cpp + CLASS_2_17D3C964DAD40918___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__1_OFFSET))(this, a1);
	}

	::System::Boolean _ClearAllToast_b__2(::Class_1_95EEF67A826E14FF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_95EEF67A826E14FF*))((::PBYTE)hIl2Cpp + CLASS_2_17D3C964DAD40918___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__2_OFFSET))(this, a1);
	}
};
