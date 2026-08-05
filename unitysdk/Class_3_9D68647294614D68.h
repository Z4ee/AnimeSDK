#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_3.h"

class Class_1_43BD383C98B4C0C5_25;
class Class_1_D3581D8A71834B25;
class Class_2_F5737224A0253470;
class Class_4_B99AA5AE371451AA;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define CLASS_3_9D68647294614D68_METHOD_3_1C1D8F032CA6010E_OFFSET UNITYSDK_OFFSET(0x13C33BC0)
#define CLASS_3_9D68647294614D68_METHOD_3_1D3EA226A468280A_OFFSET UNITYSDK_OFFSET(0x13C33930)
#define CLASS_3_9D68647294614D68__CTOR_OFFSET UNITYSDK_OFFSET(0x13C33BB0)

inline static constexpr unsigned int Class_3_9D68647294614D68_TypeDefinitionIndex = 79022;

class Class_3_9D68647294614D68 : public ::Class_2_A48F3719AA1CF200_3
{
public:
	::Class_2_F5737224A0253470* Field_3_0; // 0x28
	::Class_4_B99AA5AE371451AA* Field_3_2; // 0x30
	::MoleMole::HollowChessboard::HollowEntity* Field_3_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D68647294614D68__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1D3EA226A468280A(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_3_9D68647294614D68_METHOD_3_1D3EA226A468280A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_1C1D8F032CA6010E(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_3_9D68647294614D68_METHOD_3_1C1D8F032CA6010E_OFFSET))(this, a1, a2, a3, a4);
	}
};
