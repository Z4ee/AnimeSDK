#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class PathGraphConfigComponentSet; }
namespace NPCCrowd::AI { class PathGraphRef; }
namespace System { class String; }

#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTV2CONFIG_GET_POINTINDEX_OFFSET UNITYSDK_OFFSET(0xD407AF0)
#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTV2CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xD407BA0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphFeaturePointV2Config_TypeDefinitionIndex = 61019;

	class PathGraphFeaturePointV2Config : public ::System::Object
	{
	public:
		::System::Int32 pointID; // 0x10
		::System::String* name; // 0x18
		::NPCCrowd::AI::PathGraphRef* graph; // 0x20
		::NPCCrowd::AI::PathGraphConfigComponentSet* components; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHFEATUREPOINTV2CONFIG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_PointIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHFEATUREPOINTV2CONFIG_GET_POINTINDEX_OFFSET))(this);
		}
	};
}
