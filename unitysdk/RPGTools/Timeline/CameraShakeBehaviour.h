#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_2C65363A06719ECB;
class Class_1_469A5FF005CF3F5C;
namespace RPG::GameCore { class VCameraShakeV2; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_GET_DESTROYONCLIPEND_OFFSET UNITYSDK_OFFSET(0xE8251B0)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xE825190)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xE8253B0)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_METHOD_2_70C856AE64234BE0_OFFSET UNITYSDK_OFFSET(0xE8255B0)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_METHOD_2_C86CA48475AE1200_OFFSET UNITYSDK_OFFSET(0xE825770)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_METHOD_2_D240830C442C70A4_OFFSET UNITYSDK_OFFSET(0xE8256B0)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_METHOD_2_E4EC0FD7A76783C9_OFFSET UNITYSDK_OFFSET(0xE825330)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE825610)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8251D0)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_SET_DESTROYONCLIPEND_OFFSET UNITYSDK_OFFSET(0xE8251C0)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xE8251A0)
#define RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE825910)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CameraShakeBehaviour_TypeDefinitionIndex = 48267;

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

		::System::Void set_UniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_SET_UNIQUENAME_OFFSET))(this, a1);
		}

		::System::Boolean get_DestroyOnClipEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_GET_DESTROYONCLIPEND_OFFSET))(this);
		}

		::System::Void set_DestroyOnClipEnd(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_SET_DESTROYONCLIPEND_OFFSET))(this, a1);
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

		::System::Void Method_2_70C856AE64234BE0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_METHOD_2_70C856AE64234BE0_OFFSET))(this);
		}

		::Class_1_2C65363A06719ECB* Method_2_C86CA48475AE1200()
		{
			return ((::Class_1_2C65363A06719ECB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKEBEHAVIOUR_METHOD_2_C86CA48475AE1200_OFFSET))(this);
		}
	};
}
