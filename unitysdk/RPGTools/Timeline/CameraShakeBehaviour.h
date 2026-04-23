#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_2C65363A06719ECB;
class Class_1_469A5FF005CF3F5C;
namespace RPG::GameCore { class VCameraShakeV2; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_GET_DESTROYONCLIPEND_OFFSET UNITYSDK_OFFSET(0xB8A4F50)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xB8A4F30)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xB8A5150)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_METHOD_2_D240830C442C70A4_OFFSET UNITYSDK_OFFSET(0xB8A5430)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_METHOD_2_D576072A5004A133_OFFSET UNITYSDK_OFFSET(0xB8A54E0)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xB8A5330)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_METHOD_2_E4EC0FD7A76783C9_OFFSET UNITYSDK_OFFSET(0xB8A50D0)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB8A5390)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8A4F70)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_SET_DESTROYONCLIPEND_OFFSET UNITYSDK_OFFSET(0xB8A4F60)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xB8A4F40)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8A5670)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB8A5690)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8A5680)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CameraShakeBehaviour_TypeDefinitionIndex = 44578;

	class CameraShakeBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPG::GameCore::VCameraShakeV2* ShakeConfigV2; // 0x10
		::System::String* _UniqueName_k__BackingField; // 0x18
		::System::Boolean _DestroyOnClipEnd_k__BackingField; // 0x20
		::Class_1_469A5FF005CF3F5C* ShakeSource; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_GET_UNIQUENAME_OFFSET))(this);
		}

		::System::Void set_UniqueName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_SET_UNIQUENAME_OFFSET))(this, value);
		}

		::System::Boolean get_DestroyOnClipEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_GET_DESTROYONCLIPEND_OFFSET))(this);
		}

		::System::Void set_DestroyOnClipEnd(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_SET_DESTROYONCLIPEND_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_18982EFD3B740683()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_METHOD_2_18982EFD3B740683_OFFSET))(this);
		}

		::System::Boolean Method_2_D240830C442C70A4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_METHOD_2_D240830C442C70A4_OFFSET))(this);
		}

		::System::Boolean Method_2_E4EC0FD7A76783C9()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_METHOD_2_E4EC0FD7A76783C9_OFFSET))(this);
		}

		::System::Void Method_2_E11AC65AA0DC2249()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
		}

		::Class_1_2C65363A06719ECB* Method_2_D576072A5004A133()
		{
			return ((::Class_1_2C65363A06719ECB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_METHOD_2_D576072A5004A133_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}
	};
}
