#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPGTools::Timeline::Discussion { class CameraCompositionClip; }
namespace System { class String; }

#define CLASS_2_BC5DA23B0BE31195_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x873C690)
#define CLASS_2_BC5DA23B0BE31195_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x873CCA0)
#define CLASS_2_BC5DA23B0BE31195_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x873C740)
#define CLASS_2_BC5DA23B0BE31195_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x873C9F0)
#define CLASS_2_BC5DA23B0BE31195_METHOD_2_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0x873CBF0)
#define CLASS_2_BC5DA23B0BE31195_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x873D060)
#define CLASS_2_BC5DA23B0BE31195_METHOD_2_7179D7610C5244E3_OFFSET UNITYSDK_OFFSET(0x873D4A0)
#define CLASS_2_BC5DA23B0BE31195_METHOD_2_E81B8BBC3A3FBBB3_OFFSET UNITYSDK_OFFSET(0x873D2F0)
#define CLASS_2_BC5DA23B0BE31195_METHOD_2_ED79705457B92B5C_OFFSET UNITYSDK_OFFSET(0x873D150)
#define CLASS_2_BC5DA23B0BE31195_METHOD_2_F9874C6724708020_OFFSET UNITYSDK_OFFSET(0x873CDA0)
#define CLASS_2_BC5DA23B0BE31195_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x873C6B0)
#define CLASS_2_BC5DA23B0BE31195_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x873C6A0)
#define CLASS_2_BC5DA23B0BE31195__CTOR_OFFSET UNITYSDK_OFFSET(0x873D700)
#define CLASS_2_BC5DA23B0BE31195___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x873D710)

inline static constexpr unsigned int Class_2_BC5DA23B0BE31195_TypeDefinitionIndex = 39562;

class Class_2_BC5DA23B0BE31195 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::RPGTools::Timeline::Discussion::CameraCompositionClip* _Clip_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC5DA23B0BE31195__CTOR_OFFSET))(this);
	}

	::RPGTools::Timeline::Discussion::CameraCompositionClip* get_Clip()
	{
		return ((::RPGTools::Timeline::Discussion::CameraCompositionClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC5DA23B0BE31195_GET_CLIP_OFFSET))(this);
	}

	::System::Void set_Clip(::RPGTools::Timeline::Discussion::CameraCompositionClip* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Discussion::CameraCompositionClip*))((::PBYTE)hIl2Cpp + CLASS_2_BC5DA23B0BE31195_SET_CLIP_OFFSET))(this, value);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_BC5DA23B0BE31195_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC5DA23B0BE31195_METHOD_2_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Void Method_2_45714050EDEF8291()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC5DA23B0BE31195_METHOD_2_45714050EDEF8291_OFFSET))(this);
	}

	::System::Void Method_2_F9874C6724708020(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BC5DA23B0BE31195_METHOD_2_F9874C6724708020_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E81B8BBC3A3FBBB3(::Cinemachine::CinemachineVirtualCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_2_BC5DA23B0BE31195_METHOD_2_E81B8BBC3A3FBBB3_OFFSET))(this, a1);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC5DA23B0BE31195_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC5DA23B0BE31195_METHOD_2_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_2_7179D7610C5244E3(::Cinemachine::CinemachineBrain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + CLASS_2_BC5DA23B0BE31195_METHOD_2_7179D7610C5244E3_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC5DA23B0BE31195_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_ED79705457B92B5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC5DA23B0BE31195_METHOD_2_ED79705457B92B5C_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_BC5DA23B0BE31195___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
	}
};
