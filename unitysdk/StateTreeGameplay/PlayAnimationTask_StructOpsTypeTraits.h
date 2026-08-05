#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET UNITYSDK_OFFSET(0x1E351EC0)
#define STATETREEGAMEPLAY_PLAYANIMATIONTASK_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E351ED0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int PlayAnimationTask_StructOpsTypeTraits_TypeDefinitionIndex = 41642;

	class PlayAnimationTask_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlainOldData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_PLAYANIMATIONTASK_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET))(this);
		}
	};
}
