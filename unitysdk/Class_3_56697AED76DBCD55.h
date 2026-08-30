#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHasPlayerMoveInput; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_56697AED76DBCD55_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBB9B680)
#define CLASS_3_56697AED76DBCD55__CTOR_OFFSET UNITYSDK_OFFSET(0xBB9B650)

inline static constexpr unsigned int Class_3_56697AED76DBCD55_TypeDefinitionIndex = 54829;

class Class_3_56697AED76DBCD55 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHasPlayerMoveInput*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasPlayerMoveInput* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasPlayerMoveInput*))((::PBYTE)hIl2Cpp + CLASS_3_56697AED76DBCD55__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56697AED76DBCD55_EVALUATE_OFFSET))(this);
	}
};
