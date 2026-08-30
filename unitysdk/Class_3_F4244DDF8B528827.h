#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareMissionBattleWin; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F4244DDF8B528827_EVALUATE_OFFSET UNITYSDK_OFFSET(0x176EBAE0)
#define CLASS_3_F4244DDF8B528827__CTOR_OFFSET UNITYSDK_OFFSET(0x176EBAB0)

inline static constexpr unsigned int Class_3_F4244DDF8B528827_TypeDefinitionIndex = 52852;

class Class_3_F4244DDF8B528827 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareMissionBattleWin*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareMissionBattleWin* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareMissionBattleWin*))((::PBYTE)hIl2Cpp + CLASS_3_F4244DDF8B528827__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4244DDF8B528827_EVALUATE_OFFSET))(this);
	}
};
