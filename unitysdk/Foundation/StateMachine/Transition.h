#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/BitSet256.h"
#include "unitysdk/Foundation/StateMachine/StateId.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_STATEMACHINE_TRANSITION_CHECK_OFFSET UNITYSDK_OFFSET(0x9B5670)
#define FOUNDATION_STATEMACHINE_TRANSITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE2C300)
#define FOUNDATION_STATEMACHINE_TRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x9B5650)

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int Transition_TypeDefinitionIndex = 9099;

	struct alignas(8) Transition
	{
		static ::Foundation::StateMachine::Transition* StaticGet_Invalid()
		{
			return (::Foundation::StateMachine::Transition*)Il2CppClass::FromTypeDefinitionIndex(Transition_TypeDefinitionIndex)->GetStaticField(0x3DC0);
		}
		::Foundation::BitSet256 _condition; // 0x10
		::Foundation::StateMachine::StateId _destination; // 0x30

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_TRANSITION__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Foundation::BitSet256 condition, ::Foundation::StateMachine::StateId destination)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::BitSet256, ::Foundation::StateMachine::StateId))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_TRANSITION__CTOR_OFFSET))(this, condition, destination);
		}

		::System::Boolean Check(::Foundation::BitSet256 condition, ::Foundation::StateMachine::StateId& state)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::BitSet256, ::Foundation::StateMachine::StateId&))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_TRANSITION_CHECK_OFFSET))(this, condition, state);
		}
	};
}
