#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureByCompareHPRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4F15A54FAEEA1342_EVALUATE_OFFSET UNITYSDK_OFFSET(0x157D70D0)
#define CLASS_3_4F15A54FAEEA1342__CTOR_OFFSET UNITYSDK_OFFSET(0x157D70A0)

inline static constexpr unsigned int Class_3_4F15A54FAEEA1342_TypeDefinitionIndex = 54670;

class Class_3_4F15A54FAEEA1342 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdventureByCompareHPRatio*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByCompareHPRatio* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByCompareHPRatio*))((::PBYTE)hIl2Cpp + CLASS_3_4F15A54FAEEA1342__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F15A54FAEEA1342_EVALUATE_OFFSET))(this);
	}
};
