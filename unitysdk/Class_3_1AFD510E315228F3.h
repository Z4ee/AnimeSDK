#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPGTools::Timeline { class CameraData; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Camera; }

#define CLASS_3_1AFD510E315228F3_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x15B0FA70)
#define CLASS_3_1AFD510E315228F3_METHOD_3_CD332CB50EA0A277_OFFSET UNITYSDK_OFFSET(0x15B0F090)
#define CLASS_3_1AFD510E315228F3_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x15B0F510)
#define CLASS_3_1AFD510E315228F3_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x15B0F9E0)
#define CLASS_3_1AFD510E315228F3_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15B0F7F0)
#define CLASS_3_1AFD510E315228F3_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15B0EFE0)
#define CLASS_3_1AFD510E315228F3__CTOR_OFFSET UNITYSDK_OFFSET(0x15B0FB20)

inline static constexpr unsigned int Class_3_1AFD510E315228F3_TypeDefinitionIndex = 48899;

class Class_3_1AFD510E315228F3 : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
{
public:
	// static const ::System::Single PNIJINJNLOI; // 0x0
	// static const ::System::Single ABJLMHCJJPF; // 0x0
	::UnityEngine::AnimationClip* EHAGPHLMPEJ; // 0x18
	::UnityEngine::Animation* KECNBLFGCAL; // 0x20
	::UnityEngine::Camera* FGAEINFODPA; // 0x28
	::RPGTools::Timeline::CameraData* IJDAJGKLAKH; // 0x30
	::System::Boolean DACMFGDHIMN; // 0x38
	::System::Single IPOMOEDEBGI; // 0x3C
	::System::Single MFIKOOOBMFL; // 0x40
	::System::Single IGHOFMLBICF; // 0x44
	::System::Double LLICGDGPMJL; // 0x48
	::System::Single PFECIOFGLKM; // 0x50
	::System::Double EPOLJCOBFFC; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1AFD510E315228F3__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_1AFD510E315228F3_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_3_1AFD510E315228F3_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_1AFD510E315228F3_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_1AFD510E315228F3_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_3_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1AFD510E315228F3_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_3_CD332CB50EA0A277(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_1AFD510E315228F3_METHOD_3_CD332CB50EA0A277_OFFSET))(this, a1);
	}
};
