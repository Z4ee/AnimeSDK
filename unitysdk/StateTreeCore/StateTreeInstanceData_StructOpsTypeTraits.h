#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define STATETREECORE_STATETREEINSTANCEDATA_STRUCTOPSTYPETRAITS_GET_HASALLOCATOR_OFFSET UNITYSDK_OFFSET(0x1F6B3E00)
#define STATETREECORE_STATETREEINSTANCEDATA_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6B3E10)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeInstanceData_StructOpsTypeTraits_TypeDefinitionIndex = 31577;

	class StateTreeInstanceData_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasAllocator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEINSTANCEDATA_STRUCTOPSTYPETRAITS_GET_HASALLOCATOR_OFFSET))(this);
		}
	};
}
