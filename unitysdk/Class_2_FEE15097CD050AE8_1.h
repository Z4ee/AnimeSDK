#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_C64432A6918BE61F.h"

class Class_0_16E4307DCC419505_207;
class Class_2_FEE15097CD050AE8_1_Class_2_60FBFF97221706E7;
namespace MoleMole { class UIInLevelGuideChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_FEE15097CD050AE8_1_METHOD_2_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x178E4D60)
#define CLASS_2_FEE15097CD050AE8_1_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x178E4C90)
#define CLASS_2_FEE15097CD050AE8_1_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x178E4CA0)
#define CLASS_2_FEE15097CD050AE8_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x178E4FB0)
#define CLASS_2_FEE15097CD050AE8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x178E4FA0)

inline static constexpr unsigned int Class_2_FEE15097CD050AE8_1_TypeDefinitionIndex = 79018;

class Class_2_FEE15097CD050AE8_1 : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::MoleMole::UIInLevelGuideChildWindowController* Field_2_7; // 0x28
	::Class_2_FEE15097CD050AE8_1_Class_2_60FBFF97221706E7* Field_2_0; // 0x30
	::MoleMole::UIInLevelGuideChildWindowController* Field_2_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEE15097CD050AE8_1__CTOR_OFFSET))(this);
	}

	::Enum_3_C64432A6918BE61F Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_C64432A6918BE61F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEE15097CD050AE8_1_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_207* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_207*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_FEE15097CD050AE8_1_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEE15097CD050AE8_1_METHOD_2_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEE15097CD050AE8_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
