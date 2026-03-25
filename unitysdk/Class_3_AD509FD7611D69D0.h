#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerSoundMusicRhythmStageBGM; }
namespace System { class String; }

#define CLASS_3_AD509FD7611D69D0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A71BE0)
#define CLASS_3_AD509FD7611D69D0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10A71C20)
#define CLASS_3_AD509FD7611D69D0__CTOR_OFFSET UNITYSDK_OFFSET(0x10A71BB0)
#define CLASS_3_AD509FD7611D69D0___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A71EE0)

inline static constexpr unsigned int Class_3_AD509FD7611D69D0_TypeDefinitionIndex = 45410;

class Class_3_AD509FD7611D69D0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerSoundMusicRhythmStageBGM*>
{
public:
	::System::String* Field_3_1; // 0x28
	::RPG::GameCore::GameEntity* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerSoundMusicRhythmStageBGM* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerSoundMusicRhythmStageBGM*))((::PBYTE)hIl2Cpp + CLASS_3_AD509FD7611D69D0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD509FD7611D69D0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD509FD7611D69D0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD509FD7611D69D0___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
