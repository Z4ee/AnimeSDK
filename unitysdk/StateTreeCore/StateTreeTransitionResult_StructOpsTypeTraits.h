#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define STATETREECORE_STATETREETRANSITIONRESULT_STRUCTOPSTYPETRAITS_GET_HASALLOCATOR_OFFSET UNITYSDK_OFFSET(0x1FBE24D0)
#define STATETREECORE_STATETREETRANSITIONRESULT_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBE24E0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTransitionResult_StructOpsTypeTraits_TypeDefinitionIndex = 31562;

	class StateTreeTransitionResult_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasAllocator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONRESULT_STRUCTOPSTYPETRAITS_GET_HASALLOCATOR_OFFSET))(this);
		}
	};
}
