#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BatchAnimationGraphMaskLayerConfig_BatchAnimationMaskBoneMaskConfig; }
namespace RPG::Client { class BatchAnimationGraphMaskLayerConfig_BatchAnimationNPCMaskAnimConfig; }
namespace System { class String; }
namespace UnityEngine::Rendering { class BatchAnimationClip; }

#define CLASS_1_FE4EA34D956DAF94_CLASS_1_BBC842CA3CCF8FA2__CTOR_OFFSET UNITYSDK_OFFSET(0x1521EE10)

inline static constexpr unsigned int Class_1_FE4EA34D956DAF94_Class_1_BBC842CA3CCF8FA2_TypeDefinitionIndex = 69223;

class Class_1_FE4EA34D956DAF94_Class_1_BBC842CA3CCF8FA2 : public ::System::Object
{
public:
	::RPG::Client::BatchAnimationGraphMaskLayerConfig_BatchAnimationNPCMaskAnimConfig* EABKOHGCHFP; // 0x10
	::System::String* GPIDKEKIOEG; // 0x18
	::RPG::Client::BatchAnimationGraphMaskLayerConfig_BatchAnimationMaskBoneMaskConfig* DDLAEMLDPLM; // 0x20
	::UnityEngine::Rendering::BatchAnimationClip* OBKONNDLKDL; // 0x28
	::System::String* BFLIFKBEOPJ; // 0x30
	::System::Single KGIPGLDGNJD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_CLASS_1_BBC842CA3CCF8FA2__CTOR_OFFSET))(this);
	}
};
