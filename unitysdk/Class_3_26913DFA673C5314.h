#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PauseTimeRewindTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_26913DFA673C5314_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD271580)
#define CLASS_3_26913DFA673C5314__CTOR_OFFSET UNITYSDK_OFFSET(0xD271550)

inline static constexpr unsigned int Class_3_26913DFA673C5314_TypeDefinitionIndex = 53639;

class Class_3_26913DFA673C5314 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PauseTimeRewindTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PauseTimeRewindTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PauseTimeRewindTarget*))((::PBYTE)hIl2Cpp + CLASS_3_26913DFA673C5314__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26913DFA673C5314_ONTASKBEGIN_OFFSET))(this);
	}
};
