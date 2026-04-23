#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerTeamEditUI; }

#define CLASS_3_432FCE410B4A2709_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12B3B570)
#define CLASS_3_432FCE410B4A2709__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3B540)

inline static constexpr unsigned int Class_3_432FCE410B4A2709_TypeDefinitionIndex = 54213;

class Class_3_432FCE410B4A2709 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerTeamEditUI*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerTeamEditUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerTeamEditUI*))((::PBYTE)hIl2Cpp + CLASS_3_432FCE410B4A2709__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_432FCE410B4A2709_ONTASKBEGIN_OFFSET))(this);
	}
};
