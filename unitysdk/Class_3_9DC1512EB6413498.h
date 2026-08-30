#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StartBattleScoringAbility; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9DC1512EB6413498_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A82C600)
#define CLASS_3_9DC1512EB6413498__CTOR_OFFSET UNITYSDK_OFFSET(0x1A82C5D0)

inline static constexpr unsigned int Class_3_9DC1512EB6413498_TypeDefinitionIndex = 55850;

class Class_3_9DC1512EB6413498 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StartBattleScoringAbility*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartBattleScoringAbility* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartBattleScoringAbility*))((::PBYTE)hIl2Cpp + CLASS_3_9DC1512EB6413498__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9DC1512EB6413498_ONTASKBEGIN_OFFSET))(this);
	}
};
