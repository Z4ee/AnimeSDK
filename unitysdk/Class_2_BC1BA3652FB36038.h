#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_C64432A6918BE61F.h"

class Class_0_16E4307DCC419505_207;
class Class_2_BC1BA3652FB36038_Class_2_8504E12A716501A1_26;
namespace MoleMole { class UIGeneralInteractingContainerController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_BC1BA3652FB36038_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xDC905A0)
#define CLASS_2_BC1BA3652FB36038_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0xDC905B0)
#define CLASS_2_BC1BA3652FB36038_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDC90810)
#define CLASS_2_BC1BA3652FB36038_METHOD_2_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0xDC90670)
#define CLASS_2_BC1BA3652FB36038__CTOR_OFFSET UNITYSDK_OFFSET(0xDC90800)

inline static constexpr unsigned int Class_2_BC1BA3652FB36038_TypeDefinitionIndex = 78946;

class Class_2_BC1BA3652FB36038 : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::Class_2_BC1BA3652FB36038_Class_2_8504E12A716501A1_26* Field_2_0; // 0x28
	::MoleMole::UIGeneralInteractingContainerController* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC1BA3652FB36038__CTOR_OFFSET))(this);
	}

	::Enum_3_C64432A6918BE61F Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_C64432A6918BE61F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC1BA3652FB36038_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_207* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_207*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_BC1BA3652FB36038_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC1BA3652FB36038_METHOD_2_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC1BA3652FB36038_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
