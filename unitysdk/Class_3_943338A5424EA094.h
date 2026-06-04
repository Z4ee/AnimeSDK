#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByChimeraDuelIsMasterSelected; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_943338A5424EA094_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13C34AA0)
#define CLASS_3_943338A5424EA094__CTOR_OFFSET UNITYSDK_OFFSET(0x13C34A70)

inline static constexpr unsigned int Class_3_943338A5424EA094_TypeDefinitionIndex = 49652;

class Class_3_943338A5424EA094 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByChimeraDuelIsMasterSelected*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByChimeraDuelIsMasterSelected* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*))((::PBYTE)hIl2Cpp + CLASS_3_943338A5424EA094__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_943338A5424EA094_EVALUATE_OFFSET))(this);
	}
};
