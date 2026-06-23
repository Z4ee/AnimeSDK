#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"

class Class_1_C376DB68B1C74261;
class Class_2_9DCE2FC33F67E8A2;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigHollowManualAccelerate; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_33F38AF548B4B913_METHOD_5_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x109E79B0)
#define CLASS_5_33F38AF548B4B913_METHOD_5_B0072640B37B7CEE_OFFSET UNITYSDK_OFFSET(0x109E7920)
#define CLASS_5_33F38AF548B4B913_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x109E7AE0)
#define CLASS_5_33F38AF548B4B913__CTOR_OFFSET UNITYSDK_OFFSET(0x109E7A80)

inline static constexpr unsigned int Class_5_33F38AF548B4B913_TypeDefinitionIndex = 43400;

class Class_5_33F38AF548B4B913 : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigHollowManualAccelerate*>
{
public:
	::MoleMole::UIHollowMainPageController* Field_5_1; // 0x40
	::System::Boolean Field_5_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_33F38AF548B4B913__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_B0072640B37B7CEE(::MoleMole::Config::ConfigHollowManualAccelerate* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowManualAccelerate*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_5_33F38AF548B4B913_METHOD_5_B0072640B37B7CEE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_33F38AF548B4B913_METHOD_5_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_33F38AF548B4B913_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}
};
