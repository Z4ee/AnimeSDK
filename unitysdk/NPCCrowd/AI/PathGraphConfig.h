#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphConfig_RoadGraphType.h"
#include "unitysdk/NPCCrowd/AI/PathGraphShadowOverrideConfig.h"
#include "unitysdk/NPCCrowd/Ability/EMoveBehaviours.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class PathGraphNodeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1135DA40)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphConfig_TypeDefinitionIndex = 46478;

	class PathGraphConfig : public ::System::Object
	{
	public:
		::System::Int32 graphID; // 0x10
		::System::String* name; // 0x18
		::NPCCrowd::AI::PathGraphConfig_RoadGraphType roadType; // 0x20
		::System::Boolean overrideBehavioursType; // 0x24
		::NPCCrowd::Ability::EMoveBehaviours behavioursTypeOverride; // 0x28
		::NPCCrowd::AI::PathGraphShadowOverrideConfig shadowOverride; // 0x2C
		::System::Int32 connectorCount; // 0x40
		::System::Int32 splineCount; // 0x44
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphNodeConfig*>* nodes; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONFIG__CTOR_OFFSET))(this);
		}
	};
}
