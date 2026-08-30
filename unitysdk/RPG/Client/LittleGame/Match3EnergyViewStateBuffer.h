#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_413;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_LITTLEGAME_MATCH3ENERGYVIEWSTATEBUFFER_EXECUTESEQUENCE_OFFSET UNITYSDK_OFFSET(0xD517AB0)
#define RPG_CLIENT_LITTLEGAME_MATCH3ENERGYVIEWSTATEBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0xD517BB0)
#define RPG_CLIENT_LITTLEGAME_MATCH3ENERGYVIEWSTATEBUFFER__ONSEQUENCEFINISH_OFFSET UNITYSDK_OFFSET(0xD517B60)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int Match3EnergyViewStateBuffer_TypeDefinitionIndex = 76093;

	class Match3EnergyViewStateBuffer : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_413* CommandSequence; // 0x10
		::Class_0_16E4307DCC419505_413* IncreaseCommand; // 0x18
		::System::Action* OnFinishIncrease; // 0x20
		::System::Func_2<::System::UInt32, ::Class_0_16E4307DCC419505_413*>* GenIncreaseCommand; // 0x28
		::System::Boolean CanDecrease; // 0x30
		::System::Boolean WaitIncrease; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCH3ENERGYVIEWSTATEBUFFER__CTOR_OFFSET))(this);
		}

		::System::Void ExecuteSequence(::Class_0_16E4307DCC419505_413* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_413*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCH3ENERGYVIEWSTATEBUFFER_EXECUTESEQUENCE_OFFSET))(this, a1);
		}

		::System::Void _OnSequenceFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCH3ENERGYVIEWSTATEBUFFER__ONSEQUENCEFINISH_OFFSET))(this, a1);
		}
	};
}
