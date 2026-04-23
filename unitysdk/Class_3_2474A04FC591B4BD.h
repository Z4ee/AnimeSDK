#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsInEraFlipperSpotArea; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2474A04FC591B4BD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x92F4640)
#define CLASS_3_2474A04FC591B4BD__CTOR_OFFSET UNITYSDK_OFFSET(0x92F4610)

inline static constexpr unsigned int Class_3_2474A04FC591B4BD_TypeDefinitionIndex = 48688;

class Class_3_2474A04FC591B4BD : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsInEraFlipperSpotArea*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsInEraFlipperSpotArea* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsInEraFlipperSpotArea*))((::PBYTE)hIl2Cpp + CLASS_3_2474A04FC591B4BD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2474A04FC591B4BD_EVALUATE_OFFSET))(this);
	}
};
