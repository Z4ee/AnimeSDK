#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace miHoYoEmotion { class EmoSync; }
namespace miHoYoEmotion { class SequenceClipBakeData; }

#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x168958E0)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x168958F0)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x168958C0)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_METHOD_3_ED01C45E2F8DB392_OFFSET UNITYSDK_OFFSET(0x168958D0)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16895820)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x16895250)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x16894E10)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_ONPROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x168955E0)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16895870)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int EmoSyncAnimationBehavior_TypeDefinitionIndex = 57405;

	class EmoSyncAnimationBehavior : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::miHoYoEmotion::EmoSync* emoSync; // 0x18
		::System::String* voiceKey; // 0x20
		::System::String* avatarShowingKey; // 0x28
		::System::String* emoFacialKey; // 0x30
		::System::String* emoPoseKey; // 0x38
		::miHoYoEmotion::SequenceClipBakeData* bakeData; // 0x40
		::Foundation::AssetRequestHandle handler; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Playables::FrameData a3, ::System::Object* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_ONPROCESSFRAME_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_3_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_METHOD_3_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_3_ED01C45E2F8DB392(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Playables::FrameData a3, ::System::Object* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_METHOD_3_ED01C45E2F8DB392_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_3_832295EC279E5994_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_METHOD_3_832295EC279E5994_1_OFFSET))(this);
		}

		::System::Void Method_3_832295EC279E5994_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_METHOD_3_832295EC279E5994_2_OFFSET))(this);
		}
	};
}
