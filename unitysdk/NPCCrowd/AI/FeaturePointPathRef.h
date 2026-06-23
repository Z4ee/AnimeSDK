#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_AI_FEATUREPOINTPATHREF_GET_PATHINDEX_OFFSET UNITYSDK_OFFSET(0xEBC0B50)
#define NPCCROWD_AI_FEATUREPOINTPATHREF__CTOR_OFFSET UNITYSDK_OFFSET(0xEBC0C00)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int FeaturePointPathRef_TypeDefinitionIndex = 83307;

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
