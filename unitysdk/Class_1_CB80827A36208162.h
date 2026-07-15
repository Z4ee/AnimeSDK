#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::Client::ActivityIdleLive { class StoryLine; }

#define CLASS_1_CB80827A36208162_METHOD_1_A5409968380531B4_OFFSET UNITYSDK_OFFSET(0x15092BB0)
#define CLASS_1_CB80827A36208162__CTOR_OFFSET UNITYSDK_OFFSET(0x15092C20)

inline static constexpr unsigned int Class_1_CB80827A36208162_TypeDefinitionIndex = 71534;

class Class_1_CB80827A36208162 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB80827A36208162__CTOR_OFFSET))(this);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveNode* Method_1_A5409968380531B4(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1, ::RPG::Client::ActivityIdleLive::StoryLine* a2)
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveNode*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + CLASS_1_CB80827A36208162_METHOD_1_A5409968380531B4_OFFSET))(this, a1, a2);
	}
};
