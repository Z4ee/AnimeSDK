#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByRegionEraState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F6BE0142BC8509EF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB63CE40)
#define CLASS_3_F6BE0142BC8509EF__CTOR_OFFSET UNITYSDK_OFFSET(0xB63CE10)

inline static constexpr unsigned int Class_3_F6BE0142BC8509EF_TypeDefinitionIndex = 53033;

class Class_3_F6BE0142BC8509EF : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByRegionEraState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByRegionEraState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByRegionEraState*))((::PBYTE)hIl2Cpp + CLASS_3_F6BE0142BC8509EF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F6BE0142BC8509EF_EVALUATE_OFFSET))(this);
	}
};
