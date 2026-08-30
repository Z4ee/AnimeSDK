#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AddBehaviorFlagForModifier; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_3_8F05B7416FB4D0F6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB86D6D0)
#define CLASS_3_8F05B7416FB4D0F6__CTOR_OFFSET UNITYSDK_OFFSET(0xB86D6A0)

inline static constexpr unsigned int Class_3_8F05B7416FB4D0F6_TypeDefinitionIndex = 55380;

class Class_3_8F05B7416FB4D0F6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddBehaviorFlagForModifier*>
{
public:
	::RPG::GameCore::ArrayPoolWrapper_1<::RPG::GameCore::TurnBasedModifierInstance*> PIIIMMOPIKE; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddBehaviorFlagForModifier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddBehaviorFlagForModifier*))((::PBYTE)hIl2Cpp + CLASS_3_8F05B7416FB4D0F6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F05B7416FB4D0F6_ONTASKBEGIN_OFFSET))(this);
	}
};
