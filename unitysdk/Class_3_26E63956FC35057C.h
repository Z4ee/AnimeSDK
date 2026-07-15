#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowBattleConditionUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_26E63956FC35057C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x186516C0)
#define CLASS_3_26E63956FC35057C__CTOR_OFFSET UNITYSDK_OFFSET(0x18651690)

inline static constexpr unsigned int Class_3_26E63956FC35057C_TypeDefinitionIndex = 55981;

class Class_3_26E63956FC35057C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowBattleConditionUI*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleConditionUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleConditionUI*))((::PBYTE)hIl2Cpp + CLASS_3_26E63956FC35057C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26E63956FC35057C_ONTASKBEGIN_OFFSET))(this);
	}
};
