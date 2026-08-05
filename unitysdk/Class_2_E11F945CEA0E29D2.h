#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_C64432A6918BE61F.h"

class Class_0_16E4307DCC419505_207;
class Class_2_E11F945CEA0E29D2_Class_2_8504E12A716501A1_28;
namespace MoleMole { class UIInLevelSkillButtonZiplineChangeChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonZiplineTurnBackChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_E11F945CEA0E29D2_METHOD_2_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x1AC29540)
#define CLASS_2_E11F945CEA0E29D2_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1AC29470)
#define CLASS_2_E11F945CEA0E29D2_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x1AC29480)
#define CLASS_2_E11F945CEA0E29D2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1AC298F0)
#define CLASS_2_E11F945CEA0E29D2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC298E0)

inline static constexpr unsigned int Class_2_E11F945CEA0E29D2_TypeDefinitionIndex = 80803;

class Class_2_E11F945CEA0E29D2 : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::MoleMole::UIInLevelSkillButtonZiplineTurnBackChildWindowController* Field_2_7; // 0x28
	::Class_2_E11F945CEA0E29D2_Class_2_8504E12A716501A1_28* Field_2_6; // 0x30
	::MoleMole::UIInLevelSkillButtonZiplineChangeChildWindowController* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E11F945CEA0E29D2__CTOR_OFFSET))(this);
	}

	::Enum_3_C64432A6918BE61F Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_C64432A6918BE61F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E11F945CEA0E29D2_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_207* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_207*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_E11F945CEA0E29D2_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E11F945CEA0E29D2_METHOD_2_19844080C13BA28F_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E11F945CEA0E29D2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
