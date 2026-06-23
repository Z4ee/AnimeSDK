#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5ACC12D56DC348A8.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class IExposedPropertyTable; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_IKBINDTARGETCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x15E2D4E0)
#define MOLEMOLE_TIMELINE_IKBINDTARGETCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x15E2D4D0)
#define MOLEMOLE_TIMELINE_IKBINDTARGETCLIP_METHOD_4_ADAAD18C696D4E4D_OFFSET UNITYSDK_OFFSET(0x15E2D740)
#define MOLEMOLE_TIMELINE_IKBINDTARGETCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x15E2D6E0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int IKBindTargetClip_TypeDefinitionIndex = 45398;

	class IKBindTargetClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::Enum_3_5ACC12D56DC348A8 ikType; // 0x18
		::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> target; // 0x20
		::UnityEngine::Transform* resolvedTarget; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_IKBINDTARGETCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_IKBINDTARGETCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_IKBINDTARGETCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_ADAAD18C696D4E4D(::UnityEngine::IExposedPropertyTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::IExposedPropertyTable*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_IKBINDTARGETCLIP_METHOD_4_ADAAD18C696D4E4D_OFFSET))(this, a1);
		}
	};
}
