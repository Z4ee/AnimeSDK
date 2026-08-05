#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F78D134D9EB09E5B.h"

class Class_1_43BD383C98B4C0C5_25;
class Class_1_D3581D8A71834B25;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigChessPieceBroadcast; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_4_228CB07042662D3B_METHOD_4_151350DB6BD4CAA1_OFFSET UNITYSDK_OFFSET(0x1260A660)
#define CLASS_4_228CB07042662D3B_METHOD_4_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1260A530)
#define CLASS_4_228CB07042662D3B_METHOD_4_56BA3C214A0172D8_OFFSET UNITYSDK_OFFSET(0x12609B80)
#define CLASS_4_228CB07042662D3B_METHOD_4_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x1260A3D0)
#define CLASS_4_228CB07042662D3B_METHOD_4_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x12609D20)
#define CLASS_4_228CB07042662D3B_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1260A5D0)
#define CLASS_4_228CB07042662D3B__CTOR_OFFSET UNITYSDK_OFFSET(0x1260A4E0)

inline static constexpr unsigned int Class_4_228CB07042662D3B_TypeDefinitionIndex = 49064;

class Class_4_228CB07042662D3B : public ::Class_3_F78D134D9EB09E5B
{
public:
	::MoleMole::UIHollowMainPageController* Field_4_6; // 0x40
	::MoleMole::Config::ConfigChessPieceBroadcast* Field_4_5; // 0x48
	::System::Single Field_4_7; // 0x50
	::System::Single Field_4_0; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_228CB07042662D3B__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_56BA3C214A0172D8(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_4_228CB07042662D3B_METHOD_4_56BA3C214A0172D8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_228CB07042662D3B_METHOD_4_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_4_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_228CB07042662D3B_METHOD_4_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Void Method_4_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_228CB07042662D3B_METHOD_4_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_228CB07042662D3B_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_4_151350DB6BD4CAA1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_4_228CB07042662D3B_METHOD_4_151350DB6BD4CAA1_OFFSET))(this, a1, a2, a3, a4);
	}
};
