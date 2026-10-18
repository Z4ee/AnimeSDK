#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEmoPlayableGraph_EyeState.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"
#include "unitysdk/Struct_2_55E0E0B13F9B9D89.h"
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

#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_046C2C2728921AD0_OFFSET UNITYSDK_OFFSET(0xC227740)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0xC2247B0)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0xC224850)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_641F56D375880E3B_OFFSET UNITYSDK_OFFSET(0xC2240E0)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_642946C96BF76EA2_OFFSET UNITYSDK_OFFSET(0xC2278B0)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xC2248F0)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_AC96313FF120BAE7_OFFSET UNITYSDK_OFFSET(0xC224950)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_D8990018541138F9_OFFSET UNITYSDK_OFFSET(0xC224E70)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xC2240D0)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xC2240C0)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_F479D39C465F83EE_OFFSET UNITYSDK_OFFSET(0xC227FD0)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_F50FFA929A13BB35_1_OFFSET UNITYSDK_OFFSET(0xC2252F0)
#define CLASS_2_15EB0D7783E0FF4D_METHOD_2_F50FFA929A13BB35_OFFSET UNITYSDK_OFFSET(0xC226A70)
#define CLASS_2_15EB0D7783E0FF4D_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xC225080)
#define CLASS_2_15EB0D7783E0FF4D_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xC2250F0)
#define CLASS_2_15EB0D7783E0FF4D_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xC225160)
#define CLASS_2_15EB0D7783E0FF4D__CTOR_OFFSET UNITYSDK_OFFSET(0xC228120)

inline static constexpr unsigned int Class_2_15EB0D7783E0FF4D_TypeDefinitionIndex = 48775;

class Class_2_15EB0D7783E0FF4D : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::Double JFJFPDHILBB; // 0x0
	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* BCPHFKOEPGK; // 0x10
	::RPG::Client::MonoEmoPlayableGraph* IPKADGBKLEK; // 0x18
	::Struct_2_55E0E0B13F9B9D89 ACDJEMJDEFE; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* ELHLFCJHMFN; // 0x38
	::System::Collections::Generic::List_1<::Struct_2_D4BB5A538F80370F>* EEPPHHAPFGM; // 0x40
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Single>>* KLJAIMDINMG; // 0x48
	::UnityEngine::Animations::AnimationMixerPlayable PJFFKDHKKCE; // 0x50
	::System::Boolean FOKJJHOCCNK; // 0x60
	::System::Boolean GBJMFEKOCGO; // 0x61
	::UnityEngine::AnimationBlendMode LABKKJGFKGB; // 0x64
	::System::Single JLDBMPIOAED; // 0x68
	::RPGTools::Timeline::Emotion::EmoTrackType LHOGNPFFLMB; // 0x6C

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

	::System::Void Method_2_641F56D375880E3B(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_641F56D375880E3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_3B2051C60621D523()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_3B2051C60621D523_OFFSET))(this);
	}

	::System::Void Method_2_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8990018541138F9(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_D8990018541138F9_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC96313FF120BAE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_AC96313FF120BAE7_OFFSET))(this);
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

	::System::Void Method_2_F50FFA929A13BB35(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_F50FFA929A13BB35_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F50FFA929A13BB35_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_F50FFA929A13BB35_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_642946C96BF76EA2(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_642946C96BF76EA2_OFFSET))(this, a1);
	}

	::System::Void Method_2_046C2C2728921AD0(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_046C2C2728921AD0_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEmoPlayableGraph_EyeState Method_2_F479D39C465F83EE(::RPGTools::Timeline::Emotion::EmoTimelineClip* a1)
	{
		return ((::RPG::Client::MonoEmoPlayableGraph_EyeState(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoTimelineClip*))((::PBYTE)hIl2Cpp + CLASS_2_15EB0D7783E0FF4D_METHOD_2_F479D39C465F83EE_OFFSET))(this, a1);
	}
};
