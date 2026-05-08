#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_3.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_C376DB68B1C74261;
namespace MoleMole::Config { class ConfigCGCustomGlobalAnimationNode; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace Plugins::TA { class CGCustomGlobalAnimation; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_3_DE6B43739A5F0EED_METHOD_3_1C1D8F032CA6010E_OFFSET UNITYSDK_OFFSET(0x10C03D60)
#define CLASS_3_DE6B43739A5F0EED_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x10C03CC0)
#define CLASS_3_DE6B43739A5F0EED_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10C03E40)
#define CLASS_3_DE6B43739A5F0EED_METHOD_3_DA75C361EBED2E92_OFFSET UNITYSDK_OFFSET(0x10C034C0)
#define CLASS_3_DE6B43739A5F0EED_METHOD_3_E26C99C52BC1E654_OFFSET UNITYSDK_OFFSET(0x10C03610)
#define CLASS_3_DE6B43739A5F0EED_METHOD_3_FE327FD0760E1514_OFFSET UNITYSDK_OFFSET(0x10C03B50)
#define CLASS_3_DE6B43739A5F0EED__CTOR_OFFSET UNITYSDK_OFFSET(0x10C03CB0)

inline static constexpr unsigned int Class_3_DE6B43739A5F0EED_TypeDefinitionIndex = 40657;

class Class_3_DE6B43739A5F0EED : public ::Class_2_A48F3719AA1CF200_3
{
public:
	::Plugins::TA::CGCustomGlobalAnimation* Field_3_4; // 0x28
	::UnityEngine::AnimationCurve* Field_3_2; // 0x30
	::MoleMole::Config::ConfigCGCustomGlobalAnimationNode* Field_3_0; // 0x38
	::System::Single Field_3_1; // 0x40
	::System::Single Field_3_3; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE6B43739A5F0EED__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_DA75C361EBED2E92(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_3_DE6B43739A5F0EED_METHOD_3_DA75C361EBED2E92_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_E26C99C52BC1E654()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE6B43739A5F0EED_METHOD_3_E26C99C52BC1E654_OFFSET))(this);
	}

	::System::Void Method_3_FE327FD0760E1514(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DE6B43739A5F0EED_METHOD_3_FE327FD0760E1514_OFFSET))(this, a1);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DE6B43739A5F0EED_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_3_1C1D8F032CA6010E(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_3_DE6B43739A5F0EED_METHOD_3_1C1D8F032CA6010E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE6B43739A5F0EED_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
