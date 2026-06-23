#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_2_60C8FB52ACCBBF05_Class_0_16E7307DCC43CB2C_22;
namespace MoleMole { class TimelineData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace miHoYoEmotion { class EmoSync; }
namespace miHoYoEmotion { class SequenceClipBakeData; }

#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_156861AFEC568115_OFFSET UNITYSDK_OFFSET(0x18D251C0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_1_OFFSET UNITYSDK_OFFSET(0x18D25490)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_2_OFFSET UNITYSDK_OFFSET(0x18D254A0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x18D25480)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_637BB645FA4F6E89_OFFSET UNITYSDK_OFFSET(0x18D25610)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0x18D25470)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x18D25450)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_81459141CB11ADC8_OFFSET UNITYSDK_OFFSET(0x18D254B0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x18D24420)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0x18D23F40)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_BE18C04CD91E0748_OFFSET UNITYSDK_OFFSET(0x18D25400)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x18D25460)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x18D24390)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x18D23EB0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x18D231C0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x18D23970)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x18D25360)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x18D247C0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x18D253B0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int WwiseAudioBehaviour_TypeDefinitionIndex = 51717;

	class WwiseAudioBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* soundName; // 0x10
		::System::String* displayName; // 0x18
		::System::String* voKey; // 0x20
		::System::Boolean EmoSync; // 0x28
		::miHoYoEmotion::EmoSync* emoSync; // 0x30
		::System::String* emoFacialKey; // 0x38
		::System::String* avatarShowingKey; // 0x40
		::System::String* emoPoseKey; // 0x48
		::UnityEngine::GameObject* followTarget; // 0x50
		::UnityEngine::GameObject* _audioEmitter; // 0x58
		::System::Boolean _isPaused; // 0x60
		::System::UInt32 _audioPendingId; // 0x64
		::System::UInt32 _audioPlayingId; // 0x68
		::System::Boolean _needPlay; // 0x6C
		::Class_2_60C8FB52ACCBBF05_Class_0_16E7307DCC43CB2C_22* _subtitleViewer; // 0x70
		::MoleMole::TimelineData* _data; // 0x78
		::miHoYoEmotion::SequenceClipBakeData* bakeData; // 0x80
		::Foundation::AssetRequestHandle handler; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void Method_2_AB88190D695EBEA9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_AB88190D695EBEA9_OFFSET))(this);
		}

		::System::Void Method_2_BE18C04CD91E0748(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_BE18C04CD91E0748_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_79ED6854413CA2F4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_2_9B2E710EB9D49BA6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_9B2E710EB9D49BA6_OFFSET))(this);
		}

		::System::Void Method_2_324AEE341AAA7A1B_1(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_1_OFFSET))(this, a1);
		}

		::System::Void Method_2_324AEE341AAA7A1B_2(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_2_OFFSET))(this, a1);
		}

		::System::Void Method_2_81459141CB11ADC8(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_81459141CB11ADC8_OFFSET))(this, a1);
		}

		::System::Void Method_2_637BB645FA4F6E89(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_637BB645FA4F6E89_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_156861AFEC568115(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_METHOD_2_156861AFEC568115_OFFSET))(this, a1);
		}
	};
}
