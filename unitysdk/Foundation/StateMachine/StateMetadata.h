#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_STATEMACHINE_STATEMETADATA_GET_TRANSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0xACBD50)
#define FOUNDATION_STATEMACHINE_STATEMETADATA_GET_TRANSITIONINDEX_OFFSET UNITYSDK_OFFSET(0xACBD40)

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int StateMetadata_TypeDefinitionIndex = 8700;

	struct alignas(2) StateMetadata
	{
		::System::UInt16 _data; // 0x10

		::System::UInt16 get_TransitionIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_STATEMETADATA_GET_TRANSITIONINDEX_OFFSET))(this);
		}

		::System::Byte get_TransitionCount()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_STATEMETADATA_GET_TRANSITIONCOUNT_OFFSET))(this);
		}
	};
}
