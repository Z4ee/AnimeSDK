#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_STATEMACHINE_MACHINE_FRAME_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xAD2CD0)
#define FOUNDATION_STATEMACHINE_MACHINE_FRAME_GET_TRANSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0xACBD50)
#define FOUNDATION_STATEMACHINE_MACHINE_FRAME_GET_TRANSITIONINDEX_OFFSET UNITYSDK_OFFSET(0xACBD40)
#define FOUNDATION_STATEMACHINE_MACHINE_FRAME_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAD2D00)
#define FOUNDATION_STATEMACHINE_MACHINE_FRAME_SET_TRANSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0xAD2D70)
#define FOUNDATION_STATEMACHINE_MACHINE_FRAME_SET_TRANSITIONINDEX_OFFSET UNITYSDK_OFFSET(0xAD2D50)
#define FOUNDATION_STATEMACHINE_MACHINE_FRAME__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAD2D30)
#define FOUNDATION_STATEMACHINE_MACHINE_FRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x3F82D0)

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int Machine_Frame_TypeDefinitionIndex = 8783;

	struct alignas(2) Machine_Frame
	{
		::System::UInt16 _data; // 0x10

		/*
		::System::Void _ctor(::Foundation::StateMachine::StateMetadata metadata)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::StateMachine::StateMetadata))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINE_FRAME__CTOR_OFFSET))(this, metadata);
		}
		*/

		::System::Void _ctor_1(::System::Int32 transitionIndex, ::System::Int32 transitionCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINE_FRAME__CTOR_1_OFFSET))(this, transitionIndex, transitionCount);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINE_FRAME_GET_ISVALID_OFFSET))(this);
		}

		::System::Int32 MoveNext()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINE_FRAME_MOVENEXT_OFFSET))(this);
		}

		::System::UInt16 get_TransitionIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINE_FRAME_GET_TRANSITIONINDEX_OFFSET))(this);
		}

		::System::Void set_TransitionIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINE_FRAME_SET_TRANSITIONINDEX_OFFSET))(this, value);
		}

		::System::Byte get_TransitionCount()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINE_FRAME_GET_TRANSITIONCOUNT_OFFSET))(this);
		}

		::System::Void set_TransitionCount(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_MACHINE_FRAME_SET_TRANSITIONCOUNT_OFFSET))(this, value);
		}
	};
}
