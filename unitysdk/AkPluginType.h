#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AkPluginType_TypeDefinitionIndex = 41974;

enum class AkPluginType : ::System::Int32
{
	AkPluginTypeNone = 0,
	AkPluginTypeCodec = 1,
	AkPluginTypeSource = 2,
	AkPluginTypeEffect = 3,
	AkPluginTypeMixer = 6,
	AkPluginTypeSink = 7,
	AkPluginTypeGlobalExtension = 8,
	AkPluginTypeMask = 15,
};
