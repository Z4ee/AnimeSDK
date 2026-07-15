#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AkBusHierarchyFlags_TypeDefinitionIndex = 41919;

enum class AkBusHierarchyFlags : ::System::Int32
{
	AkBusHierarchy_Primary = 1,
	AkBusHierarchy_Secondary = 2,
	AkBusHierarchy_IsMaster = 128,
};
