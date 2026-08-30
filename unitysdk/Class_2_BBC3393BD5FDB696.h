#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_B8FF829EFDD29B81;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_ShowToast; }

#define CLASS_2_BBC3393BD5FDB696_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x16913850)
#define CLASS_2_BBC3393BD5FDB696_METHOD_2_3CAB3F134E5CEF52_OFFSET UNITYSDK_OFFSET(0x169133C0)
#define CLASS_2_BBC3393BD5FDB696_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16913810)
#define CLASS_2_BBC3393BD5FDB696__CTOR_OFFSET UNITYSDK_OFFSET(0x16913340)

inline static constexpr unsigned int Class_2_BBC3393BD5FDB696_TypeDefinitionIndex = 77450;

class Class_2_BBC3393BD5FDB696 : public ::Class_1_F65B6F8790DF074B
{
public:
	::RPG::GameCore::ChenLingBattleAbility_ShowToast* HDNEDLNJHOK; // 0x28

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_B8FF829EFDD29B81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_2_BBC3393BD5FDB696__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3CAB3F134E5CEF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBC3393BD5FDB696_METHOD_2_3CAB3F134E5CEF52_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBC3393BD5FDB696_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BBC3393BD5FDB696_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}
};
