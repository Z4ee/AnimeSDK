#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareStageID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_36802F5B72AAB65E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15CEBAD0)
#define CLASS_3_36802F5B72AAB65E__CTOR_OFFSET UNITYSDK_OFFSET(0x15CEBAA0)

inline static constexpr unsigned int Class_3_36802F5B72AAB65E_TypeDefinitionIndex = 54783;

class Class_3_36802F5B72AAB65E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareStageID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareStageID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareStageID*))((::PBYTE)hIl2Cpp + CLASS_3_36802F5B72AAB65E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36802F5B72AAB65E_EVALUATE_OFFSET))(this);
	}
};
