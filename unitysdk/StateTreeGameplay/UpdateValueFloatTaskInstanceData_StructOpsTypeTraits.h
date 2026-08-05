#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB96920)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int UpdateValueFloatTaskInstanceData_StructOpsTypeTraits_TypeDefinitionIndex = 77105;

	class UpdateValueFloatTaskInstanceData_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_UPDATEVALUEFLOATTASKINSTANCEDATA_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}
	};
}
