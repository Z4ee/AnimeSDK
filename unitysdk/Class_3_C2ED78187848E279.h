#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByDeployPuzzleBasePointIsAnswer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C2ED78187848E279_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A7A99A0)
#define CLASS_3_C2ED78187848E279__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7A9970)

inline static constexpr unsigned int Class_3_C2ED78187848E279_TypeDefinitionIndex = 58130;

class Class_3_C2ED78187848E279 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*))((::PBYTE)hIl2Cpp + CLASS_3_C2ED78187848E279__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2ED78187848E279_EVALUATE_OFFSET))(this);
	}
};
