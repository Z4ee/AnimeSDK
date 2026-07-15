#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsTargetCustomUnselectable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9790C5E94BA0BAA5_EVALUATE_OFFSET UNITYSDK_OFFSET(0x177DCAC0)
#define CLASS_3_9790C5E94BA0BAA5__CTOR_OFFSET UNITYSDK_OFFSET(0x177DCA90)

inline static constexpr unsigned int Class_3_9790C5E94BA0BAA5_TypeDefinitionIndex = 52216;

class Class_3_9790C5E94BA0BAA5 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsTargetCustomUnselectable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTargetCustomUnselectable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTargetCustomUnselectable*))((::PBYTE)hIl2Cpp + CLASS_3_9790C5E94BA0BAA5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9790C5E94BA0BAA5_EVALUATE_OFFSET))(this);
	}
};
