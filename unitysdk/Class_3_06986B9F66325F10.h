#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetBattleUIPanelState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_06986B9F66325F10_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165AF690)
#define CLASS_3_06986B9F66325F10__CTOR_OFFSET UNITYSDK_OFFSET(0x165AF660)

inline static constexpr unsigned int Class_3_06986B9F66325F10_TypeDefinitionIndex = 58677;

class Class_3_06986B9F66325F10 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetBattleUIPanelState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleUIPanelState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleUIPanelState*))((::PBYTE)hIl2Cpp + CLASS_3_06986B9F66325F10__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06986B9F66325F10_ONTASKBEGIN_OFFSET))(this);
	}
};
