#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChangeBattleEventOwner; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DDF7BB8821D05F5E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12AA9840)
#define CLASS_3_DDF7BB8821D05F5E__CTOR_OFFSET UNITYSDK_OFFSET(0x12AA9810)

inline static constexpr unsigned int Class_3_DDF7BB8821D05F5E_TypeDefinitionIndex = 53483;

class Class_3_DDF7BB8821D05F5E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChangeBattleEventOwner*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeBattleEventOwner* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeBattleEventOwner*))((::PBYTE)hIl2Cpp + CLASS_3_DDF7BB8821D05F5E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDF7BB8821D05F5E_ONTASKBEGIN_OFFSET))(this);
	}
};
