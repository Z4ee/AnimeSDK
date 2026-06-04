#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdvByEntityExist; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E105A626DE047255_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1354D620)
#define CLASS_3_E105A626DE047255__CTOR_OFFSET UNITYSDK_OFFSET(0x1354D5F0)

inline static constexpr unsigned int Class_3_E105A626DE047255_TypeDefinitionIndex = 49634;

class Class_3_E105A626DE047255 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByEntityExist*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByEntityExist* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByEntityExist*))((::PBYTE)hIl2Cpp + CLASS_3_E105A626DE047255__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E105A626DE047255_EVALUATE_OFFSET))(this);
	}
};
