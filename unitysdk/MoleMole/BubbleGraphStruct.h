#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BubbleSpeakerPair.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole
{
	inline static constexpr unsigned int BubbleGraphStruct_TypeDefinitionIndex = 77408;

	struct alignas(8) BubbleGraphStruct
	{
		::System::Int32 performId; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::BubbleSpeakerPair>* BubbleSpeakerPairList; // 0x18
		::System::Single delayTime; // 0x20
	};
}
