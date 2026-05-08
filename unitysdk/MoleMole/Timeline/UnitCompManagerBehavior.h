#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

class Class_1_673D28D65400280C;
namespace MoleMole::Timeline { class UnitCompManagerParams; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_METHOD_3_0ED1963A672FB61E_OFFSET UNITYSDK_OFFSET(0x138960D0)
#define MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_METHOD_3_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x138960B0)
#define MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x138960C0)
#define MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x138960A0)
#define MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x13895F50)
#define MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x13895FB0)
#define MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x13895EF0)
#define MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x13896050)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int UnitCompManagerBehavior_TypeDefinitionIndex = 62236;

	class UnitCompManagerBehavior : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::UnityEngine::GameObject* ReferenceObject; // 0x18
		::MoleMole::Timeline::UnitCompManagerParams* Params; // 0x20
		::Class_1_673D28D65400280C* initParams; // 0x28
		::System::Boolean isInit; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void Method_3_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_METHOD_3_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_3_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_METHOD_3_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_3_832295EC279E5994_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_METHOD_3_832295EC279E5994_1_OFFSET))(this);
		}

		::System::Void Method_3_0ED1963A672FB61E(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNITCOMPMANAGERBEHAVIOR_METHOD_3_0ED1963A672FB61E_OFFSET))(this, a1);
		}
	};
}
