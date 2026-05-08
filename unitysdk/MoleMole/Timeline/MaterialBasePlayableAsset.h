#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Timeline/KFrameFieldType.h"

namespace MoleMole::Timeline { class MaterialBaseBehavior; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Timeline { class AnimationTrack; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_MATERIALBASEPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1C404850)
#define MOLEMOLE_TIMELINE_MATERIALBASEPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1C404840)
#define MOLEMOLE_TIMELINE_MATERIALBASEPLAYABLEASSET_GET_RECORDER_OFFSET UNITYSDK_OFFSET(0x1C4047D0)
#define MOLEMOLE_TIMELINE_MATERIALBASEPLAYABLEASSET_INITDATA_OFFSET UNITYSDK_OFFSET(0x1C4047E0)
#define MOLEMOLE_TIMELINE_MATERIALBASEPLAYABLEASSET_RELOADGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1C404830)
#define MOLEMOLE_TIMELINE_MATERIALBASEPLAYABLEASSET_REVERTATTR_OFFSET UNITYSDK_OFFSET(0x1C404940)
#define MOLEMOLE_TIMELINE_MATERIALBASEPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C404990)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialBasePlayableAsset_TypeDefinitionIndex = 30625;

	class MaterialBasePlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::MoleMole::Timeline::MaterialBaseBehavior* get_Recorder()
		{
			return ((::MoleMole::Timeline::MaterialBaseBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEPLAYABLEASSET_GET_RECORDER_OFFSET))(this);
		}

		::System::Void InitData(::UnityEngine::GameObject* bindObj, ::UnityEngine::Timeline::AnimationTrack* kFrameTrack, ::UnityEngine::Timeline::TimelineClip* parentClip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::AnimationTrack*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEPLAYABLEASSET_INITDATA_OFFSET))(this, bindObj, kFrameTrack, parentClip);
		}

		::System::Void ReloadGameObject(::UnityEngine::GameObject* bindObj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEPLAYABLEASSET_RELOADGAMEOBJECT_OFFSET))(this, bindObj);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, graph, go);
		}

		::System::Void RevertAttr(::System::String* attrName, ::UnityEngine::Timeline::KFrameFieldType fieldType, ::UnityEngine::Object* referenceObj, ::System::String* referenceObjRelativePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Timeline::KFrameFieldType, ::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEPLAYABLEASSET_REVERTATTR_OFFSET))(this, attrName, fieldType, referenceObj, referenceObjRelativePath);
		}
	};
}
