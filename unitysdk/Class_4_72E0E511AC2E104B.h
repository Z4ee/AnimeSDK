#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F78D134D9EB09E5B.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_C376DB68B1C74261;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigChessboardClearUiPostProcess; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_4_72E0E511AC2E104B_METHOD_4_151350DB6BD4CAA1_OFFSET UNITYSDK_OFFSET(0xCE77D20)
#define CLASS_4_72E0E511AC2E104B_METHOD_4_56BA3C214A0172D8_OFFSET UNITYSDK_OFFSET(0xCE77990)
#define CLASS_4_72E0E511AC2E104B_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCE77C90)
#define CLASS_4_72E0E511AC2E104B_METHOD_4_DEAC86EB2AD5D389_OFFSET UNITYSDK_OFFSET(0xCE77B10)
#define CLASS_4_72E0E511AC2E104B__CTOR_OFFSET UNITYSDK_OFFSET(0xCE77C40)

inline static constexpr unsigned int Class_4_72E0E511AC2E104B_TypeDefinitionIndex = 72551;

class Class_4_72E0E511AC2E104B : public ::Class_3_F78D134D9EB09E5B
{
public:
	::MoleMole::UIHollowMainPageController* Field_4_1; // 0x40
	::MoleMole::Config::ConfigChessboardClearUiPostProcess* Field_4_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_72E0E511AC2E104B__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_56BA3C214A0172D8(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_4_72E0E511AC2E104B_METHOD_4_56BA3C214A0172D8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_DEAC86EB2AD5D389()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_72E0E511AC2E104B_METHOD_4_DEAC86EB2AD5D389_OFFSET))(this);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_72E0E511AC2E104B_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_4_151350DB6BD4CAA1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_4_72E0E511AC2E104B_METHOD_4_151350DB6BD4CAA1_OFFSET))(this, a1, a2, a3, a4);
	}
};
