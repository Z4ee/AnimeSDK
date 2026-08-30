#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnloadBattleEvent; }

#define CLASS_3_503F7878EEEA384C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC108910)
#define CLASS_3_503F7878EEEA384C__CTOR_OFFSET UNITYSDK_OFFSET(0xC1088E0)

inline static constexpr unsigned int Class_3_503F7878EEEA384C_TypeDefinitionIndex = 58989;

class Class_3_503F7878EEEA384C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::UnloadBattleEvent*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UnloadBattleEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UnloadBattleEvent*))((::PBYTE)hIl2Cpp + CLASS_3_503F7878EEEA384C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_503F7878EEEA384C_ONTASKBEGIN_OFFSET))(this);
	}
};
