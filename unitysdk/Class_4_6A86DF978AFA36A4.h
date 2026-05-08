#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F78D134D9EB09E5B.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_C376DB68B1C74261;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigEnableChessboardManipulate; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_4_6A86DF978AFA36A4_METHOD_4_151350DB6BD4CAA1_OFFSET UNITYSDK_OFFSET(0xFDC1930)
#define CLASS_4_6A86DF978AFA36A4_METHOD_4_563F5F9B787A4FF1_OFFSET UNITYSDK_OFFSET(0xFDC15B0)
#define CLASS_4_6A86DF978AFA36A4_METHOD_4_56BA3C214A0172D8_OFFSET UNITYSDK_OFFSET(0xFDC1430)
#define CLASS_4_6A86DF978AFA36A4_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFDC1940)
#define CLASS_4_6A86DF978AFA36A4__CTOR_OFFSET UNITYSDK_OFFSET(0xFDC18E0)

inline static constexpr unsigned int Class_4_6A86DF978AFA36A4_TypeDefinitionIndex = 57775;

class Class_4_6A86DF978AFA36A4 : public ::Class_3_F78D134D9EB09E5B
{
public:
	::MoleMole::Config::ConfigEnableChessboardManipulate* Field_4_1; // 0x40
	::MoleMole::UIHollowMainPageController* Field_4_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6A86DF978AFA36A4__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_56BA3C214A0172D8(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_4_6A86DF978AFA36A4_METHOD_4_56BA3C214A0172D8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_563F5F9B787A4FF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6A86DF978AFA36A4_METHOD_4_563F5F9B787A4FF1_OFFSET))(this);
	}

	::System::Void Method_4_151350DB6BD4CAA1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_4_6A86DF978AFA36A4_METHOD_4_151350DB6BD4CAA1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6A86DF978AFA36A4_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}
};
