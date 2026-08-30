#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::Client { class EnvironmentSystem; }

#define CLASS_3_C7B7AE694C409368_METHOD_3_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x17A7A1D0)
#define CLASS_3_C7B7AE694C409368_METHOD_3_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x17A7A3B0)
#define CLASS_3_C7B7AE694C409368_METHOD_3_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x17A79E70)
#define CLASS_3_C7B7AE694C409368_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x17A7A5E0)
#define CLASS_3_C7B7AE694C409368_METHOD_3_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x17A7A180)
#define CLASS_3_C7B7AE694C409368_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x17A79DD0)
#define CLASS_3_C7B7AE694C409368_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x17A7A110)
#define CLASS_3_C7B7AE694C409368__CTOR_OFFSET UNITYSDK_OFFSET(0x17A7A670)

inline static constexpr unsigned int Class_3_C7B7AE694C409368_TypeDefinitionIndex = 48806;

class Class_3_C7B7AE694C409368 : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
{
public:
	::RPG::Client::EnvironmentSystem* MFOEHEOIOEK; // 0x18
	::System::Boolean HNDIKCIBJGF; // 0x20
	::System::Boolean BFPOMNCDOMF; // 0x21
	::System::Boolean KPBDDGEOGDC; // 0x22
	::System::Boolean FBKELJMHPDB; // 0x23
	::System::Int32 ODAOIMBLPEK; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7B7AE694C409368__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_3_C7B7AE694C409368_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_C7B7AE694C409368_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void Method_3_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7B7AE694C409368_METHOD_3_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_3_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7B7AE694C409368_METHOD_3_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_3_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7B7AE694C409368_METHOD_3_21886A8411E71157_OFFSET))(this);
	}

	::System::Void Method_3_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7B7AE694C409368_METHOD_3_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7B7AE694C409368_METHOD_3_9681042564541CD6_OFFSET))(this);
	}
};
