#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_2_5A0CFCCE9DEA8840;

#define CLASS_2_8424C507D90D78A0_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x8D86B90)
#define CLASS_2_8424C507D90D78A0_METHOD_2_BEBC8F4773DC82AA_OFFSET UNITYSDK_OFFSET(0x8D86280)
#define CLASS_2_8424C507D90D78A0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8D86130)
#define CLASS_2_8424C507D90D78A0__CTOR_OFFSET UNITYSDK_OFFSET(0x8D86080)
#define CLASS_2_8424C507D90D78A0__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x8D86180)
#define CLASS_2_8424C507D90D78A0__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x8D86CF0)
#define CLASS_2_8424C507D90D78A0__ONTICK_OFFSET UNITYSDK_OFFSET(0x8D865B0)
#define CLASS_2_8424C507D90D78A0__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x8D862E0)
#define CLASS_2_8424C507D90D78A0___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x8D86D60)
#define CLASS_2_8424C507D90D78A0___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x8D86E90)
#define CLASS_2_8424C507D90D78A0___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x8D86E20)
#define CLASS_2_8424C507D90D78A0___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x8D86DC0)

inline static constexpr unsigned int Class_2_8424C507D90D78A0_TypeDefinitionIndex = 59272;

class Class_2_8424C507D90D78A0 : public ::RPG::Client::UIController
{
public:
	// static const ::System::Single Field_2_4; // 0x0
	// static const ::System::Single Field_2_5; // 0x0
	::System::Single Field_2_2; // 0x180
	::System::Boolean Field_2_1; // 0x184
	::System::Single Field_2_3; // 0x188
	::System::Int32 Field_2_0; // 0x18C

	::System::Void _ctor(::RPG::GameCore::TeamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_2_8424C507D90D78A0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8424C507D90D78A0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8424C507D90D78A0__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8424C507D90D78A0__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8424C507D90D78A0__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8424C507D90D78A0__ONEXITFINALSTEP_OFFSET))(this);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8424C507D90D78A0_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::Class_2_5A0CFCCE9DEA8840* Method_2_BEBC8F4773DC82AA()
	{
		return ((::Class_2_5A0CFCCE9DEA8840*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8424C507D90D78A0_METHOD_2_BEBC8F4773DC82AA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8424C507D90D78A0___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8424C507D90D78A0___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8424C507D90D78A0___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8424C507D90D78A0___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET))(this);
	}
};
