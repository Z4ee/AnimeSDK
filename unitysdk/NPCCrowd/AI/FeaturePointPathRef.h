#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_AI_FEATUREPOINTPATHREF_GET_PATHINDEX_OFFSET UNITYSDK_OFFSET(0xFB4BCC0)
#define NPCCROWD_AI_FEATUREPOINTPATHREF__CTOR_OFFSET UNITYSDK_OFFSET(0xFB4BD70)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int FeaturePointPathRef_TypeDefinitionIndex = 78328;

	class FeaturePointPathRef : public ::System::Object
	{
	public:
		::System::Int32 pathID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_FEATUREPOINTPATHREF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_PathIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_FEATUREPOINTPATHREF_GET_PATHINDEX_OFFSET))(this);
		}
	};
}
