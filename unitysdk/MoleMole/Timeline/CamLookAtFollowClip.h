#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class CamLookAtFollowBehaviour; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class IExposedPropertyTable; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x14509C30)
#define MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x14509C20)
#define MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWCLIP_METHOD_4_90ED96697237C7E1_OFFSET UNITYSDK_OFFSET(0x14509EA0)
#define MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1450A100)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CamLookAtFollowClip_TypeDefinitionIndex = 58481;

	class CamLookAtFollowClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::CamLookAtFollowBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Transform* Method_4_90ED96697237C7E1(::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> a1, ::UnityEngine::IExposedPropertyTable* a2, ::UnityEngine::GameObject* a3, ::System::String* a4)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::ExposedReference_1<::UnityEngine::Transform*>, ::UnityEngine::IExposedPropertyTable*, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWCLIP_METHOD_4_90ED96697237C7E1_OFFSET))(a1, a2, a3, a4);
		}
	};
}
