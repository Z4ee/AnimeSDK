#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define STATETREECORE_STATETREETEMPORARYINSTANCEDATA_STRUCTOPSTYPETRAITS_GET_HASALLOCATOR_OFFSET UNITYSDK_OFFSET(0x1F6DA440)
#define STATETREECORE_STATETREETEMPORARYINSTANCEDATA_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6DA450)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTemporaryInstanceData_StructOpsTypeTraits_TypeDefinitionIndex = 31574;

	class StateTreeTemporaryInstanceData_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETEMPORARYINSTANCEDATA_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasAllocator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETEMPORARYINSTANCEDATA_STRUCTOPSTYPETRAITS_GET_HASALLOCATOR_OFFSET))(this);
		}
	};
}
