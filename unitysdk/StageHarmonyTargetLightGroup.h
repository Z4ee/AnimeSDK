#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STAGEHARMONYTARGETLIGHTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x197ED930)

inline static constexpr unsigned int StageHarmonyTargetLightGroup_TypeDefinitionIndex = 48003;

class StageHarmonyTargetLightGroup : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* targetLightIndexGroup; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYTARGETLIGHTGROUP__CTOR_OFFSET))(this);
	}
};
