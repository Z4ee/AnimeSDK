#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowBattleAvatarPanel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0004904BD7426489_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16472CE0)
#define CLASS_3_0004904BD7426489__CTOR_OFFSET UNITYSDK_OFFSET(0x16472CB0)

inline static constexpr unsigned int Class_3_0004904BD7426489_TypeDefinitionIndex = 55978;

class Class_3_0004904BD7426489 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowBattleAvatarPanel*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleAvatarPanel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleAvatarPanel*))((::PBYTE)hIl2Cpp + CLASS_3_0004904BD7426489__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0004904BD7426489_ONTASKBEGIN_OFFSET))(this);
	}
};
