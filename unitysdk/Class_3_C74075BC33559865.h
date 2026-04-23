#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsTutorialFinish; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C74075BC33559865_EVALUATE_OFFSET UNITYSDK_OFFSET(0x129C7440)
#define CLASS_3_C74075BC33559865__CTOR_OFFSET UNITYSDK_OFFSET(0x129C7410)

inline static constexpr unsigned int Class_3_C74075BC33559865_TypeDefinitionIndex = 53473;

class Class_3_C74075BC33559865 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsTutorialFinish*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTutorialFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTutorialFinish*))((::PBYTE)hIl2Cpp + CLASS_3_C74075BC33559865__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C74075BC33559865_EVALUATE_OFFSET))(this);
	}
};
