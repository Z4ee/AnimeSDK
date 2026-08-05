#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define STATETREECORE_STATETREE_STRUCTOPSTYPETRAITS_GET_HASALLOCATOR_OFFSET UNITYSDK_OFFSET(0x1FC03310)
#define STATETREECORE_STATETREE_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC03320)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTree_StructOpsTypeTraits_TypeDefinitionIndex = 31517;

	class StateTree_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasAllocator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_STRUCTOPSTYPETRAITS_GET_HASALLOCATOR_OFFSET))(this);
		}
	};
}
