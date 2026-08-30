#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdvByCompareCharacterID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4DE20F7833446F53_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19278B00)
#define CLASS_3_4DE20F7833446F53__CTOR_OFFSET UNITYSDK_OFFSET(0x19278AD0)

inline static constexpr unsigned int Class_3_4DE20F7833446F53_TypeDefinitionIndex = 53366;

class Class_3_4DE20F7833446F53 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByCompareCharacterID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByCompareCharacterID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByCompareCharacterID*))((::PBYTE)hIl2Cpp + CLASS_3_4DE20F7833446F53__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4DE20F7833446F53_EVALUATE_OFFSET))(this);
	}
};
