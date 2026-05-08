#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9E75F47F2670B678.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole::Battle
{
	inline static constexpr unsigned int AbilityEventMaskList_1_TypeDefinitionIndex = 72587;

	template <typename T>
	struct AbilityEventMaskList_1
	{
		::System::Int32 Count; // 0x0
		::System::Collections::Generic::List_1<T>* Instance; // 0x0
		::System::Collections::Generic::List_1<::Struct_2_9E75F47F2670B678>* OnPreEventMask; // 0x0
		::System::Collections::Generic::List_1<::Struct_2_9E75F47F2670B678>* OnEventMask; // 0x0
		::System::Collections::Generic::List_1<::Struct_2_9E75F47F2670B678>* OnPostEventMask; // 0x0
		::System::Collections::Generic::List_1<::Struct_2_9E75F47F2670B678>* OnResolvedEventMask; // 0x0
		::System::Collections::Generic::List_1<::Struct_2_9E75F47F2670B678>* OnEventFromAnyoneMask; // 0x0
	};
}
