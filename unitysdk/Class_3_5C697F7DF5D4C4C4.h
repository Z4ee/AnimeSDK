#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowBattleUIInTimeline; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5C697F7DF5D4C4C4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x888B060)
#define CLASS_3_5C697F7DF5D4C4C4__CTOR_OFFSET UNITYSDK_OFFSET(0x888B030)

inline static constexpr unsigned int Class_3_5C697F7DF5D4C4C4_TypeDefinitionIndex = 47301;

class Class_3_5C697F7DF5D4C4C4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowBattleUIInTimeline*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleUIInTimeline* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleUIInTimeline*))((::PBYTE)hIl2Cpp + CLASS_3_5C697F7DF5D4C4C4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C697F7DF5D4C4C4_ONTASKBEGIN_OFFSET))(this);
	}
};
