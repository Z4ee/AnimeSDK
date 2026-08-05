#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_C64432A6918BE61F.h"

class Class_0_16E4307DCC419505_207;
class Class_2_890E2470C613CE36_Class_2_B9D1E9290D30E77D;
namespace MoleMole { class UIGeneralConsoleBtnWidgetController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_890E2470C613CE36_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x18718960)
#define CLASS_2_890E2470C613CE36_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x18718A30)
#define CLASS_2_890E2470C613CE36_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x18718970)
#define CLASS_2_890E2470C613CE36_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18718AB0)
#define CLASS_2_890E2470C613CE36__CTOR_OFFSET UNITYSDK_OFFSET(0x18718AA0)

inline static constexpr unsigned int Class_2_890E2470C613CE36_TypeDefinitionIndex = 48955;

class Class_2_890E2470C613CE36 : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::MoleMole::UIGeneralConsoleBtnWidgetController* Field_2_7; // 0x28
	::MoleMole::UIGeneralConsoleBtnWidgetController* Field_2_0; // 0x30
	::Class_2_890E2470C613CE36_Class_2_B9D1E9290D30E77D* Field_2_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_890E2470C613CE36__CTOR_OFFSET))(this);
	}

	::Enum_3_C64432A6918BE61F Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_C64432A6918BE61F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_890E2470C613CE36_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_207* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_207*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_890E2470C613CE36_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_890E2470C613CE36_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_890E2470C613CE36_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
