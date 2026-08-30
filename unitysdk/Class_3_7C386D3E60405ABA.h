#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RefreshBattleAvatarPanel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7C386D3E60405ABA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1892C970)
#define CLASS_3_7C386D3E60405ABA__CTOR_OFFSET UNITYSDK_OFFSET(0x1892C940)

inline static constexpr unsigned int Class_3_7C386D3E60405ABA_TypeDefinitionIndex = 58522;

class Class_3_7C386D3E60405ABA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RefreshBattleAvatarPanel*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshBattleAvatarPanel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshBattleAvatarPanel*))((::PBYTE)hIl2Cpp + CLASS_3_7C386D3E60405ABA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C386D3E60405ABA_ONTASKBEGIN_OFFSET))(this);
	}
};
