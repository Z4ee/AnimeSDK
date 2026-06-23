#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphFeaturePointComponent.h"

namespace System { class String; }

#define NPCCROWD_AI_PATHGRAPHCONFIGEXPORTCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x8C238F0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphConfigExportComponent_TypeDefinitionIndex = 60230;

	class PathGraphConfigExportComponent : public ::NPCCrowd::AI::PathGraphFeaturePointComponent
	{
	public:
		::System::String* exportConfigKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONFIGEXPORTCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
