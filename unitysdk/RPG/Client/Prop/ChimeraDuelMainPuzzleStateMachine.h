#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_144075C1871C33A9;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Prop { class IChimeraDuelMainPuzzleState; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_ACQUIRE_OFFSET UNITYSDK_OFFSET(0xC519160)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC511D00)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_EXIT_OFFSET UNITYSDK_OFFSET(0xC5171B0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_GETSTATE_OFFSET UNITYSDK_OFFSET(0xC5193C0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xC519140)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_INIT_OFFSET UNITYSDK_OFFSET(0xC510F80)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_PREPAREONSTARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xC511510)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_RELEASE_OFFSET UNITYSDK_OFFSET(0xC519240)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xC519150)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_START_OFFSET UNITYSDK_OFFSET(0xC512D20)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_SWITCHTO_OFFSET UNITYSDK_OFFSET(0xC516F20)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE__CTOR_OFFSET UNITYSDK_OFFSET(0xC510D20)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleStateMachine_TypeDefinitionIndex = 72826;

	class ChimeraDuelMainPuzzleStateMachine : public ::System::Object
	{
	public:
		::System::Action* _ExitHandler; // 0x10
		::System::Collections::Generic::SortedDictionary_2<::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType, ::RPG::Client::Prop::IChimeraDuelMainPuzzleState*>* _States; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType>* _LocksBeforeAutoExit; // 0x20
		::RPG::Client::Prop::IChimeraDuelMainPuzzleState* _CurrentState_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE__CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::IChimeraDuelMainPuzzleState* get_CurrentState()
		{
			return ((::RPG::Client::Prop::IChimeraDuelMainPuzzleState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_GET_CURRENTSTATE_OFFSET))(this);
		}

		::System::Void set_CurrentState(::RPG::Client::Prop::IChimeraDuelMainPuzzleState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::IChimeraDuelMainPuzzleState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_SET_CURRENTSTATE_OFFSET))(this, a1);
		}

		::System::Void Init(::Class_1_144075C1871C33A9* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_144075C1871C33A9*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PrepareOnStartPuzzle()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_PREPAREONSTARTPUZZLE_OFFSET))(this);
		}

		::System::Void Start(::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_START_OFFSET))(this, a1);
		}

		::System::Void SwitchTo(::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_SWITCHTO_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_EXIT_OFFSET))(this);
		}

		::System::Void Acquire(::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_ACQUIRE_OFFSET))(this, a1);
		}

		::System::Void Release(::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_RELEASE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::IChimeraDuelMainPuzzleState* GetState(::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType a1)
		{
			return ((::RPG::Client::Prop::IChimeraDuelMainPuzzleState*(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESTATEMACHINE_GETSTATE_OFFSET))(this, a1);
		}
	};
}
