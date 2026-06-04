#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animation; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTAGESWITCHVFXCONTROL_GET_SELECTEDSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0xB4DD560)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTAGESWITCHVFXCONTROL_METHOD_5_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0xB4DD5F0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTAGESWITCHVFXCONTROL_SET_SELECTEDSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0xB4DD570)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTAGESWITCHVFXCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB4DD660)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageSelectStageSwitchVfxControl_TypeDefinitionIndex = 74207;

	class ChallengeTierceStageSelectStageSwitchVfxControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Nullable_1<::System::Int32> Field_5_0; // 0x18
		::UnityEngine::Animation* _Animation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTAGESWITCHVFXCONTROL__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> get_SelectedStageIndex()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTAGESWITCHVFXCONTROL_GET_SELECTEDSTAGEINDEX_OFFSET))(this);
		}

		::System::Void set_SelectedStageIndex(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTAGESWITCHVFXCONTROL_SET_SELECTEDSTAGEINDEX_OFFSET))(this, a1);
		}

		::System::Void Method_5_0CC4BC19C602BCD0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTAGESWITCHVFXCONTROL_METHOD_5_0CC4BC19C602BCD0_OFFSET))(this);
		}
	};
}
