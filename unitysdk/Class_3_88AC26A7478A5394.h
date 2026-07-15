#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByPropIsCreateByActiveSkill; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_88AC26A7478A5394_EVALUATE_OFFSET UNITYSDK_OFFSET(0x160B3D30)
#define CLASS_3_88AC26A7478A5394__CTOR_OFFSET UNITYSDK_OFFSET(0x160B3D00)

inline static constexpr unsigned int Class_3_88AC26A7478A5394_TypeDefinitionIndex = 50217;

class Class_3_88AC26A7478A5394 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByPropIsCreateByActiveSkill*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPropIsCreateByActiveSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPropIsCreateByActiveSkill*))((::PBYTE)hIl2Cpp + CLASS_3_88AC26A7478A5394__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_88AC26A7478A5394_EVALUATE_OFFSET))(this);
	}
};
