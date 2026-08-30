#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerSound.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERSOUNDMUSICRHYTHMSTAGEBGM_METHOD_4_5B8057D9E09E066A_OFFSET UNITYSDK_OFFSET(0x1D299FD0)
#define RPG_GAMECORE_TRIGGERSOUNDMUSICRHYTHMSTAGEBGM_METHOD_4_AF0C7BC5A54ACBA4_OFFSET UNITYSDK_OFFSET(0x1D299820)
#define RPG_GAMECORE_TRIGGERSOUNDMUSICRHYTHMSTAGEBGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D299810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerSoundMusicRhythmStageBGM_TypeDefinitionIndex = 20372;

	class TriggerSoundMusicRhythmStageBGM : public ::RPG::GameCore::TriggerSound
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSOUNDMUSICRHYTHMSTAGEBGM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5B8057D9E09E066A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerSoundMusicRhythmStageBGM*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerSoundMusicRhythmStageBGM*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSOUNDMUSICRHYTHMSTAGEBGM_METHOD_4_5B8057D9E09E066A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AF0C7BC5A54ACBA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerSoundMusicRhythmStageBGM* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerSoundMusicRhythmStageBGM*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSOUNDMUSICRHYTHMSTAGEBGM_METHOD_4_AF0C7BC5A54ACBA4_OFFSET))(a1, a2);
		}
	};
}
