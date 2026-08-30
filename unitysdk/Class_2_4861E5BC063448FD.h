#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_2_ECB175C9BCA58E24;
namespace RPGTools::Timeline { class ScaleCharacterNodeClip; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_4861E5BC063448FD_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x15DF97B0)
#define CLASS_2_4861E5BC063448FD_METHOD_2_C1E0405EEC95DC65_OFFSET UNITYSDK_OFFSET(0x15DF9880)
#define CLASS_2_4861E5BC063448FD_METHOD_2_CEE772DE95055C01_OFFSET UNITYSDK_OFFSET(0x15DF9A10)
#define CLASS_2_4861E5BC063448FD_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x15DF9AE0)
#define CLASS_2_4861E5BC063448FD_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x15DF97D0)
#define CLASS_2_4861E5BC063448FD_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x15DF97C0)
#define CLASS_2_4861E5BC063448FD__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF9CB0)

inline static constexpr unsigned int Class_2_4861E5BC063448FD_TypeDefinitionIndex = 48728;

class Class_2_4861E5BC063448FD : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::RPGTools::Timeline::ScaleCharacterNodeClip* _Clip_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* NCLIDDOOBGC; // 0x18
	::Class_2_ECB175C9BCA58E24* CCHAMIHMEEF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4861E5BC063448FD__CTOR_OFFSET))(this);
	}

	::RPGTools::Timeline::ScaleCharacterNodeClip* get_Clip()
	{
		return ((::RPGTools::Timeline::ScaleCharacterNodeClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4861E5BC063448FD_GET_CLIP_OFFSET))(this);
	}

	::System::Void set_Clip(::RPGTools::Timeline::ScaleCharacterNodeClip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ScaleCharacterNodeClip*))((::PBYTE)hIl2Cpp + CLASS_2_4861E5BC063448FD_SET_CLIP_OFFSET))(this, a1);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_4861E5BC063448FD_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_4861E5BC063448FD_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C1E0405EEC95DC65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4861E5BC063448FD_METHOD_2_C1E0405EEC95DC65_OFFSET))(this);
	}

	::System::Void Method_2_CEE772DE95055C01(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4861E5BC063448FD_METHOD_2_CEE772DE95055C01_OFFSET))(this, a1);
	}
};
