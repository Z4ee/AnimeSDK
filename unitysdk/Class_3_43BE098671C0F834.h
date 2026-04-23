#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class RA_ByAIStatus; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_43BE098671C0F834_EVALUATE_OFFSET UNITYSDK_OFFSET(0x117F9920)
#define CLASS_3_43BE098671C0F834__CTOR_OFFSET UNITYSDK_OFFSET(0x117F98F0)

inline static constexpr unsigned int Class_3_43BE098671C0F834_TypeDefinitionIndex = 48087;

class Class_3_43BE098671C0F834 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::RA_ByAIStatus*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RA_ByAIStatus* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RA_ByAIStatus*))((::PBYTE)hIl2Cpp + CLASS_3_43BE098671C0F834__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43BE098671C0F834_EVALUATE_OFFSET))(this);
	}
};
