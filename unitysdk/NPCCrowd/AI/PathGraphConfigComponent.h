#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_AI_PATHGRAPHCONFIGCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD01B0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphConfigComponent_TypeDefinitionIndex = 76773;

	class PathGraphConfigComponent : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONFIGCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
