#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsIndirectDamage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9AA2E1C01B239324_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16E8F940)
#define CLASS_3_9AA2E1C01B239324__CTOR_OFFSET UNITYSDK_OFFSET(0x16E8F910)

inline static constexpr unsigned int Class_3_9AA2E1C01B239324_TypeDefinitionIndex = 54884;

class Class_3_9AA2E1C01B239324 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsIndirectDamage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsIndirectDamage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsIndirectDamage*))((::PBYTE)hIl2Cpp + CLASS_3_9AA2E1C01B239324__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AA2E1C01B239324_EVALUATE_OFFSET))(this);
	}
};
