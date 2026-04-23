#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class ChenLingBattleAnimEventConfig; }

#define CLASS_2_8F11D5964BEE021D___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12387070)
#define CLASS_2_8F11D5964BEE021D___C__DISPLAYCLASS12_0___TRYAPPLYEVENT_B__0_OFFSET UNITYSDK_OFFSET(0x12387390)

inline static constexpr unsigned int Class_2_8F11D5964BEE021D___c__DisplayClass12_0_TypeDefinitionIndex = 71409;

class Class_2_8F11D5964BEE021D___c__DisplayClass12_0 : public ::System::Object
{
public:
	::RPG::PoolList_1<::RPG::GameCore::ChenLingBattleAnimEventConfig*>* executedEvents; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F11D5964BEE021D___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TryApplyEvent_b__0(::RPG::GameCore::ChenLingBattleAnimEventConfig* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChenLingBattleAnimEventConfig*))((::PBYTE)hIl2Cpp + CLASS_2_8F11D5964BEE021D___C__DISPLAYCLASS12_0___TRYAPPLYEVENT_B__0_OFFSET))(this, e);
	}
};
