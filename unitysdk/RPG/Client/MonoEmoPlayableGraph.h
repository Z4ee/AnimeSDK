#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEmoPlayableGraph_BlinkState.h"
#include "unitysdk/RPG/Client/MonoEmoPlayableGraph_EyeState.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"
#include "unitysdk/UnityEngine/Animations/AnimationClipPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationMixerPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationPlayableOutput.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class Class_1_33F02A008C928A60;
class Class_1_4F3D403A38BF2189;
class Class_1_7AAE8FA406499FBF;
namespace RPG::Client { class EmoEyeCtrl; }
namespace RPG::Client { class TalkEmotionData; }
namespace RPG::Client { class TalkEmotionPoseData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AvatarMask; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_AUTOBLINKWITHEYESTATE_OFFSET UNITYSDK_OFFSET(0x1B3A9610)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_CANBLINK_OFFSET UNITYSDK_OFFSET(0x1B3A9940)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_DESTROY_OFFSET UNITYSDK_OFFSET(0x1B3A8FE0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GETAVATARMASK_OFFSET UNITYSDK_OFFSET(0x1B3AD580)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GETCLIP_OFFSET UNITYSDK_OFFSET(0x1B3A9160)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GETDEFAULTCLIP_OFFSET UNITYSDK_OFFSET(0x1B3ADF20)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GETOUTPUT_OFFSET UNITYSDK_OFFSET(0x1B3A9270)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GETPLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0x1B3AD0D0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_ALWAYSEVALUATE_OFFSET UNITYSDK_OFFSET(0x1B3A8C20)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_EMOTIONPLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0x1B3A8BD0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_FACERENDERER_OFFSET UNITYSDK_OFFSET(0x1B3A8C40)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_FADEOUTAUTOBLINK_OFFSET UNITYSDK_OFFSET(0x1B3A8C00)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x1B3A8BE0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_PLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0x1B3A8BF0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_0031B2A6B176A873_OFFSET UNITYSDK_OFFSET(0x1B3AC170)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x1B3A9400)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_0E3D8071A5930FA8_OFFSET UNITYSDK_OFFSET(0x1B3A9AA0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_104F651E1412A8CC_OFFSET UNITYSDK_OFFSET(0x1B3AA960)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0x1B3ADC60)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_151E25A63D14DDB0_2_OFFSET UNITYSDK_OFFSET(0x1B3ADDC0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1B3ADB00)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x1B3AC3B0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0x1B3AD410)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_360914574A437C0A_OFFSET UNITYSDK_OFFSET(0x1B3ADFF0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1B3AB320)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_515AB539783606E0_OFFSET UNITYSDK_OFFSET(0x1B3AB660)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_56C243520A6A6A4C_OFFSET UNITYSDK_OFFSET(0x1B3AC070)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_5F9B14860EA6F2FD_OFFSET UNITYSDK_OFFSET(0x1B3AAF60)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1B3A99A0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_84FDC7D1E4092695_OFFSET UNITYSDK_OFFSET(0x1B3ABC10)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_8C3F79E1E85EBE71_OFFSET UNITYSDK_OFFSET(0x1B3AB3E0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x1B3AB5E0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x1B3AC600)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1B3AB2B0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_969EF16C38E0FD30_OFFSET UNITYSDK_OFFSET(0x1B3AC7F0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_A9D0098EE09DF11B_OFFSET UNITYSDK_OFFSET(0x1B3A9820)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_B49D9DFCA7DAD6C6_OFFSET UNITYSDK_OFFSET(0x1B3AD060)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B3A9550)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_E086BDB08435547E_1_OFFSET UNITYSDK_OFFSET(0x1B3AD680)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_E086BDB08435547E_2_OFFSET UNITYSDK_OFFSET(0x1B3AD6F0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_E086BDB08435547E_OFFSET UNITYSDK_OFFSET(0x1B3AD610)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_E0F023080DE42077_1_OFFSET UNITYSDK_OFFSET(0x1B3AD8C0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_E0F023080DE42077_2_OFFSET UNITYSDK_OFFSET(0x1B3AD970)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_E0F023080DE42077_OFFSET UNITYSDK_OFFSET(0x1B3AD810)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x1B3AC660)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x1B3A8DB0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_F07840BBC25636A7_OFFSET UNITYSDK_OFFSET(0x1B3ACE70)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x1B3AC450)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ONAUDIOLANGUAGECHANGED_OFFSET UNITYSDK_OFFSET(0x1B3A8C60)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B3AD230)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B3ACAD0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B3AC920)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ONOWNERRECYCLE_OFFSET UNITYSDK_OFFSET(0x1B3AD3C0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_RESETPERMANENTCLIP_OFFSET UNITYSDK_OFFSET(0x1B3AB0B0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETAUTOBLINKWITHCURREYESTATE_OFFSET UNITYSDK_OFFSET(0x1B3A95B0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETENABLEAUTOBLICKWITHEYESTATE_OFFSET UNITYSDK_OFFSET(0x1B3A96E0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETENABLEAUTOBLINKSTATE_OFFSET UNITYSDK_OFFSET(0x1B3A9310)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETEYEPERMANENTEYESTATE_OFFSET UNITYSDK_OFFSET(0x1B3ADF90)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETMASKRENDERER_OFFSET UNITYSDK_OFFSET(0x1B3A9780)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETMOUTHTALK_OFFSET UNITYSDK_OFFSET(0x1B3AE100)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETTALKPERMANENT_OFFSET UNITYSDK_OFFSET(0x1B3AD760)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SET_ALWAYSEVALUATE_OFFSET UNITYSDK_OFFSET(0x1B3A8C30)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SET_FACERENDERER_OFFSET UNITYSDK_OFFSET(0x1B3A8C50)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SET_FADEOUTAUTOBLINK_OFFSET UNITYSDK_OFFSET(0x1B3A8C10)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_START_OFFSET UNITYSDK_OFFSET(0x1B3ACA30)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_STOPMOUTHTALK_OFFSET UNITYSDK_OFFSET(0x1B3AE300)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_STOPTALKPERMANENT_OFFSET UNITYSDK_OFFSET(0x1B3ADA20)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_TICKAFTEREVALUATE_OFFSET UNITYSDK_OFFSET(0x1B3AD170)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_TICKBEFOREEVALUATE_OFFSET UNITYSDK_OFFSET(0x1B3ACDD0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_TRIGGERBLINKINGEYECLOSE_OFFSET UNITYSDK_OFFSET(0x1B3A97D0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_TRYINIT_OFFSET UNITYSDK_OFFSET(0x1B3A8CF0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B3ACC60)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3AE3A0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3AE360)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEmoPlayableGraph_TypeDefinitionIndex = 71122;

	class MonoEmoPlayableGraph : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_PAEAOEKEKJB()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEmoPlayableGraph_TypeDefinitionIndex)->GetStaticField(0x13B70);
		}
		static ::System::String** StaticGet_JNLFFLGBEOM()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEmoPlayableGraph_TypeDefinitionIndex)->GetStaticField(0x13B78);
		}
		static ::System::Boolean* StaticGet_USE_NEW_EMO()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoEmoPlayableGraph_TypeDefinitionIndex)->GetStaticField(0x7E30);
		}
		// static const ::System::String* CLOSE_EYE_MARKER; // 0x0
		// static const ::System::Single CLOSE_EYE_WEIGHT; // 0x0
		// static const ::System::Int32 EMOTION_POSITION_LEFT = 0x0; // 0x0
		// static const ::System::Int32 EMOTION_POSITION_RIGHT = 0x1; // 0x0
		::System::Boolean EnableAutoBlink; // 0x18
		::System::Single MinBlinkGap; // 0x1C
		::System::Single MaxBlinkGap; // 0x20
		::System::Single BlinkingDuration; // 0x24
		::System::Single DoubleBlinkProbability; // 0x28
		::UnityEngine::Animator* Animator; // 0x30
		::UnityEngine::AnimationClip* BrowDefaultClip; // 0x38
		::UnityEngine::AnimationClip* EyeDefaultClip; // 0x40
		::UnityEngine::AnimationClip* MouthDefaultClip; // 0x48
		::UnityEngine::AnimationClip* EyeCloseClip; // 0x50
		::UnityEngine::AnimationClip* BrowPermanentClip; // 0x58
		::UnityEngine::AnimationClip* EyePermanentClip; // 0x60
		::UnityEngine::AnimationClip* MouthPermanentClip; // 0x68
		::UnityEngine::AvatarMask* LeftEyeMask; // 0x70
		::UnityEngine::AvatarMask* RightEyeMask; // 0x78
		::UnityEngine::AvatarMask* EyeMask; // 0x80
		::UnityEngine::AvatarMask* LeftBrowMask; // 0x88
		::UnityEngine::AvatarMask* RightBrowMask; // 0x90
		::UnityEngine::AvatarMask* MouthMask; // 0x98
		::Il2CppArray<::UnityEngine::AnimationClip*>* EyeClips; // 0xA0
		::Il2CppArray<::UnityEngine::AnimationClip*>* BrowClips; // 0xA8
		::Il2CppArray<::UnityEngine::AnimationClip*>* MouthClips; // 0xB0
		::RPG::GameCore::GameEntity* HEEPMBBDEAO; // 0xB8
		::RPG::Client::MonoEmoPlayableGraph_EyeState HLBAPONNOIH; // 0xC0
		::RPG::Client::MonoEmoPlayableGraph_BlinkState PAMNALJBHDF; // 0xC4
		::System::Boolean CHAMOHGJPIO; // 0xC8
		::System::Single MOLGPBFIGEI; // 0xCC
		::System::Single HFOBOHLPBLC; // 0xD0
		::System::Boolean JAMDCJJIBDP; // 0xD4
		::System::Boolean AJBNFOLOJLH; // 0xD5
		::System::Action* OFCJEBILCPE; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationClip*>* BFLKPEGCDBN; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationClip*>* NDHAGLPCJFA; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationClip*>* APGHNCFKHHF; // 0xF0
		::UnityEngine::Playables::PlayableGraph KECJFLONLII; // 0xF8
		::UnityEngine::Animations::AnimationPlayableOutput IOMNFFDEHBI; // 0x108
		::UnityEngine::Animations::AnimationPlayableOutput CNPPPMPDOJI; // 0x118
		::UnityEngine::Animations::AnimationPlayableOutput NNHLEJJBODH; // 0x128
		::UnityEngine::Animations::AnimationPlayableOutput DHIMPBKKIOH; // 0x138
		::UnityEngine::Animations::AnimationLayerMixerPlayable MCINHNMKCCI; // 0x148
		::UnityEngine::Animations::AnimationLayerMixerPlayable LCLLONPLKGO; // 0x158
		::UnityEngine::Animations::AnimationLayerMixerPlayable JIINGBDGMIH; // 0x168
		::UnityEngine::Animations::AnimationClipPlayable LBMKAONIBDK; // 0x178
		::UnityEngine::Animations::AnimationClipPlayable IEDLOHDJOIM; // 0x188
		::UnityEngine::Animations::AnimationClipPlayable FKLEFHKNAJL; // 0x198
		::UnityEngine::Animations::AnimationMixerPlayable NBKMCLHCBIJ; // 0x1A8
		::UnityEngine::Animations::AnimationMixerPlayable DHHOEMELGHO; // 0x1B8
		::UnityEngine::Animations::AnimationMixerPlayable PPEEAPGNFCH; // 0x1C8
		::UnityEngine::Animations::AnimationMixerPlayable HPNGLGNCEOK; // 0x1D8
		::Class_1_33F02A008C928A60* KEGDAOEFPCM; // 0x1E8
		::Class_1_33F02A008C928A60* CMPMIANGNFH; // 0x1F0
		::Class_1_33F02A008C928A60* DAHIMGAOALM; // 0x1F8
		::Class_1_4F3D403A38BF2189* HMOPFDJCLOH; // 0x200
		::UnityEngine::SkinnedMeshRenderer* NCDOBKOHLOG; // 0x208
		::RPG::Client::EmoEyeCtrl* EILNMKFPEDB; // 0x210
		::System::Boolean _FadeOutAutoBlink_k__BackingField; // 0x218
		::System::Boolean _AlwaysEvaluate_k__BackingField; // 0x219
		::UnityEngine::SkinnedMeshRenderer* _FaceRenderer_k__BackingField; // 0x220
		::Class_1_7AAE8FA406499FBF* KBHLJJEJKBF; // 0x228
		::System::String* IELEPPOEOFC; // 0x230
		::System::Boolean HKBLDPDBEFM; // 0x238

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH__CCTOR_OFFSET))();
		}

		::Class_1_7AAE8FA406499FBF* get_emotionPlayableGraph()
		{
			return ((::Class_1_7AAE8FA406499FBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_EMOTIONPLAYABLEGRAPH_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OwnerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_OWNERENTITY_OFFSET))(this);
		}

		::UnityEngine::Playables::PlayableGraph get_PlayableGraph()
		{
			return ((::UnityEngine::Playables::PlayableGraph(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_PLAYABLEGRAPH_OFFSET))(this);
		}

		::System::Boolean get_FadeOutAutoBlink()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_FADEOUTAUTOBLINK_OFFSET))(this);
		}

		::System::Void set_FadeOutAutoBlink(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SET_FADEOUTAUTOBLINK_OFFSET))(this, a1);
		}

		::System::Boolean get_AlwaysEvaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_ALWAYSEVALUATE_OFFSET))(this);
		}

		::System::Void set_AlwaysEvaluate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SET_ALWAYSEVALUATE_OFFSET))(this, a1);
		}

		::UnityEngine::SkinnedMeshRenderer* get_FaceRenderer()
		{
			return ((::UnityEngine::SkinnedMeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_FACERENDERER_OFFSET))(this);
		}

		::System::Void set_FaceRenderer(::UnityEngine::SkinnedMeshRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SET_FACERENDERER_OFFSET))(this, a1);
		}

		::System::Void OnAudioLanguageChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ONAUDIOLANGUAGECHANGED_OFFSET))(this);
		}

		::System::Void TryInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_TRYINIT_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_DESTROY_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* GetClip(::RPGTools::Timeline::Emotion::EmoTrackType a1, ::System::String* a2)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoTrackType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GETCLIP_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Animations::AnimationPlayableOutput GetOutput(::RPGTools::Timeline::Emotion::EmoTrackType a1)
		{
			return ((::UnityEngine::Animations::AnimationPlayableOutput(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoTrackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GETOUTPUT_OFFSET))(this, a1);
		}

		::System::Void SetEnableAutoBlinkState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETENABLEAUTOBLINKSTATE_OFFSET))(this, a1);
		}

		::System::Void SetAutoBlinkWithCurrEyeState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETAUTOBLINKWITHCURREYESTATE_OFFSET))(this);
		}

		::System::Void AutoBlinkWithEyeState(::RPG::Client::MonoEmoPlayableGraph_EyeState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoPlayableGraph_EyeState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_AUTOBLINKWITHEYESTATE_OFFSET))(this, a1);
		}

		::System::Void SetEnableAutoBlickWithEyeState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETENABLEAUTOBLICKWITHEYESTATE_OFFSET))(this, a1);
		}

		::System::Void SetMaskRenderer(::UnityEngine::SkinnedMeshRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETMASKRENDERER_OFFSET))(this, a1);
		}

		::System::Void TriggerBlinkingEyeClose(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_TRIGGERBLINKINGEYECLOSE_OFFSET))(this, a1);
		}

		::System::Boolean CanBlink()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_CANBLINK_OFFSET))(this);
		}

		::System::Void Method_5_7DB49B5407C8FD68()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_7DB49B5407C8FD68_OFFSET))(this);
		}

		::System::Void Method_5_EC2B405D0723571D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_EC2B405D0723571D_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_5_0D7638DBC93E5002()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_0D7638DBC93E5002_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_5_8C3F79E1E85EBE71(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_8C3F79E1E85EBE71_OFFSET))(this, a1);
		}

		::System::Void Method_5_8FAD57395F26ACC4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_8FAD57395F26ACC4_OFFSET))(this, a1);
		}

		::System::Void Method_5_515AB539783606E0(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_515AB539783606E0_OFFSET))(this, a1);
		}

		::System::Void Method_5_A9D0098EE09DF11B(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_A9D0098EE09DF11B_OFFSET))(this, a1);
		}

		::System::Void Method_5_104F651E1412A8CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_104F651E1412A8CC_OFFSET))(this);
		}

		::System::Void Method_5_84FDC7D1E4092695(::RPGTools::Timeline::Emotion::EmoTrackType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoTrackType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_84FDC7D1E4092695_OFFSET))(this, a1, a2);
		}

		::System::String* Method_5_56C243520A6A6A4C()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_56C243520A6A6A4C_OFFSET))(this);
		}

		::System::Void Method_5_5F9B14860EA6F2FD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_5F9B14860EA6F2FD_OFFSET))(this);
		}

		::System::Void Method_5_0031B2A6B176A873(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_0031B2A6B176A873_OFFSET))(this, a1);
		}

		::System::Void Method_5_2450CFC043E97F54()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_2450CFC043E97F54_OFFSET))(this);
		}

		::System::Void Method_5_F978A1D172468895()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_F978A1D172468895_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_9681042564541CD6_1_OFFSET))(this);
		}

		::System::Void Method_5_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Void Method_5_969EF16C38E0FD30(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_969EF16C38E0FD30_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ONENABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_UPDATE_OFFSET))(this);
		}

		::System::Void TickBeforeEvaluate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_TICKBEFOREEVALUATE_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::PlayableGraph GetPlayableGraph()
		{
			return ((::UnityEngine::Playables::PlayableGraph(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GETPLAYABLEGRAPH_OFFSET))(this);
		}

		::System::Void TickAfterEvaluate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_TICKAFTEREVALUATE_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnOwnerRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ONOWNERRECYCLE_OFFSET))(this);
		}

		::System::Void Method_5_0E3D8071A5930FA8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_0E3D8071A5930FA8_OFFSET))(this);
		}

		::System::Void ResetPermanentClip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_RESETPERMANENTCLIP_OFFSET))(this);
		}

		::System::Void SetTalkPermanent(::RPG::Client::TalkEmotionData* a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TalkEmotionData*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETTALKPERMANENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StopTalkPermanent(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_STOPTALKPERMANENT_OFFSET))(this, a1);
		}

		::System::Void Method_5_277F8930086803D1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_277F8930086803D1_OFFSET))(this);
		}

		::System::Void Method_5_F07840BBC25636A7(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_F07840BBC25636A7_OFFSET))(this, a1);
		}

		::System::Void Method_5_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_5_E086BDB08435547E(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_E086BDB08435547E_OFFSET))(this, a1);
		}

		::System::Void Method_5_E0F023080DE42077(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_E0F023080DE42077_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_151E25A63D14DDB0_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_151E25A63D14DDB0_1_OFFSET))(this);
		}

		::System::Void Method_5_E086BDB08435547E_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_E086BDB08435547E_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_E0F023080DE42077_1(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_E0F023080DE42077_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_151E25A63D14DDB0_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_151E25A63D14DDB0_2_OFFSET))(this);
		}

		::System::Void Method_5_E086BDB08435547E_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_E086BDB08435547E_2_OFFSET))(this, a1);
		}

		::System::Void Method_5_E0F023080DE42077_2(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_E0F023080DE42077_2_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::AnimationClip* GetDefaultClip(::RPGTools::Timeline::Emotion::EmoTrackType a1)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoTrackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GETDEFAULTCLIP_OFFSET))(this, a1);
		}

		::UnityEngine::AvatarMask* GetAvatarMask(::RPGTools::Timeline::Emotion::EmoTrackType a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::AvatarMask*(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoTrackType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GETAVATARMASK_OFFSET))(this, a1, a2);
		}

		::System::Void SetEyePermanentEyeState(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETEYEPERMANENTEYESTATE_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEmoPlayableGraph_EyeState Method_5_360914574A437C0A(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1)
		{
			return ((::RPG::Client::MonoEmoPlayableGraph_EyeState(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_360914574A437C0A_OFFSET))(this, a1);
		}

		::System::Void SetMouthTalk(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETMOUTHTALK_OFFSET))(this, a1, a2);
		}

		::System::Void StopMouthTalk()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_STOPMOUTHTALK_OFFSET))(this);
		}

		::System::Void Method_5_B49D9DFCA7DAD6C6(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_METHOD_5_B49D9DFCA7DAD6C6_OFFSET))(this, a1);
		}
	};
}
