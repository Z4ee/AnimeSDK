#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MonoRenderEntity;
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_354822E56E8237B0_OFFSET UNITYSDK_OFFSET(0x13F2B220)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x13F2B510)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x13F2B400)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x13F2B150)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_927B092C347D3361_OFFSET UNITYSDK_OFFSET(0x13F2B410)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x13F2AED0)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x13F2AFD0)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x13F2AD60)
#define MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x13F2B110)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MonoRenderEntityBehavior_TypeDefinitionIndex = 81381;

	class MonoRenderEntityBehavior : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::MonoRenderEntity* RenderEntity; // 0x18
		::UnityEngine::Transform* middlePoint; // 0x20
		::System::String* middlePointPath; // 0x28
		::UnityEngine::Transform* headBone; // 0x30
		::System::String* headBonePath; // 0x38
		::UnityEngine::Transform* preMiddlePoint; // 0x40
		::UnityEngine::Transform* preHead; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_ONPAUSE_OFFSET))(this);
		}

		::System::Void Method_3_B09E78EE7EE4F8FA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_B09E78EE7EE4F8FA_OFFSET))(this);
		}

		::System::Void Method_3_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Void Method_3_354822E56E8237B0(::MonoRenderEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MonoRenderEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_354822E56E8237B0_OFFSET))(this, a1);
		}

		::System::Void Method_3_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_3_927B092C347D3361(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_927B092C347D3361_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_832295EC279E5994_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONORENDERENTITYBEHAVIOR_METHOD_3_832295EC279E5994_1_OFFSET))(this);
		}
	};
}
