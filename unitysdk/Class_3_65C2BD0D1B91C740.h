#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_3.h"

class Class_1_43BD383C98B4C0C5_25;
class Class_1_D3581D8A71834B25;
namespace MoleMole::Config { class ConfigCurveCtrlBaseNode; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_3_65C2BD0D1B91C740_METHOD_3_0E6B307A2494C4EE_OFFSET UNITYSDK_OFFSET(0x175D1FA0)
#define CLASS_3_65C2BD0D1B91C740_METHOD_3_1C1D8F032CA6010E_OFFSET UNITYSDK_OFFSET(0x175D2260)
#define CLASS_3_65C2BD0D1B91C740_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x175D2340)
#define CLASS_3_65C2BD0D1B91C740_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x175D1F20)
#define CLASS_3_65C2BD0D1B91C740_METHOD_3_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0x175D1C40)
#define CLASS_3_65C2BD0D1B91C740_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x175D21D0)
#define CLASS_3_65C2BD0D1B91C740_METHOD_3_DA75C361EBED2E92_OFFSET UNITYSDK_OFFSET(0x175D1AE0)
#define CLASS_3_65C2BD0D1B91C740__CTOR_OFFSET UNITYSDK_OFFSET(0x175D21C0)

inline static constexpr unsigned int Class_3_65C2BD0D1B91C740_TypeDefinitionIndex = 51874;

class Class_3_65C2BD0D1B91C740 : public ::Class_2_A48F3719AA1CF200_3
{
public:
	::UnityEngine::AnimationCurve* Field_3_2; // 0x28
	::MoleMole::Config::ConfigCurveCtrlBaseNode* Field_3_3; // 0x30
	::System::Single Field_3_0; // 0x38
	::System::Single Field_3_6; // 0x3C
	::System::Single Field_3_1; // 0x40
	::System::Single Field_3_7; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65C2BD0D1B91C740__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_DA75C361EBED2E92(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_3_65C2BD0D1B91C740_METHOD_3_DA75C361EBED2E92_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_B1EA412ACAE87C15()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65C2BD0D1B91C740_METHOD_3_B1EA412ACAE87C15_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65C2BD0D1B91C740_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_0E6B307A2494C4EE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_65C2BD0D1B91C740_METHOD_3_0E6B307A2494C4EE_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65C2BD0D1B91C740_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_1C1D8F032CA6010E(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_3_65C2BD0D1B91C740_METHOD_3_1C1D8F032CA6010E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_65C2BD0D1B91C740_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}
};
