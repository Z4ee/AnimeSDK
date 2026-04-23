#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::Client { class ByPlantFesIsInSpineAnim; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CFA9F2057B55A5A2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11D51FB0)
#define CLASS_3_CFA9F2057B55A5A2__CTOR_OFFSET UNITYSDK_OFFSET(0x11D51F80)

inline static constexpr unsigned int Class_3_CFA9F2057B55A5A2_TypeDefinitionIndex = 53477;

class Class_3_CFA9F2057B55A5A2 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::Client::ByPlantFesIsInSpineAnim*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ByPlantFesIsInSpineAnim* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ByPlantFesIsInSpineAnim*))((::PBYTE)hIl2Cpp + CLASS_3_CFA9F2057B55A5A2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CFA9F2057B55A5A2_EVALUATE_OFFSET))(this);
	}
};
