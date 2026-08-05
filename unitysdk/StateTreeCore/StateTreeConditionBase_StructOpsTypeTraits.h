#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define STATETREECORE_STATETREECONDITIONBASE_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET UNITYSDK_OFFSET(0x1ED76940)
#define STATETREECORE_STATETREECONDITIONBASE_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED76950)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeConditionBase_StructOpsTypeTraits_TypeDefinitionIndex = 31522;

	class StateTreeConditionBase_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlainOldData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET))(this);
		}
	};
}
