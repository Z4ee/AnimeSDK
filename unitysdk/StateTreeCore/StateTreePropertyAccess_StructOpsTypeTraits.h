#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define STATETREECORE_STATETREEPROPERTYACCESS_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET UNITYSDK_OFFSET(0x1ED88940)
#define STATETREECORE_STATETREEPROPERTYACCESS_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED88950)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyAccess_StructOpsTypeTraits_TypeDefinitionIndex = 31620;

	class StateTreePropertyAccess_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYACCESS_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlainOldData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYACCESS_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET))(this);
		}
	};
}
