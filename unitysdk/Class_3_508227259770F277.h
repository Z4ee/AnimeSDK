#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_3.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_C376DB68B1C74261;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_508227259770F277_METHOD_3_17174279A9AEDB78_OFFSET UNITYSDK_OFFSET(0xFA9AB80)
#define CLASS_3_508227259770F277_METHOD_3_1C1D8F032CA6010E_OFFSET UNITYSDK_OFFSET(0xFA9B0B0)
#define CLASS_3_508227259770F277_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xFA9B010)
#define CLASS_3_508227259770F277_METHOD_3_E01F7F8194F0C4E7_OFFSET UNITYSDK_OFFSET(0xFA9A7C0)
#define CLASS_3_508227259770F277__CTOR_OFFSET UNITYSDK_OFFSET(0xFA9B000)

inline static constexpr unsigned int Class_3_508227259770F277_TypeDefinitionIndex = 75010;

class Class_3_508227259770F277 : public ::Class_2_A48F3719AA1CF200_3
{
public:
	::UnityEngine::GameObject* Field_3_0; // 0x28
	::UnityEngine::AnimationCurve* Field_3_1; // 0x30
	::System::Single Field_3_5; // 0x38
	::System::Single Field_3_2; // 0x3C
	::System::Single Field_3_4; // 0x40
	::System::Single Field_3_3; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_508227259770F277__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_E01F7F8194F0C4E7(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_3_508227259770F277_METHOD_3_E01F7F8194F0C4E7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_17174279A9AEDB78(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_508227259770F277_METHOD_3_17174279A9AEDB78_OFFSET))(this, a1);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_508227259770F277_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_3_1C1D8F032CA6010E(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_3_508227259770F277_METHOD_3_1C1D8F032CA6010E_OFFSET))(this, a1, a2, a3, a4);
	}
};
