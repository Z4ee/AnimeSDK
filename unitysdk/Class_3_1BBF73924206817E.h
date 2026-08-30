#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareFSVwithGP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1BBF73924206817E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15814AB0)
#define CLASS_3_1BBF73924206817E__CTOR_OFFSET UNITYSDK_OFFSET(0x15814A80)

inline static constexpr unsigned int Class_3_1BBF73924206817E_TypeDefinitionIndex = 52830;

class Class_3_1BBF73924206817E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareFSVwithGP*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareFSVwithGP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareFSVwithGP*))((::PBYTE)hIl2Cpp + CLASS_3_1BBF73924206817E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1BBF73924206817E_EVALUATE_OFFSET))(this);
	}
};
