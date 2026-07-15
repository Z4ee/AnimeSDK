#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SwitchAudioListenerToTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_101DD268797882BB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17AD9C80)
#define CLASS_3_101DD268797882BB__CTOR_OFFSET UNITYSDK_OFFSET(0x17AD9C50)

inline static constexpr unsigned int Class_3_101DD268797882BB_TypeDefinitionIndex = 56113;

class Class_3_101DD268797882BB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchAudioListenerToTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchAudioListenerToTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchAudioListenerToTarget*))((::PBYTE)hIl2Cpp + CLASS_3_101DD268797882BB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_101DD268797882BB_ONTASKBEGIN_OFFSET))(this);
	}
};
