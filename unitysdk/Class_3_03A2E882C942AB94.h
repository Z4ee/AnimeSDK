#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByViewModeSwitchEmptyServant; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_03A2E882C942AB94_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC077340)
#define CLASS_3_03A2E882C942AB94__CTOR_OFFSET UNITYSDK_OFFSET(0xC077310)

inline static constexpr unsigned int Class_3_03A2E882C942AB94_TypeDefinitionIndex = 53426;

class Class_3_03A2E882C942AB94 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByViewModeSwitchEmptyServant*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByViewModeSwitchEmptyServant* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByViewModeSwitchEmptyServant*))((::PBYTE)hIl2Cpp + CLASS_3_03A2E882C942AB94__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03A2E882C942AB94_EVALUATE_OFFSET))(this);
	}
};
