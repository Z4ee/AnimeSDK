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

#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xABA2D70)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xABA2FA0)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0xABA2E20)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_A871253BFD471C99_OFFSET UNITYSDK_OFFSET(0xABA3BD0)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_AA169839CB93802A_1_OFFSET UNITYSDK_OFFSET(0xABA2C70)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xABA5AA0)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xABA2B60)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xABA3040)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xABA30A0)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xABA2F40)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xABA3CD0)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xABA5B70)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xABA5C90)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xABA5CB0)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xABA5CC0)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xABA5CA0)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xABA5CD0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StoryLightControlBehaviour_TypeDefinitionIndex = 39165;

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

		::System::Void Method_2_AA169839CB93802A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_AA169839CB93802A_OFFSET))(this);
		}

		::System::Void Method_2_AA169839CB93802A_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_AA169839CB93802A_1_OFFSET))(this);
		}

		::System::Void Method_2_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Boolean Method_2_A871253BFD471C99()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_A871253BFD471C99_OFFSET))(this);
		}

		::System::Void Method_2_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_2_9AB55F553C4AC6E8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR_METHOD_2_9AB55F553C4AC6E8_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnPlayableCreate(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
