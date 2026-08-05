#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ZenkovClockPagesRuntimeManager_Enum_3_B764A699307947F9.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationClipPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole { class ZenkovClockPagesRuntimeManager_ClockPageBinding; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_ZENKOVCLOCKPAGESRUNTIMEMANAGER_CLASS_1_044A2BC03C02751B__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEDFCE0)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovClockPagesRuntimeManager_Class_1_044A2BC03C02751B_TypeDefinitionIndex = 27366;

	class ZenkovClockPagesRuntimeManager_Class_1_044A2BC03C02751B : public ::System::Object
	{
	public:
		::MoleMole::ZenkovClockPagesRuntimeManager_ClockPageBinding* Field_1_7; // 0x10
		::UnityEngine::Animator* Field_1_0; // 0x18
		::UnityEngine::Playables::PlayableGraph Field_1_6; // 0x20
		::System::Single Field_1_11; // 0x30
		::MoleMole::ZenkovClockPagesRuntimeManager_Enum_3_B764A699307947F9 Field_1_4; // 0x34
		::UnityEngine::Animations::AnimationClipPlayable Field_1_5; // 0x38
		::System::Boolean Field_1_10; // 0x48
		::System::Boolean Field_1_9; // 0x49

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVCLOCKPAGESRUNTIMEMANAGER_CLASS_1_044A2BC03C02751B__CTOR_OFFSET))(this);
		}
	};
}
