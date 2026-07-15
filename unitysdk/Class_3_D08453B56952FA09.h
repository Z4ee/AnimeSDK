#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerUINotifyWithTarget; }

#define CLASS_3_D08453B56952FA09_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E749F0)
#define CLASS_3_D08453B56952FA09__CTOR_OFFSET UNITYSDK_OFFSET(0x15E749C0)

inline static constexpr unsigned int Class_3_D08453B56952FA09_TypeDefinitionIndex = 53943;

class Class_3_D08453B56952FA09 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerUINotifyWithTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerUINotifyWithTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerUINotifyWithTarget*))((::PBYTE)hIl2Cpp + CLASS_3_D08453B56952FA09__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D08453B56952FA09_ONTASKBEGIN_OFFSET))(this);
	}
};
