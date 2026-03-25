#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_GROUPWEIGHTPAIR_METHOD_2_BF9C25E762BD53B3_OFFSET UNITYSDK_OFFSET(0x80180)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerateBehavior_GroupWeightPair_TypeDefinitionIndex = 58081;

	struct alignas(8) LoopGenerateBehavior_GroupWeightPair
	{
		::System::String* GroupContent; // 0x10
		::System::Single Weight; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* TemplateIndexes; // 0x20

		::System::Void Method_2_BF9C25E762BD53B3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_GROUPWEIGHTPAIR_METHOD_2_BF9C25E762BD53B3_OFFSET))(this);
		}
	};
}
