#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BatchAnimationGraphMaskLayerConfig_BatchAnimationMaskBoneMaskConfig; }
namespace RPG::Client { class BatchAnimationGraphMaskLayerConfig_BatchAnimationNPCMaskAnimConfig; }
namespace System { class String; }
namespace UnityEngine::Rendering { class BatchAnimationClip; }

#define CLASS_1_37986DEEB759920E_CLASS_1_BBC842CA3CCF8FA2__CTOR_OFFSET UNITYSDK_OFFSET(0xC2B94A0)

inline static constexpr unsigned int Class_1_37986DEEB759920E_Class_1_BBC842CA3CCF8FA2_TypeDefinitionIndex = 69259;

class Class_1_37986DEEB759920E_Class_1_BBC842CA3CCF8FA2 : public ::System::Object
{
public:
	::UnityEngine::Rendering::BatchAnimationClip* OBKONNDLKDL; // 0x10
	::RPG::Client::BatchAnimationGraphMaskLayerConfig_BatchAnimationNPCMaskAnimConfig* EABKOHGCHFP; // 0x18
	::System::String* GPIDKEKIOEG; // 0x20
	::System::String* BFLIFKBEOPJ; // 0x28
	::RPG::Client::BatchAnimationGraphMaskLayerConfig_BatchAnimationMaskBoneMaskConfig* DDLAEMLDPLM; // 0x30
	::System::Single KGIPGLDGNJD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37986DEEB759920E_CLASS_1_BBC842CA3CCF8FA2__CTOR_OFFSET))(this);
	}
};
