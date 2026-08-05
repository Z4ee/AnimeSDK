#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define STATETREECORE_STATETREEPROPERTYBINDINGS_STRUCTOPSTYPETRAITS_GET_HASALLOCATOR_OFFSET UNITYSDK_OFFSET(0x1FC03700)
#define STATETREECORE_STATETREEPROPERTYBINDINGS_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC03710)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyBindings_StructOpsTypeTraits_TypeDefinitionIndex = 31625;

	class StateTreePropertyBindings_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasAllocator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGS_STRUCTOPSTYPETRAITS_GET_HASALLOCATOR_OFFSET))(this);
		}
	};
}
