#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_C64432A6918BE61F.h"

class Class_0_16E4307DCC419505_207;
class Class_2_FDA7ECD95CA79A7A_Class_2_8504E12A716501A1_19;
namespace MoleMole { class UIInLevelCameraHackChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_FDA7ECD95CA79A7A_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x18E5D720)
#define CLASS_2_FDA7ECD95CA79A7A_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x18E5D640)
#define CLASS_2_FDA7ECD95CA79A7A_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x18E5D650)
#define CLASS_2_FDA7ECD95CA79A7A__CTOR_OFFSET UNITYSDK_OFFSET(0x18E5D710)

inline static constexpr unsigned int Class_2_FDA7ECD95CA79A7A_TypeDefinitionIndex = 64740;

class Class_2_FDA7ECD95CA79A7A : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::MoleMole::UIInLevelCameraHackChildWindowController* Field_2_1; // 0x28
	::Class_2_FDA7ECD95CA79A7A_Class_2_8504E12A716501A1_19* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDA7ECD95CA79A7A__CTOR_OFFSET))(this);
	}

	::Enum_3_C64432A6918BE61F Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_C64432A6918BE61F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDA7ECD95CA79A7A_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_207* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_207*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_FDA7ECD95CA79A7A_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDA7ECD95CA79A7A_METHOD_2_0FD0EC313FAAB75A_OFFSET))(this);
	}
};
