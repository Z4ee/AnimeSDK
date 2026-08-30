#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RtStopMove; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8CEE2A0BE7A57AB4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB935080)
#define CLASS_3_8CEE2A0BE7A57AB4__CTOR_OFFSET UNITYSDK_OFFSET(0xB935050)

inline static constexpr unsigned int Class_3_8CEE2A0BE7A57AB4_TypeDefinitionIndex = 54392;

class Class_3_8CEE2A0BE7A57AB4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtStopMove*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtStopMove* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtStopMove*))((::PBYTE)hIl2Cpp + CLASS_3_8CEE2A0BE7A57AB4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CEE2A0BE7A57AB4_ONTASKBEGIN_OFFSET))(this);
	}
};
