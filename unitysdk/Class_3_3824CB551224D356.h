#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class BySaveModelWhenDead; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3824CB551224D356_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA402860)
#define CLASS_3_3824CB551224D356__CTOR_OFFSET UNITYSDK_OFFSET(0xA402830)

inline static constexpr unsigned int Class_3_3824CB551224D356_TypeDefinitionIndex = 52651;

class Class_3_3824CB551224D356 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::BySaveModelWhenDead*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BySaveModelWhenDead* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BySaveModelWhenDead*))((::PBYTE)hIl2Cpp + CLASS_3_3824CB551224D356__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3824CB551224D356_EVALUATE_OFFSET))(this);
	}
};
