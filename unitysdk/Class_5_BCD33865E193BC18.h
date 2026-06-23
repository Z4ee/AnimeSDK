#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"

class Class_1_C376DB68B1C74261;
class Class_2_9DCE2FC33F67E8A2;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigBigTVMinigameSwitchNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_BCD33865E193BC18_METHOD_5_6597F9D2D4A0542F_OFFSET UNITYSDK_OFFSET(0xE047EE0)
#define CLASS_5_BCD33865E193BC18_METHOD_5_89FECF6268CD19AC_OFFSET UNITYSDK_OFFSET(0xE047E60)
#define CLASS_5_BCD33865E193BC18_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE047FE0)
#define CLASS_5_BCD33865E193BC18__CTOR_OFFSET UNITYSDK_OFFSET(0xE047F80)

inline static constexpr unsigned int Class_5_BCD33865E193BC18_TypeDefinitionIndex = 59081;

class Class_5_BCD33865E193BC18 : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigBigTVMinigameSwitchNode*>
{
public:
	::MoleMole::Config::ConfigBigTVMinigameSwitchNode* Field_5_0; // 0x40
	::MoleMole::UIHollowMainPageController* Field_5_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_BCD33865E193BC18__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_89FECF6268CD19AC(::MoleMole::Config::ConfigBigTVMinigameSwitchNode* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigBigTVMinigameSwitchNode*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_5_BCD33865E193BC18_METHOD_5_89FECF6268CD19AC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_6597F9D2D4A0542F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_BCD33865E193BC18_METHOD_5_6597F9D2D4A0542F_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_BCD33865E193BC18_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}
};
