#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_B68C2A3D97734EDB_METHOD_2_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0x15BB7CD0)
#define CLASS_2_B68C2A3D97734EDB_METHOD_2_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x15BB7A70)
#define CLASS_2_B68C2A3D97734EDB_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x15BB7EA0)
#define CLASS_2_B68C2A3D97734EDB_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x15BB8030)
#define CLASS_2_B68C2A3D97734EDB_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15BB7F80)
#define CLASS_2_B68C2A3D97734EDB_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15BB7670)
#define CLASS_2_B68C2A3D97734EDB__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB80E0)

inline static constexpr unsigned int Class_2_B68C2A3D97734EDB_TypeDefinitionIndex = 48517;

class Class_2_B68C2A3D97734EDB : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::Single HPJADEGEGDB; // 0x0
	// static const ::System::Single BBAINMDMALF; // 0x0
	::UnityEngine::Camera* IEMGKEFBPCG; // 0x10
	::UnityEngine::AnimationClip* EHAGPHLMPEJ; // 0x18
	::UnityEngine::Camera* DMBMOHJLNEN; // 0x20
	::UnityEngine::GameObject* KNGMBOLJFPN; // 0x28
	::System::Single GJDEGANOCCO; // 0x30
	::System::Boolean DNFOKAPGFHA; // 0x34
	::System::Boolean NINHNNILLLF; // 0x35
	::System::Double NPINECOCALC; // 0x38
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x40
	::System::Single ELCCJDOLGNG; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B68C2A3D97734EDB__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B68C2A3D97734EDB_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_B68C2A3D97734EDB_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B68C2A3D97734EDB_METHOD_2_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Void Method_2_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B68C2A3D97734EDB_METHOD_2_B235E757922104A8_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_B68C2A3D97734EDB_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_B68C2A3D97734EDB_ONGRAPHSTOP_OFFSET))(this, a1);
	}
};
