#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHasSummonRelation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7C2C722BB4E7A0A4_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19FCE620)
#define CLASS_3_7C2C722BB4E7A0A4__CTOR_OFFSET UNITYSDK_OFFSET(0x19FCE5F0)

inline static constexpr unsigned int Class_3_7C2C722BB4E7A0A4_TypeDefinitionIndex = 54835;

class Class_3_7C2C722BB4E7A0A4 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHasSummonRelation*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasSummonRelation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasSummonRelation*))((::PBYTE)hIl2Cpp + CLASS_3_7C2C722BB4E7A0A4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C2C722BB4E7A0A4_EVALUATE_OFFSET))(this);
	}
};
