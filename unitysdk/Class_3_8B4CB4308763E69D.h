#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByPreShowRedStanceBreak; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8B4CB4308763E69D_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAA7DD50)
#define CLASS_3_8B4CB4308763E69D__CTOR_OFFSET UNITYSDK_OFFSET(0xAA7DD20)

inline static constexpr unsigned int Class_3_8B4CB4308763E69D_TypeDefinitionIndex = 51140;

class Class_3_8B4CB4308763E69D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByPreShowRedStanceBreak*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPreShowRedStanceBreak* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPreShowRedStanceBreak*))((::PBYTE)hIl2Cpp + CLASS_3_8B4CB4308763E69D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B4CB4308763E69D_EVALUATE_OFFSET))(this);
	}
};
