#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F78D134D9EB09E5B.h"

class Class_1_43BD383C98B4C0C5_25;
class Class_1_D3581D8A71834B25;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigEnableChessboardManipulate; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_4_6A86DF978AFA36A4_METHOD_4_151350DB6BD4CAA1_OFFSET UNITYSDK_OFFSET(0x11681BF0)
#define CLASS_4_6A86DF978AFA36A4_METHOD_4_22F2449E791F5BD9_OFFSET UNITYSDK_OFFSET(0x11681870)
#define CLASS_4_6A86DF978AFA36A4_METHOD_4_56BA3C214A0172D8_OFFSET UNITYSDK_OFFSET(0x116816E0)
#define CLASS_4_6A86DF978AFA36A4_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11681C00)
#define CLASS_4_6A86DF978AFA36A4__CTOR_OFFSET UNITYSDK_OFFSET(0x11681BA0)

inline static constexpr unsigned int Class_4_6A86DF978AFA36A4_TypeDefinitionIndex = 69949;

class Class_4_6A86DF978AFA36A4 : public ::Class_3_F78D134D9EB09E5B
{
public:
	::MoleMole::Config::ConfigEnableChessboardManipulate* Field_4_7; // 0x40
	::MoleMole::UIHollowMainPageController* Field_4_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6A86DF978AFA36A4__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_56BA3C214A0172D8(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_4_6A86DF978AFA36A4_METHOD_4_56BA3C214A0172D8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_22F2449E791F5BD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6A86DF978AFA36A4_METHOD_4_22F2449E791F5BD9_OFFSET))(this);
	}

	::System::Void Method_4_151350DB6BD4CAA1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_4_6A86DF978AFA36A4_METHOD_4_151350DB6BD4CAA1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6A86DF978AFA36A4_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}
};
