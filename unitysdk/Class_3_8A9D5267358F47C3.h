#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvTriggerAIEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8A9D5267358F47C3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16F4AC20)
#define CLASS_3_8A9D5267358F47C3__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4ABF0)

inline static constexpr unsigned int Class_3_8A9D5267358F47C3_TypeDefinitionIndex = 50129;

class Class_3_8A9D5267358F47C3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvTriggerAIEvent*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvTriggerAIEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvTriggerAIEvent*))((::PBYTE)hIl2Cpp + CLASS_3_8A9D5267358F47C3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8A9D5267358F47C3_ONTASKBEGIN_OFFSET))(this);
	}
};
