#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NPCCROWD_AI_CDCOUNTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xE92CEF0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int CDCountItem_TypeDefinitionIndex = 78280;

	class CDCountItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* handlers; // 0x10
		::System::Single CDTimer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_CDCOUNTITEM__CTOR_OFFSET))(this);
		}
	};
}
