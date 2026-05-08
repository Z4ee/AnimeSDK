#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F78D134D9EB09E5B.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_C376DB68B1C74261;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigChessboardPlayStartPerform; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_4_8A2A462327274480_METHOD_4_151350DB6BD4CAA1_OFFSET UNITYSDK_OFFSET(0x15089060)
#define CLASS_4_8A2A462327274480_METHOD_4_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x15088D20)
#define CLASS_4_8A2A462327274480_METHOD_4_56BA3C214A0172D8_OFFSET UNITYSDK_OFFSET(0x15088BC0)
#define CLASS_4_8A2A462327274480_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15089070)
#define CLASS_4_8A2A462327274480__CTOR_OFFSET UNITYSDK_OFFSET(0x15089010)

inline static constexpr unsigned int Class_4_8A2A462327274480_TypeDefinitionIndex = 56520;

class Class_4_8A2A462327274480 : public ::Class_3_F78D134D9EB09E5B
{
public:
	::MoleMole::Config::ConfigChessboardPlayStartPerform* Field_4_1; // 0x40
	::MoleMole::UIHollowMainPageController* Field_4_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8A2A462327274480__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_56BA3C214A0172D8(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_4_8A2A462327274480_METHOD_4_56BA3C214A0172D8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8A2A462327274480_METHOD_4_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::Void Method_4_151350DB6BD4CAA1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_4_8A2A462327274480_METHOD_4_151350DB6BD4CAA1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8A2A462327274480_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}
};
