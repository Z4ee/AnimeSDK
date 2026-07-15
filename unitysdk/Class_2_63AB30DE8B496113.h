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

#define CLASS_2_63AB30DE8B496113_METHOD_2_046C2C2728921AD0_OFFSET UNITYSDK_OFFSET(0x15E78280)
#define CLASS_2_63AB30DE8B496113_METHOD_2_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0x15E752B0)
#define CLASS_2_63AB30DE8B496113_METHOD_2_4B35060F2929FF6C_OFFSET UNITYSDK_OFFSET(0x15E75DF0)
#define CLASS_2_63AB30DE8B496113_METHOD_2_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0x15E75350)
#define CLASS_2_63AB30DE8B496113_METHOD_2_641F56D375880E3B_OFFSET UNITYSDK_OFFSET(0x15E74BE0)
#define CLASS_2_63AB30DE8B496113_METHOD_2_642946C96BF76EA2_OFFSET UNITYSDK_OFFSET(0x15E783F0)
#define CLASS_2_63AB30DE8B496113_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x15E753F0)
#define CLASS_2_63AB30DE8B496113_METHOD_2_AC96313FF120BAE7_OFFSET UNITYSDK_OFFSET(0x15E75450)
#define CLASS_2_63AB30DE8B496113_METHOD_2_D8990018541138F9_OFFSET UNITYSDK_OFFSET(0x15E75970)
#define CLASS_2_63AB30DE8B496113_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x15E74BD0)
#define CLASS_2_63AB30DE8B496113_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15E74BC0)
#define CLASS_2_63AB30DE8B496113_METHOD_2_F479D39C465F83EE_OFFSET UNITYSDK_OFFSET(0x15E78B10)
#define CLASS_2_63AB30DE8B496113_METHOD_2_F50FFA929A13BB35_OFFSET UNITYSDK_OFFSET(0x15E775B0)
#define CLASS_2_63AB30DE8B496113_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x15E75B80)
#define CLASS_2_63AB30DE8B496113_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15E75BF0)
#define CLASS_2_63AB30DE8B496113_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15E75C60)
#define CLASS_2_63AB30DE8B496113__CTOR_OFFSET UNITYSDK_OFFSET(0x15E78C60)

inline static constexpr unsigned int Class_2_63AB30DE8B496113_TypeDefinitionIndex = 46983;

class Class_2_63AB30DE8B496113 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::Double Field_2_0; // 0x0
	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* Field_2_1; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_D4BB5A538F80370F>* Field_2_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_2_3; // 0x20
	::RPG::Client::MonoEmoPlayableGraph* Field_2_4; // 0x28
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Single>>* Field_2_5; // 0x30
	::Struct_2_55E0E0B13F9B9D89 Field_2_6; // 0x38
	::UnityEngine::Animations::AnimationMixerPlayable Field_2_7; // 0x50
	::UnityEngine::AnimationBlendMode Field_2_8; // 0x60
	::RPGTools::Timeline::Emotion::EmoTrackType Field_2_9; // 0x64
	::System::Single Field_2_10; // 0x68
	::System::Boolean Field_2_11; // 0x6C
	::System::Boolean Field_2_12; // 0x6D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63AB30DE8B496113__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63AB30DE8B496113_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63AB30DE8B496113_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_2_641F56D375880E3B(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + CLASS_2_63AB30DE8B496113_METHOD_2_641F56D375880E3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_3B2051C60621D523()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63AB30DE8B496113_METHOD_2_3B2051C60621D523_OFFSET))(this);
	}

	::System::Void Method_2_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63AB30DE8B496113_METHOD_2_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_63AB30DE8B496113_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8990018541138F9(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_63AB30DE8B496113_METHOD_2_D8990018541138F9_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC96313FF120BAE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63AB30DE8B496113_METHOD_2_AC96313FF120BAE7_OFFSET))(this);
	}

	::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_63AB30DE8B496113_ONPLAYABLECREATE_OFFSET))(this, a1);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_63AB30DE8B496113_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_63AB30DE8B496113_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F50FFA929A13BB35(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_63AB30DE8B496113_METHOD_2_F50FFA929A13BB35_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4B35060F2929FF6C(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_63AB30DE8B496113_METHOD_2_4B35060F2929FF6C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_642946C96BF76EA2(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + CLASS_2_63AB30DE8B496113_METHOD_2_642946C96BF76EA2_OFFSET))(this, a1);
	}

	::System::Void Method_2_046C2C2728921AD0(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_63AB30DE8B496113_METHOD_2_046C2C2728921AD0_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEmoPlayableGraph_EyeState Method_2_F479D39C465F83EE(::RPGTools::Timeline::Emotion::EmoTimelineClip* a1)
	{
		return ((::RPG::Client::MonoEmoPlayableGraph_EyeState(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoTimelineClip*))((::PBYTE)hIl2Cpp + CLASS_2_63AB30DE8B496113_METHOD_2_F479D39C465F83EE_OFFSET))(this, a1);
	}
};
