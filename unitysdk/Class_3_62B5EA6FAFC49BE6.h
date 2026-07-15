#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdvByPlayerInVisionZone; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_62B5EA6FAFC49BE6_EVALUATE_OFFSET UNITYSDK_OFFSET(0x14708FE0)
#define CLASS_3_62B5EA6FAFC49BE6__CTOR_OFFSET UNITYSDK_OFFSET(0x14708FB0)

inline static constexpr unsigned int Class_3_62B5EA6FAFC49BE6_TypeDefinitionIndex = 50696;

class Class_3_62B5EA6FAFC49BE6 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByPlayerInVisionZone*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByPlayerInVisionZone* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByPlayerInVisionZone*))((::PBYTE)hIl2Cpp + CLASS_3_62B5EA6FAFC49BE6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62B5EA6FAFC49BE6_EVALUATE_OFFSET))(this);
	}
};
