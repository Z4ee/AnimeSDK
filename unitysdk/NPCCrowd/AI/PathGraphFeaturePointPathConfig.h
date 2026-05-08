#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class FeaturePointRefList; }
namespace System { class String; }

#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTPATHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xCD240D0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphFeaturePointPathConfig_TypeDefinitionIndex = 59335;

	class PathGraphFeaturePointPathConfig : public ::System::Object
	{
	public:
		::System::Int32 pathID; // 0x10
		::System::String* name; // 0x18
		::NPCCrowd::AI::FeaturePointRefList* path; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHFEATUREPOINTPATHCONFIG__CTOR_OFFSET))(this);
		}
	};
}
