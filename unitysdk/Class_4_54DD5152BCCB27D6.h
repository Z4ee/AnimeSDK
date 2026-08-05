#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F78D134D9EB09E5B.h"
#include "unitysdk/Enum_3_C6E8F7731271F88A.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/ProtoScript/NodeState.h"
#include "unitysdk/ProtoScript/NodeVisible.h"

class Class_1_43BD383C98B4C0C5_25;
class Class_1_D3581D8A71834B25;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_54DD5152BCCB27D6_METHOD_4_151350DB6BD4CAA1_OFFSET UNITYSDK_OFFSET(0x1560DAF0)
#define CLASS_4_54DD5152BCCB27D6_METHOD_4_63617D5D5992EC9F_OFFSET UNITYSDK_OFFSET(0x1560D4C0)
#define CLASS_4_54DD5152BCCB27D6_METHOD_4_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x1560D630)
#define CLASS_4_54DD5152BCCB27D6_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1560DB00)
#define CLASS_4_54DD5152BCCB27D6__CTOR_OFFSET UNITYSDK_OFFSET(0x1560DAA0)

inline static constexpr unsigned int Class_4_54DD5152BCCB27D6_TypeDefinitionIndex = 88552;

class Class_4_54DD5152BCCB27D6 : public ::Class_3_F78D134D9EB09E5B
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_4_4; // 0x40
	::Enum_3_C6E8F7731271F88A Field_4_5; // 0x48
	::ProtoScript::NodeState Field_4_6; // 0x4C
	::System::Int32 Field_4_7; // 0x50
	::ProtoScript::NodeVisible Field_4_0; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_54DD5152BCCB27D6__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_63617D5D5992EC9F(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_4_54DD5152BCCB27D6_METHOD_4_63617D5D5992EC9F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_54DD5152BCCB27D6_METHOD_4_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_4_151350DB6BD4CAA1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_25* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_4_54DD5152BCCB27D6_METHOD_4_151350DB6BD4CAA1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_54DD5152BCCB27D6_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}
};
