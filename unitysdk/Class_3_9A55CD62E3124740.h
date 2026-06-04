#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RtBattleTriggerCharacterCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9A55CD62E3124740_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA636170)
#define CLASS_3_9A55CD62E3124740__CTOR_OFFSET UNITYSDK_OFFSET(0xA636140)

inline static constexpr unsigned int Class_3_9A55CD62E3124740_TypeDefinitionIndex = 50606;

class Class_3_9A55CD62E3124740 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtBattleTriggerCharacterCamera*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtBattleTriggerCharacterCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtBattleTriggerCharacterCamera*))((::PBYTE)hIl2Cpp + CLASS_3_9A55CD62E3124740__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9A55CD62E3124740_ONTASKBEGIN_OFFSET))(this);
	}
};
