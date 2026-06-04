#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsFakeSkillBySlot; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8EDFFBD8DFCF8CD0_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAA05A00)
#define CLASS_3_8EDFFBD8DFCF8CD0__CTOR_OFFSET UNITYSDK_OFFSET(0xAA059D0)

inline static constexpr unsigned int Class_3_8EDFFBD8DFCF8CD0_TypeDefinitionIndex = 51097;

class Class_3_8EDFFBD8DFCF8CD0 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsFakeSkillBySlot*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsFakeSkillBySlot* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsFakeSkillBySlot*))((::PBYTE)hIl2Cpp + CLASS_3_8EDFFBD8DFCF8CD0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8EDFFBD8DFCF8CD0_EVALUATE_OFFSET))(this);
	}
};
