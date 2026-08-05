#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_AI_PATHGRAPHREF__CTOR_OFFSET UNITYSDK_OFFSET(0xF0CAC30)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphRef_TypeDefinitionIndex = 45486;

	class PathGraphRef : public ::System::Object
	{
	public:
		::System::Int32 graphID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHREF__CTOR_OFFSET))(this);
		}
	};
}
