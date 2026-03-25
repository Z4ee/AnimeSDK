#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_56FF45D7B2C55655;
namespace RPG::Client { class Stage; }

#define DEBUGSTREAMINGINFO_INITCMPT_OFFSET UNITYSDK_OFFSET(0xCB4D8C0)
#define DEBUGSTREAMINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCB4D920)

inline static constexpr unsigned int DebugStreamingInfo_TypeDefinitionIndex = 38153;

class DebugStreamingInfo : public ::UnityEngine::MonoBehaviour
{
public:
	::RPG::Client::Stage* Field_5_0; // 0x18
	::Class_1_56FF45D7B2C55655* Field_5_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGSTREAMINGINFO__CTOR_OFFSET))(this);
	}

	::System::Void InitCmpt(::RPG::Client::Stage* a1, ::Class_1_56FF45D7B2C55655* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*, ::Class_1_56FF45D7B2C55655*))((::PBYTE)hIl2Cpp + DEBUGSTREAMINGINFO_INITCMPT_OFFSET))(this, a1, a2);
	}
};
