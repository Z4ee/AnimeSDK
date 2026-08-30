#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdvByFastDeliverFinish; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3F44001E51548530_EVALUATE_OFFSET UNITYSDK_OFFSET(0x153749B0)
#define CLASS_3_3F44001E51548530__CTOR_OFFSET UNITYSDK_OFFSET(0x15374980)

inline static constexpr unsigned int Class_3_3F44001E51548530_TypeDefinitionIndex = 53371;

class Class_3_3F44001E51548530 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByFastDeliverFinish*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByFastDeliverFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByFastDeliverFinish*))((::PBYTE)hIl2Cpp + CLASS_3_3F44001E51548530__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F44001E51548530_EVALUATE_OFFSET))(this);
	}
};
