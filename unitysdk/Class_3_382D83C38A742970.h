#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCurrentSkillName; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_382D83C38A742970_EVALUATE_OFFSET UNITYSDK_OFFSET(0x157A2C40)
#define CLASS_3_382D83C38A742970__CTOR_OFFSET UNITYSDK_OFFSET(0x157A2C10)

inline static constexpr unsigned int Class_3_382D83C38A742970_TypeDefinitionIndex = 54810;

class Class_3_382D83C38A742970 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCurrentSkillName*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCurrentSkillName* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCurrentSkillName*))((::PBYTE)hIl2Cpp + CLASS_3_382D83C38A742970__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_382D83C38A742970_EVALUATE_OFFSET))(this);
	}
};
