#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetStepperDecisionGroupIndex; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5FBFC6E82812D7E3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158EDDF0)
#define CLASS_3_5FBFC6E82812D7E3__CTOR_OFFSET UNITYSDK_OFFSET(0x158EDDC0)

inline static constexpr unsigned int Class_3_5FBFC6E82812D7E3_TypeDefinitionIndex = 55763;

class Class_3_5FBFC6E82812D7E3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetStepperDecisionGroupIndex*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetStepperDecisionGroupIndex* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetStepperDecisionGroupIndex*))((::PBYTE)hIl2Cpp + CLASS_3_5FBFC6E82812D7E3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5FBFC6E82812D7E3_ONTASKBEGIN_OFFSET))(this);
	}
};
