#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureByPropShowInfoId; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9AAC5BA272D60549_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAA75B30)
#define CLASS_3_9AAC5BA272D60549__CTOR_OFFSET UNITYSDK_OFFSET(0xAA75B00)

inline static constexpr unsigned int Class_3_9AAC5BA272D60549_TypeDefinitionIndex = 50919;

class Class_3_9AAC5BA272D60549 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdventureByPropShowInfoId*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByPropShowInfoId* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByPropShowInfoId*))((::PBYTE)hIl2Cpp + CLASS_3_9AAC5BA272D60549__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AAC5BA272D60549_EVALUATE_OFFSET))(this);
	}
};
