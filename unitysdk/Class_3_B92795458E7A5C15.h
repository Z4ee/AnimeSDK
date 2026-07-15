#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckColonyTrace; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B92795458E7A5C15_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17603910)
#define CLASS_3_B92795458E7A5C15__CTOR_OFFSET UNITYSDK_OFFSET(0x176038E0)

inline static constexpr unsigned int Class_3_B92795458E7A5C15_TypeDefinitionIndex = 50704;

class Class_3_B92795458E7A5C15 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckColonyTrace*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckColonyTrace* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckColonyTrace*))((::PBYTE)hIl2Cpp + CLASS_3_B92795458E7A5C15__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B92795458E7A5C15_EVALUATE_OFFSET))(this);
	}
};
