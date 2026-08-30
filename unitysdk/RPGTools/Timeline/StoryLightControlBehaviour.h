#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/StoryLightCharacterGroup.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class EnvironmentSystem; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1B0C6930)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x1B0C6670)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1B0C65D0)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_C1E0405EEC95DC65_OFFSET UNITYSDK_OFFSET(0x1B0C69C0)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x1B0CBB60)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_C982C8295D29DA97_OFFSET UNITYSDK_OFFSET(0x1B0C8530)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B0C6490)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1B0C6B40)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1B0C6BA0)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x1B0C6AE0)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B0C8640)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0CBD80)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StoryLightControlBehaviour_TypeDefinitionIndex = 48801;

	class StoryLightControlBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Boolean MainLightColorEnable; // 0x10
		::UnityEngine::Color MainLightColor; // 0x14
		::System::Boolean MainLightIntensityEnable; // 0x24
		::System::Single MainLightIntensity; // 0x28
		::System::Boolean MainLightRotationEnable; // 0x2C
		::UnityEngine::Vector3 MainLightRotation; // 0x30
		::System::Boolean DisableLocalMainLightEnable; // 0x3C
		::System::Single DisableLocalMainLight; // 0x40
		::System::Boolean DisableLocalLightLerpEnable; // 0x44
		::System::Boolean DisableLocalLightLerp; // 0x45
		::System::Boolean EnvColorEnable; // 0x46
		::UnityEngine::Color EnvColor; // 0x48
		::System::Boolean AddColorEnable; // 0x58
		::UnityEngine::Color AddColor; // 0x5C
		::System::Boolean SPColorEnable; // 0x6C
		::UnityEngine::Color SPColor; // 0x70
		::System::Boolean SPIntensityEnable; // 0x80
		::System::Single SPIntensity; // 0x84
		::System::Boolean CharacterShadowFactorEnable; // 0x88
		::System::Single CharacterShadowFactor; // 0x8C
		::System::Boolean CharacterShadowFactorEnableInShaowProbe; // 0x90
		::System::Boolean HeightLerpEnable; // 0x91
		::System::Single HeightLerpTop; // 0x94
		::System::Single HeightLerpBottom; // 0x98
		::UnityEngine::Color HeightLerpTopColor; // 0x9C
		::UnityEngine::Color HeightLerpMiddleColor; // 0xAC
		::UnityEngine::Color HeightLerpBottomColor; // 0xBC
		::System::Boolean RimLightEnable; // 0xCC
		::UnityEngine::Vector2 RimLightOffset; // 0xD0
		::System::Single RimLightWidth; // 0xD8
		::System::Single RimLightIntensity; // 0xDC
		::UnityEngine::Color RimLightColor; // 0xE0
		::System::Single RimShadowIntensity; // 0xF0
		::UnityEngine::Color RimShadowColor; // 0xF4
		::System::Boolean LevelAdjustEnable; // 0x104
		::UnityEngine::Color LevelSkinLightColor; // 0x108
		::UnityEngine::Color LevelSkinShadowColor; // 0x118
		::UnityEngine::Color LevelHighLightColor; // 0x128
		::UnityEngine::Color LevelShadowColor; // 0x138
		::System::Single LevelShadow; // 0x148
		::System::Single LevelMid; // 0x14C
		::System::Single LevelHighLight; // 0x150
		::System::Boolean EnableSelfShadowEnable; // 0x154
		::System::Boolean EnableSelfShadow; // 0x155
		::System::Single SelfShadowLerpCamera; // 0x158
		::System::Single SelfShadowLerpHair; // 0x15C
		::System::Single SelfShadowBoundsClip; // 0x160
		::System::Boolean _IsSyncSceneLight; // 0x164
		::System::Boolean _EnableRotation; // 0x165
		::UnityEngine::Vector3 _Rotation; // 0x168
		::System::Boolean EnableCharacterGroup; // 0x174
		::System::Collections::Generic::List_1<::RPGTools::Timeline::StoryLightCharacterGroup>* CharacterGroupList; // 0x178
		::System::Boolean _OriIsSyncSceneLight; // 0x180
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0x188
		::System::Int32 _TargetPriority; // 0x190
		::System::Boolean _FirstFrame; // 0x194
		::System::Boolean AutoReset; // 0x195

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
		}

		::System::Void Method_2_4EA6B1791DACA9CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
		}

		::System::Void Method_2_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Boolean Method_2_C982C8295D29DA97()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_C982C8295D29DA97_OFFSET))(this);
		}

		::System::Void Method_2_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_2_C1E0405EEC95DC65()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_C1E0405EEC95DC65_OFFSET))(this);
		}
	};
}
