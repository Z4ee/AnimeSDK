#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEmoPlayableGraph_EyeState.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"
#include "unitysdk/Struct_2_2A9144AA173D64D2.h"
#include "unitysdk/Struct_2_D4BB5A538F80370F.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/AnimationBlendMode.h"
#include "unitysdk/UnityEngine/Animations/AnimationMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace RPGTools::Timeline::Emotion { class EmoTimelineClip; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_046C2C2728921AD0_OFFSET UNITYSDK_OFFSET(0x11F1A870)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x11F17800)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_2F785FD1AE6659A9_OFFSET UNITYSDK_OFFSET(0x11F1AA10)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0x11F176C0)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x11F177A0)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_82E78E5C348471FD_OFFSET UNITYSDK_OFFSET(0x11F17730)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_85A10AFB94D20CDB_OFFSET UNITYSDK_OFFSET(0x11F19A80)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_B616A785E57BCFB2_OFFSET UNITYSDK_OFFSET(0x11F17190)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x11F17180)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11F17170)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_F479D39C465F83EE_OFFSET UNITYSDK_OFFSET(0x11F1AF50)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_F50FFA929A13BB35_OFFSET UNITYSDK_OFFSET(0x11F184B0)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_F9B4BC6D02881B77_OFFSET UNITYSDK_OFFSET(0x11F17B80)
#define CLASS_2_15EB0D7783E0FF4D_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x11F17F90)
#define CLASS_2_15EB0D7783E0FF4D_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x11F18050)
#define CLASS_2_15EB0D7783E0FF4D_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x11F18120)
#define CLASS_2_15EB0D7783E0FF4D__CTOR_OFFSET UNITYSDK_OFFSET(0x11F1B360)
#define CLASS_2_15EB0D7783E0FF4D___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x11F1B400)
#define CLASS_2_15EB0D7783E0FF4D___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x11F1B410)
#define CLASS_2_15EB0D7783E0FF4D___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x11F1B420)

inline static constexpr unsigned int Class_2_15EB0D7783E0FF4D_TypeDefinitionIndex = 45461;

class Class_2_15EB0D7783E0FF4D : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::Double Field_2_0; // 0x0
	::Struct_2_2A9144AA173D64D2 Field_2_9; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_D4BB5A538F80370F>* Field_2_8; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_2_7; // 0x30
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Single>>* Field_2_12; // 0x38
	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* Field_2_10; // 0x40
	::RPG::Client::MonoEmoPlayableGraph* Field_2_6; // 0x48
	::System::Single Field_2_3; // 0x50
	::UnityEngine::AnimationBlendMode Field_2_2; // 0x54
	::UnityEngine::Animations::AnimationMixerPlayable Field_2_4; // 0x58
	::RPGTools::Timeline::Emotion::EmoTrackType Field_2_5; // 0x68
	::System::Boolean Field_2_1; // 0x6C
	::System::Boolean Field_2_11; // 0x6D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_2_B616A785E57BCFB2(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_B616A785E57BCFB2_OFFSET))(this, a1);
	}

	::System::Void Method_2_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_2_82E78E5C348471FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_82E78E5C348471FD_OFFSET))(this);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F9B4BC6D02881B77(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_F9B4BC6D02881B77_OFFSET))(this, a1);
	}

	::System::Void Method_2_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_2F0F99A12DB93F30_OFFSET))(this);
	}

	::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_ONPLAYABLECREATE_OFFSET))(this, a1);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_85A10AFB94D20CDB(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_85A10AFB94D20CDB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F50FFA929A13BB35(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_F50FFA929A13BB35_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2F785FD1AE6659A9(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_2F785FD1AE6659A9_OFFSET))(this, a1);
	}

	::System::Void Method_2_046C2C2728921AD0(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_046C2C2728921AD0_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEmoPlayableGraph_EyeState Method_2_F479D39C465F83EE(::RPGTools::Timeline::Emotion::EmoTimelineClip* a1)
	{
		return ((::RPG::Client::MonoEmoPlayableGraph_EyeState(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoTimelineClip*))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_F479D39C465F83EE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnPlayableCreate(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D___IFIXBASEPROXY_ONPLAYABLECREATE_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnPlayableDestroy(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D___IFIXBASEPROXY_ONPLAYABLEDESTROY_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
	}
};
