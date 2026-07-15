#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareStageID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_36802F5B72AAB65E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15F0C580)
#define CLASS_3_36802F5B72AAB65E__CTOR_OFFSET UNITYSDK_OFFSET(0x15F0C550)

inline static constexpr unsigned int Class_3_36802F5B72AAB65E_TypeDefinitionIndex = 52098;

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
