#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/RPGTools/Timeline/VFX/EyeProtectionParameter.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::Client { class EnvironmentSystem; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x19F57830)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_41F5D9C0F0A306F5_OFFSET UNITYSDK_OFFSET(0x19F57A40)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_6FB03FD62E1385C7_OFFSET UNITYSDK_OFFSET(0x19F57570)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0x19F577C0)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x19F574E0)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_C5A8B603D63FD219_OFFSET UNITYSDK_OFFSET(0x19F57DB0)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x19F575E0)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x19F573B0)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x19F57690)
#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19F58780)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int EyeProtectionTimelineBehaviour_TypeDefinitionIndex = 46907;

	class EyeProtectionTimelineBehaviour : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
	{
	public:
		::RPGTools::Timeline::VFX::EyeProtectionParameter Parameter; // 0x18
		::RPGTools::Timeline::VFX::EyeProtectionParameter OrignParameter; // 0x30
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0x48
		::System::Boolean _openEyeProtect; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_41F5D9C0F0A306F5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_41F5D9C0F0A306F5_OFFSET))(this);
		}

		::RPGTools::Timeline::VFX::EyeProtectionParameter Method_3_6FB03FD62E1385C7()
		{
			return ((::RPGTools::Timeline::VFX::EyeProtectionParameter(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_6FB03FD62E1385C7_OFFSET))(this);
		}

		::System::Void Method_3_C5A8B603D63FD219(::RPGTools::Timeline::VFX::EyeProtectionParameter a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VFX::EyeProtectionParameter))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_C5A8B603D63FD219_OFFSET))(this, a1);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_870AF3CD1D0A67B1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_870AF3CD1D0A67B1_OFFSET))(this);
		}

		::System::Void Method_3_0D7638DBC93E5002()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONTIMELINEBEHAVIOUR_METHOD_3_0D7638DBC93E5002_OFFSET))(this);
		}
	};
}
