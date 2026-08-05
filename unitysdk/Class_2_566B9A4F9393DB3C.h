#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_C64432A6918BE61F.h"

class Class_0_16E4307DCC419505_207;
class Class_2_566B9A4F9393DB3C_Class_2_8504E12A716501A1_5;
namespace MoleMole { class UIGeneralHoldInteractInfoChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_566B9A4F9393DB3C_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x12790340)
#define CLASS_2_566B9A4F9393DB3C_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x12790350)
#define CLASS_2_566B9A4F9393DB3C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x127904F0)
#define CLASS_2_566B9A4F9393DB3C_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x12790410)
#define CLASS_2_566B9A4F9393DB3C__CTOR_OFFSET UNITYSDK_OFFSET(0x127904E0)

inline static constexpr unsigned int Class_2_566B9A4F9393DB3C_TypeDefinitionIndex = 54866;

class Class_2_566B9A4F9393DB3C : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::Class_2_566B9A4F9393DB3C_Class_2_8504E12A716501A1_5* Field_2_0; // 0x28
	::MoleMole::UIGeneralHoldInteractInfoChildWindowController* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_566B9A4F9393DB3C__CTOR_OFFSET))(this);
	}

	::Enum_3_C64432A6918BE61F Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_C64432A6918BE61F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_566B9A4F9393DB3C_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_207* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_207*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_566B9A4F9393DB3C_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_566B9A4F9393DB3C_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_566B9A4F9393DB3C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
