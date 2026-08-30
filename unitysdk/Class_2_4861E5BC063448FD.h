#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_2_ECB175C9BCA58E24;
namespace RPGTools::Timeline { class ScaleCharacterNodeClip; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_4861E5BC063448FD_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xC799FA0)
#define CLASS_2_4861E5BC063448FD_METHOD_2_41145AA5EA656E9C_OFFSET UNITYSDK_OFFSET(0xC79A070)
#define CLASS_2_4861E5BC063448FD_METHOD_2_CEE772DE95055C01_OFFSET UNITYSDK_OFFSET(0xC79A200)
#define CLASS_2_4861E5BC063448FD_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xC79A2D0)
#define CLASS_2_4861E5BC063448FD_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xC799FC0)
#define CLASS_2_4861E5BC063448FD_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xC799FB0)
#define CLASS_2_4861E5BC063448FD__CTOR_OFFSET UNITYSDK_OFFSET(0xC79A4A0)

inline static constexpr unsigned int Class_2_4861E5BC063448FD_TypeDefinitionIndex = 48728;

class Class_2_4861E5BC063448FD : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* NCLIDDOOBGC; // 0x10
	::Class_2_ECB175C9BCA58E24* CCHAMIHMEEF; // 0x18
	::RPGTools::Timeline::ScaleCharacterNodeClip* _Clip_k__BackingField; // 0x20

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

	::System::Void Method_2_41145AA5EA656E9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4861E5BC063448FD_METHOD_2_41145AA5EA656E9C_OFFSET))(this);
	}

	::System::Void Method_2_CEE772DE95055C01(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4861E5BC063448FD_METHOD_2_CEE772DE95055C01_OFFSET))(this, a1);
	}
};
