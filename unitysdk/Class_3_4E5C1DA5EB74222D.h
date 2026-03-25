#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerWavePerformStartString; }

#define CLASS_3_4E5C1DA5EB74222D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9EE09F0)
#define CLASS_3_4E5C1DA5EB74222D__CTOR_OFFSET UNITYSDK_OFFSET(0x9EE09C0)

inline static constexpr unsigned int Class_3_4E5C1DA5EB74222D_TypeDefinitionIndex = 47480;

class Class_3_4E5C1DA5EB74222D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerWavePerformStartString*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerWavePerformStartString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerWavePerformStartString*))((::PBYTE)hIl2Cpp + CLASS_3_4E5C1DA5EB74222D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E5C1DA5EB74222D_ONTASKBEGIN_OFFSET))(this);
	}
};
