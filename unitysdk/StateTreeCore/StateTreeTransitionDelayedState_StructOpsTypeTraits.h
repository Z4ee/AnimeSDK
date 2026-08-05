#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET UNITYSDK_OFFSET(0x1F6B5CD0)
#define STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6B5CE0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTransitionDelayedState_StructOpsTypeTraits_TypeDefinitionIndex = 31556;

	class StateTreeTransitionDelayedState_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlainOldData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETRANSITIONDELAYEDSTATE_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET))(this);
		}
	};
}
