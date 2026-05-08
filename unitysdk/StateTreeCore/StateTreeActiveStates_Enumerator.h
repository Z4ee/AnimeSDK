#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STATETREECORE_STATETREEACTIVESTATES_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9EB490)
#define STATETREECORE_STATETREEACTIVESTATES_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9EB4A0)
#define STATETREECORE_STATETREEACTIVESTATES_ENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9EB480)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeActiveStates_Enumerator_TypeDefinitionIndex = 28295;

	struct alignas(8) StateTreeActiveStates_Enumerator
	{
		::System::UInt16* _states; // 0x10
		::System::Int32 _numStates; // 0x18
		::System::Int32 _index; // 0x1C

		::System::Void _ctor(::System::UInt16* states, ::System::Int32 numStates)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16*, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_ENUMERATOR__CTOR_OFFSET))(this, states, numStates);
		}

		/*
		::StateTreeCore::StateTreeStateHandle get_Current()
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_ENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
		*/

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEACTIVESTATES_ENUMERATOR_MOVENEXT_OFFSET))(this);
		}
	};
}
