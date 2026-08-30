#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class AdvByCompareDynamicValue; }
namespace RPG::GameCore { class ByCompareDynamicValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_897A0A72AE46F989_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18009E20)
#define CLASS_3_897A0A72AE46F989__CTOR_OFFSET UNITYSDK_OFFSET(0x18009CB0)

inline static constexpr unsigned int Class_3_897A0A72AE46F989_TypeDefinitionIndex = 54664;

class Class_3_897A0A72AE46F989 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByCompareDynamicValue*>
{
public:
	// static const ::RPG::GameCore::DynamicValueContextScope CBLOCGOMEGF; // 0x0
	::RPG::GameCore::ByCompareDynamicValue* BCDHGNKEDJG; // 0x28
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByCompareDynamicValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByCompareDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_3_897A0A72AE46F989__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_897A0A72AE46F989_EVALUATE_OFFSET))(this);
	}
};
