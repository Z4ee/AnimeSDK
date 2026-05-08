#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_AI_FEATUREPOINTREF_GET_POINTINDEX_OFFSET UNITYSDK_OFFSET(0xD22DCB0)
#define NPCCROWD_AI_FEATUREPOINTREF__CTOR_OFFSET UNITYSDK_OFFSET(0xD22DD60)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int FeaturePointRef_TypeDefinitionIndex = 71520;

	class FeaturePointRef : public ::System::Object
	{
	public:
		::System::Int32 pointID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_FEATUREPOINTREF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_PointIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_FEATUREPOINTREF_GET_POINTINDEX_OFFSET))(this);
		}
	};
}
