#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_BD3C09A68C53DE66.h"

class Class_0_16E4307DCC419505_199;
class Class_2_9AC5EA3BA3A6ED41_Class_2_8504E12A716501A1_6;
namespace MoleMole { class UIInLevelEavesdropChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_9AC5EA3BA3A6ED41_METHOD_2_3BFE3B9EF8374F61_OFFSET UNITYSDK_OFFSET(0x154611F0)
#define CLASS_2_9AC5EA3BA3A6ED41_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x15461110)
#define CLASS_2_9AC5EA3BA3A6ED41_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x15461120)
#define CLASS_2_9AC5EA3BA3A6ED41__CTOR_OFFSET UNITYSDK_OFFSET(0x154611E0)

inline static constexpr unsigned int Class_2_9AC5EA3BA3A6ED41_TypeDefinitionIndex = 49093;

class Class_2_9AC5EA3BA3A6ED41 : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::MoleMole::UIInLevelEavesdropChildWindowController* Field_2_0; // 0x28
	::Class_2_9AC5EA3BA3A6ED41_Class_2_8504E12A716501A1_6* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AC5EA3BA3A6ED41__CTOR_OFFSET))(this);
	}

	::Enum_3_BD3C09A68C53DE66 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_BD3C09A68C53DE66(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AC5EA3BA3A6ED41_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_199* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_199*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_9AC5EA3BA3A6ED41_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3BFE3B9EF8374F61()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AC5EA3BA3A6ED41_METHOD_2_3BFE3B9EF8374F61_OFFSET))(this);
	}
};
