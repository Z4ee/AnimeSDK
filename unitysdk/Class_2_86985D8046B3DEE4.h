#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_D6D284A69AB5382B.h"

class Class_0_16E4307DCC419505_132;
class Class_2_86985D8046B3DEE4_Class_2_8504E12A716501A1_5;
namespace MoleMole { class UISurfJumpChildWindowController; }
namespace MoleMole { class UISurfSpeedUpChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_86985D8046B3DEE4_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xE903090)
#define CLASS_2_86985D8046B3DEE4_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xE902FC0)
#define CLASS_2_86985D8046B3DEE4_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0xE902FD0)
#define CLASS_2_86985D8046B3DEE4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE9030F0)
#define CLASS_2_86985D8046B3DEE4__CTOR_OFFSET UNITYSDK_OFFSET(0xE9030E0)

inline static constexpr unsigned int Class_2_86985D8046B3DEE4_TypeDefinitionIndex = 49934;

class Class_2_86985D8046B3DEE4 : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::Class_2_86985D8046B3DEE4_Class_2_8504E12A716501A1_5* Field_2_0; // 0x28
	::MoleMole::UISurfJumpChildWindowController* Field_2_2; // 0x30
	::MoleMole::UISurfSpeedUpChildWindowController* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86985D8046B3DEE4__CTOR_OFFSET))(this);
	}

	::Enum_3_D6D284A69AB5382B Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D6D284A69AB5382B(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86985D8046B3DEE4_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_132* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_132*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_86985D8046B3DEE4_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86985D8046B3DEE4_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86985D8046B3DEE4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
