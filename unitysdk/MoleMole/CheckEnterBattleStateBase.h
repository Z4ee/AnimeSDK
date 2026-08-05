#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"

#define MOLEMOLE_CHECKENTERBATTLESTATEBASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12A2D4B0)
#define MOLEMOLE_CHECKENTERBATTLESTATEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x12A2D510)
#define MOLEMOLE_CHECKENTERBATTLESTATEBASE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12A2D5A0)

namespace MoleMole
{
	inline static constexpr unsigned int CheckEnterBattleStateBase_TypeDefinitionIndex = 60216;

	class CheckEnterBattleStateBase : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::MoleMole::Config::EnterBattleState TargetEnterBattleState; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKENTERBATTLESTATEBASE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKENTERBATTLESTATEBASE_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKENTERBATTLESTATEBASE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
