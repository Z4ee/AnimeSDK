#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsExcludeInMultiCharacterFormation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4FF53B93E11811B1_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB2A3330)
#define CLASS_3_4FF53B93E11811B1__CTOR_OFFSET UNITYSDK_OFFSET(0xB2A3300)

inline static constexpr unsigned int Class_3_4FF53B93E11811B1_TypeDefinitionIndex = 51846;

class Class_3_4FF53B93E11811B1 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*))((::PBYTE)hIl2Cpp + CLASS_3_4FF53B93E11811B1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4FF53B93E11811B1_EVALUATE_OFFSET))(this);
	}
};
