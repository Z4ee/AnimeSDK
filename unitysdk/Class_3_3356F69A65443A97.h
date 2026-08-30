#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerWaveEffect; }

#define CLASS_3_3356F69A65443A97_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x134DEDB0)
#define CLASS_3_3356F69A65443A97__CTOR_OFFSET UNITYSDK_OFFSET(0x134DED80)

inline static constexpr unsigned int Class_3_3356F69A65443A97_TypeDefinitionIndex = 55959;

class Class_3_3356F69A65443A97 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerWaveEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerWaveEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerWaveEffect*))((::PBYTE)hIl2Cpp + CLASS_3_3356F69A65443A97__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3356F69A65443A97_ONTASKBEGIN_OFFSET))(this);
	}
};
