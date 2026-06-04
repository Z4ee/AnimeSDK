#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_2_C3443B69B182ED81;
namespace RPGTools::Timeline { class ScaleCharacterNodeClip; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_877EDC739BDA0FA5_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xB29C1B0)
#define CLASS_2_877EDC739BDA0FA5_METHOD_2_A97853745B74DFF6_OFFSET UNITYSDK_OFFSET(0xB29C280)
#define CLASS_2_877EDC739BDA0FA5_METHOD_2_CEE772DE95055C01_OFFSET UNITYSDK_OFFSET(0xB29C3E0)
#define CLASS_2_877EDC739BDA0FA5_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB29C4B0)
#define CLASS_2_877EDC739BDA0FA5_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB29C1D0)
#define CLASS_2_877EDC739BDA0FA5_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xB29C1C0)
#define CLASS_2_877EDC739BDA0FA5__CTOR_OFFSET UNITYSDK_OFFSET(0xB29C680)
#define CLASS_2_877EDC739BDA0FA5___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB29C6A0)
#define CLASS_2_877EDC739BDA0FA5___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB29C690)

inline static constexpr unsigned int Class_2_877EDC739BDA0FA5_TypeDefinitionIndex = 45559;

class Class_2_877EDC739BDA0FA5 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Class_2_C3443B69B182ED81* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_1; // 0x18
	::RPGTools::Timeline::ScaleCharacterNodeClip* _Clip_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_877EDC739BDA0FA5__CTOR_OFFSET))(this);
	}

	::RPGTools::Timeline::ScaleCharacterNodeClip* get_Clip()
	{
		return ((::RPGTools::Timeline::ScaleCharacterNodeClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_877EDC739BDA0FA5_GET_CLIP_OFFSET))(this);
	}

	::System::Void set_Clip(::RPGTools::Timeline::ScaleCharacterNodeClip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ScaleCharacterNodeClip*))((::PBYTE)hIl2Cpp + CLASS_2_877EDC739BDA0FA5_SET_CLIP_OFFSET))(this, a1);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_877EDC739BDA0FA5_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_877EDC739BDA0FA5_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A97853745B74DFF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_877EDC739BDA0FA5_METHOD_2_A97853745B74DFF6_OFFSET))(this);
	}

	::System::Void Method_2_CEE772DE95055C01(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_877EDC739BDA0FA5_METHOD_2_CEE772DE95055C01_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_877EDC739BDA0FA5___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_877EDC739BDA0FA5___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}
};
