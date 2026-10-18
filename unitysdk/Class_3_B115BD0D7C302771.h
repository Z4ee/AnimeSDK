#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCanAutoUseItemToRecoverMP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B115BD0D7C302771_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCC54670)
#define CLASS_3_B115BD0D7C302771__CTOR_OFFSET UNITYSDK_OFFSET(0xCC54640)

inline static constexpr unsigned int Class_3_B115BD0D7C302771_TypeDefinitionIndex = 52548;

class Class_3_B115BD0D7C302771 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCanAutoUseItemToRecoverMP*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*))((::PBYTE)hIl2Cpp + CLASS_3_B115BD0D7C302771__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B115BD0D7C302771_EVALUATE_OFFSET))(this);
	}
};
