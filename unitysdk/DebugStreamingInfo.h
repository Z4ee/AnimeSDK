#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_D70A30D666F20D90;
namespace RPG::Client { class Stage; }

#define DEBUGSTREAMINGINFO_INITCMPT_OFFSET UNITYSDK_OFFSET(0x12214C00)
#define DEBUGSTREAMINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x12214C60)

inline static constexpr unsigned int DebugStreamingInfo_TypeDefinitionIndex = 47705;

class DebugStreamingInfo : public ::UnityEngine::MonoBehaviour
{
public:
	::RPG::Client::Stage* PDAIGLPEMEE; // 0x18
	::Class_1_D70A30D666F20D90* NFPCBMCGFDD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGSTREAMINGINFO__CTOR_OFFSET))(this);
	}

	::System::Void InitCmpt(::RPG::Client::Stage* a1, ::Class_1_D70A30D666F20D90* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*, ::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + DEBUGSTREAMINGINFO_INITCMPT_OFFSET))(this, a1, a2);
	}
};
