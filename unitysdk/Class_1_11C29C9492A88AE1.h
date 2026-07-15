#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::Client::ActivityIdleLive { class StoryLine; }

#define CLASS_1_11C29C9492A88AE1_METHOD_1_28569B04E17EDDB9_OFFSET UNITYSDK_OFFSET(0x18EC96B0)
#define CLASS_1_11C29C9492A88AE1__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC9710)

inline static constexpr unsigned int Class_1_11C29C9492A88AE1_TypeDefinitionIndex = 71535;

class Class_1_11C29C9492A88AE1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11C29C9492A88AE1__CTOR_OFFSET))(this);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveNode* Method_1_28569B04E17EDDB9(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1, ::RPG::Client::ActivityIdleLive::StoryLine* a2)
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveNode*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + CLASS_1_11C29C9492A88AE1_METHOD_1_28569B04E17EDDB9_OFFSET))(this, a1, a2);
	}
};
