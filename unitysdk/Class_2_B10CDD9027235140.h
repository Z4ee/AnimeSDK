#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

class Class_2_5462E9D93C6034C6;

#define CLASS_2_B10CDD9027235140_METHOD_2_056D88F34E1FCE48_OFFSET UNITYSDK_OFFSET(0xA2E4960)
#define CLASS_2_B10CDD9027235140_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0xA2E47B0)
#define CLASS_2_B10CDD9027235140_METHOD_2_BEBC8F4773DC82AA_OFFSET UNITYSDK_OFFSET(0xA2E4680)
#define CLASS_2_B10CDD9027235140__CTOR_OFFSET UNITYSDK_OFFSET(0xA2E4530)
#define CLASS_2_B10CDD9027235140__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA2E45A0)
#define CLASS_2_B10CDD9027235140__ONTICK_OFFSET UNITYSDK_OFFSET(0xA2E48D0)
#define CLASS_2_B10CDD9027235140__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xA2E4750)
#define CLASS_2_B10CDD9027235140___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA2E49C0)
#define CLASS_2_B10CDD9027235140___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xA2E4A80)
#define CLASS_2_B10CDD9027235140___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xA2E4A20)

inline static constexpr unsigned int Class_2_B10CDD9027235140_TypeDefinitionIndex = 66633;

class Class_2_B10CDD9027235140 : public ::RPG::Client::UIController
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::System::UInt32 Field_2_2; // 0x180
	::System::Single Field_2_1; // 0x184
	::System::UInt32 Field_2_3; // 0x188

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B10CDD9027235140__CTOR_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B10CDD9027235140__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B10CDD9027235140__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B10CDD9027235140__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_056D88F34E1FCE48(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_B10CDD9027235140_METHOD_2_056D88F34E1FCE48_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B10CDD9027235140_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::Class_2_5462E9D93C6034C6* Method_2_BEBC8F4773DC82AA()
	{
		return ((::Class_2_5462E9D93C6034C6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B10CDD9027235140_METHOD_2_BEBC8F4773DC82AA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B10CDD9027235140___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B10CDD9027235140___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B10CDD9027235140___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}
};
