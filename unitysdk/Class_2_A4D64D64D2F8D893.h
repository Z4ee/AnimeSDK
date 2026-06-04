#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_2_5A0CFCCE9DEA8840;

#define CLASS_2_A4D64D64D2F8D893_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x138F6330)
#define CLASS_2_A4D64D64D2F8D893_METHOD_2_BEBC8F4773DC82AA_OFFSET UNITYSDK_OFFSET(0x138F5A40)
#define CLASS_2_A4D64D64D2F8D893_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x138F5880)
#define CLASS_2_A4D64D64D2F8D893__CTOR_OFFSET UNITYSDK_OFFSET(0x138F57D0)
#define CLASS_2_A4D64D64D2F8D893__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x138F58D0)
#define CLASS_2_A4D64D64D2F8D893__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x138F6490)
#define CLASS_2_A4D64D64D2F8D893__ONTICK_OFFSET UNITYSDK_OFFSET(0x138F5D70)
#define CLASS_2_A4D64D64D2F8D893__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x138F5AA0)
#define CLASS_2_A4D64D64D2F8D893___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x138F6500)
#define CLASS_2_A4D64D64D2F8D893___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x138F6620)
#define CLASS_2_A4D64D64D2F8D893___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x138F65C0)
#define CLASS_2_A4D64D64D2F8D893___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x138F6560)

inline static constexpr unsigned int Class_2_A4D64D64D2F8D893_TypeDefinitionIndex = 67605;

class Class_2_A4D64D64D2F8D893 : public ::RPG::Client::UIController
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	::System::Int32 Field_2_2; // 0x180
	::System::Single Field_2_3; // 0x184
	::System::Single Field_2_4; // 0x188
	::System::Boolean Field_2_5; // 0x18C

	::System::Void _ctor(::RPG::GameCore::TeamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_2_A4D64D64D2F8D893__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4D64D64D2F8D893_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4D64D64D2F8D893__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4D64D64D2F8D893__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A4D64D64D2F8D893__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4D64D64D2F8D893__ONEXITFINALSTEP_OFFSET))(this);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4D64D64D2F8D893_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}

	::Class_2_5A0CFCCE9DEA8840* Method_2_BEBC8F4773DC82AA()
	{
		return ((::Class_2_5A0CFCCE9DEA8840*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4D64D64D2F8D893_METHOD_2_BEBC8F4773DC82AA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4D64D64D2F8D893___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4D64D64D2F8D893___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A4D64D64D2F8D893___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4D64D64D2F8D893___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET))(this);
	}
};
