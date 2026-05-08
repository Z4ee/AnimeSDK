#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_3.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_C376DB68B1C74261;
class Class_2_26C087FD4946396E;
namespace MoleMole::Config { class ConfigHollowResultBlinkAnimNode; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_3_90FF62E9C94F6103_METHOD_3_1C1D8F032CA6010E_OFFSET UNITYSDK_OFFSET(0x140DB800)
#define CLASS_3_90FF62E9C94F6103_METHOD_3_4962F047950FECC1_OFFSET UNITYSDK_OFFSET(0x140DB4D0)
#define CLASS_3_90FF62E9C94F6103_METHOD_3_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x140DB670)
#define CLASS_3_90FF62E9C94F6103_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x140DB770)
#define CLASS_3_90FF62E9C94F6103__CTOR_OFFSET UNITYSDK_OFFSET(0x140DB760)

inline static constexpr unsigned int Class_3_90FF62E9C94F6103_TypeDefinitionIndex = 72628;

class Class_3_90FF62E9C94F6103 : public ::Class_2_A48F3719AA1CF200_3
{
public:
	::Class_2_26C087FD4946396E* Field_3_0; // 0x28
	::MoleMole::Config::ConfigHollowResultBlinkAnimNode* Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90FF62E9C94F6103__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4962F047950FECC1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_3_90FF62E9C94F6103_METHOD_3_4962F047950FECC1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90FF62E9C94F6103_METHOD_3_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90FF62E9C94F6103_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_1C1D8F032CA6010E(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_3_90FF62E9C94F6103_METHOD_3_1C1D8F032CA6010E_OFFSET))(this, a1, a2, a3, a4);
	}
};
