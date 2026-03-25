#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PreloadStageBattleEventEffects; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_80FE3C23951449A4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x899CEE0)
#define CLASS_3_80FE3C23951449A4__CTOR_OFFSET UNITYSDK_OFFSET(0x899CEB0)

inline static constexpr unsigned int Class_3_80FE3C23951449A4_TypeDefinitionIndex = 47037;

class Class_3_80FE3C23951449A4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PreloadStageBattleEventEffects*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PreloadStageBattleEventEffects* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PreloadStageBattleEventEffects*))((::PBYTE)hIl2Cpp + CLASS_3_80FE3C23951449A4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_80FE3C23951449A4_ONTASKBEGIN_OFFSET))(this);
	}
};
