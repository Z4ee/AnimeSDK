#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class ChenLingBattleAnimEventConfig; }

#define CLASS_2_03116A69433FA129___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D6880)
#define CLASS_2_03116A69433FA129___C__DISPLAYCLASS12_0___TRYAPPLYEVENT_B__0_OFFSET UNITYSDK_OFFSET(0xB5D6B40)

inline static constexpr unsigned int Class_2_03116A69433FA129___c__DisplayClass12_0_TypeDefinitionIndex = 77441;

class Class_2_03116A69433FA129___c__DisplayClass12_0 : public ::System::Object
{
public:
	::RPG::PoolList_1<::RPG::GameCore::ChenLingBattleAnimEventConfig*>* executedEvents; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03116A69433FA129___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TryApplyEvent_b__0(::RPG::GameCore::ChenLingBattleAnimEventConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChenLingBattleAnimEventConfig*))((::PBYTE)hIl2Cpp + CLASS_2_03116A69433FA129___C__DISPLAYCLASS12_0___TRYAPPLYEVENT_B__0_OFFSET))(this, a1);
	}
};
