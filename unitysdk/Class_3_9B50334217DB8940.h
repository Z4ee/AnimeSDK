#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowBattleTalkBGUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9B50334217DB8940_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE48DB80)
#define CLASS_3_9B50334217DB8940__CTOR_OFFSET UNITYSDK_OFFSET(0xE48DB50)

inline static constexpr unsigned int Class_3_9B50334217DB8940_TypeDefinitionIndex = 54758;

class Class_3_9B50334217DB8940 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowBattleTalkBGUI*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleTalkBGUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleTalkBGUI*))((::PBYTE)hIl2Cpp + CLASS_3_9B50334217DB8940__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9B50334217DB8940_ONTASKBEGIN_OFFSET))(this);
	}
};
