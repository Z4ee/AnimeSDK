#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_341;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_LITTLEGAME_MATCH3ENERGYVIEWSTATEBUFFER_EXECUTESEQUENCE_OFFSET UNITYSDK_OFFSET(0xA6D9580)
#define RPG_CLIENT_LITTLEGAME_MATCH3ENERGYVIEWSTATEBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0xA6D9670)
#define RPG_CLIENT_LITTLEGAME_MATCH3ENERGYVIEWSTATEBUFFER__ONSEQUENCEFINISH_OFFSET UNITYSDK_OFFSET(0xA6D9620)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int Match3EnergyViewStateBuffer_TypeDefinitionIndex = 70327;

	class Match3EnergyViewStateBuffer : public ::System::Object
	{
	public:
		::System::Func_2<::System::UInt32, ::Class_0_16E4307DCC419505_341*>* GenIncreaseCommand; // 0x10
		::System::Action* OnFinishIncrease; // 0x18
		::Class_0_16E4307DCC419505_341* IncreaseCommand; // 0x20
		::Class_0_16E4307DCC419505_341* CommandSequence; // 0x28
		::System::Boolean CanDecrease; // 0x30
		::System::Boolean WaitIncrease; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCH3ENERGYVIEWSTATEBUFFER__CTOR_OFFSET))(this);
		}

		::System::Void ExecuteSequence(::Class_0_16E4307DCC419505_341* seq)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_341*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCH3ENERGYVIEWSTATEBUFFER_EXECUTESEQUENCE_OFFSET))(this, seq);
		}

		::System::Void _OnSequenceFinish(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCH3ENERGYVIEWSTATEBUFFER__ONSEQUENCEFINISH_OFFSET))(this, success);
		}
	};
}
