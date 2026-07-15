#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdvByTriggeredTrackedSearch; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_25311AC4CA26FA44_EVALUATE_OFFSET UNITYSDK_OFFSET(0x14AF89A0)
#define CLASS_3_25311AC4CA26FA44__CTOR_OFFSET UNITYSDK_OFFSET(0x14AF8970)

inline static constexpr unsigned int Class_3_25311AC4CA26FA44_TypeDefinitionIndex = 50698;

class Class_3_25311AC4CA26FA44 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByTriggeredTrackedSearch*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByTriggeredTrackedSearch* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByTriggeredTrackedSearch*))((::PBYTE)hIl2Cpp + CLASS_3_25311AC4CA26FA44__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25311AC4CA26FA44_EVALUATE_OFFSET))(this);
	}
};
