#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_2_9A097580DF02CED3;
namespace RPG::GameCore { class ST_ByFoundSmartObject; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_576A1626AF8FDA21_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1910A1E0)
#define CLASS_3_576A1626AF8FDA21__CTOR_OFFSET UNITYSDK_OFFSET(0x1910A120)

inline static constexpr unsigned int Class_3_576A1626AF8FDA21_TypeDefinitionIndex = 52478;

class Class_3_576A1626AF8FDA21 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByFoundSmartObject*>
{
public:
	::Class_2_9A097580DF02CED3* DFMOOFNKPOG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByFoundSmartObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByFoundSmartObject*))((::PBYTE)hIl2Cpp + CLASS_3_576A1626AF8FDA21__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_576A1626AF8FDA21_EVALUATE_OFFSET))(this);
	}
};
