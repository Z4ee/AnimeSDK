#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/StateMachine/StateType.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_STATEMACHINE_STATEID_EQUALS_OFFSET UNITYSDK_OFFSET(0x976070)
#define FOUNDATION_STATEMACHINE_STATEID_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xACD380)
#define FOUNDATION_STATEMACHINE_STATEID_GET_ISSTATE_OFFSET UNITYSDK_OFFSET(0xACD3C0)
#define FOUNDATION_STATEMACHINE_STATEID_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xACD3A0)
#define FOUNDATION_STATEMACHINE_STATEID_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xACD390)
#define FOUNDATION_STATEMACHINE_STATEID_NEWSTATE_OFFSET UNITYSDK_OFFSET(0x1FBE2E60)
#define FOUNDATION_STATEMACHINE_STATEID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBE2DF0)
#define FOUNDATION_STATEMACHINE_STATEID__CTOR_OFFSET UNITYSDK_OFFSET(0x324490)

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int StateId_TypeDefinitionIndex = 8529;

	struct alignas(1) StateId
	{
		static ::Foundation::StateMachine::StateId* StaticGet_Invalid()
		{
			return (::Foundation::StateMachine::StateId*)Il2CppClass::FromTypeDefinitionIndex(StateId_TypeDefinitionIndex)->GetStaticField(0x3BE0);
		}
		::System::Byte Data; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_STATEID__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Byte data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_STATEID__CTOR_OFFSET))(this, data);
		}

		::System::Byte get_Index()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_STATEID_GET_INDEX_OFFSET))(this);
		}

		::Foundation::StateMachine::StateType get_Type()
		{
			return ((::Foundation::StateMachine::StateType(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_STATEID_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_STATEID_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean get_IsState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_STATEID_GET_ISSTATE_OFFSET))(this);
		}

		::System::Boolean Equals(::Foundation::StateMachine::StateId other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::StateMachine::StateId))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_STATEID_EQUALS_OFFSET))(this, other);
		}

		static ::Foundation::StateMachine::StateId NewState(::System::Int32 index)
		{
			return ((::Foundation::StateMachine::StateId(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_STATEID_NEWSTATE_OFFSET))(index);
		}
	};
}
