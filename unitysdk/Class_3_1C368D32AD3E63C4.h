#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetBattleUIPanelOffset; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1C368D32AD3E63C4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEC24F0)
#define CLASS_3_1C368D32AD3E63C4__CTOR_OFFSET UNITYSDK_OFFSET(0xBEC24C0)

inline static constexpr unsigned int Class_3_1C368D32AD3E63C4_TypeDefinitionIndex = 38469;

class Class_3_1C368D32AD3E63C4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetBattleUIPanelOffset*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleUIPanelOffset* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleUIPanelOffset*))((::PBYTE)hIl2Cpp + CLASS_3_1C368D32AD3E63C4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C368D32AD3E63C4_ONTASKBEGIN_OFFSET))(this);
	}
};
