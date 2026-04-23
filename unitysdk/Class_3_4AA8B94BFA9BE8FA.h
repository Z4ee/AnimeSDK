#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_2_9A097580DF02CED3;
namespace RPG::GameCore { class ST_ByHasBornSmartObject; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4AA8B94BFA9BE8FA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11A29C50)
#define CLASS_3_4AA8B94BFA9BE8FA__CTOR_OFFSET UNITYSDK_OFFSET(0x11A29BF0)

inline static constexpr unsigned int Class_3_4AA8B94BFA9BE8FA_TypeDefinitionIndex = 48184;

class Class_3_4AA8B94BFA9BE8FA : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByHasBornSmartObject*>
{
public:
	::Class_2_9A097580DF02CED3* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByHasBornSmartObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByHasBornSmartObject*))((::PBYTE)hIl2Cpp + CLASS_3_4AA8B94BFA9BE8FA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4AA8B94BFA9BE8FA_EVALUATE_OFFSET))(this);
	}
};
