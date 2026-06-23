#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define MIHOYO_TOOLKIT_CGTOOLKIT_TRACKREFERENCE_RECORDTRACKREFERENCE_OFFSET UNITYSDK_OFFSET(0xE944850)
#define MIHOYO_TOOLKIT_CGTOOLKIT_TRACKREFERENCE_SETTRACKREFERENCEBYTYPE_OFFSET UNITYSDK_OFFSET(0xE944920)
#define MIHOYO_TOOLKIT_CGTOOLKIT_TRACKREFERENCE_SETTRACKREFERENCE_OFFSET UNITYSDK_OFFSET(0xE9449F0)
#define MIHOYO_TOOLKIT_CGTOOLKIT_TRACKREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0xE944750)

namespace MiHoYo::ToolKit::CGToolKit
{
	inline static constexpr unsigned int TrackReference_TypeDefinitionIndex = 54684;

	class TrackReference : public ::System::Object
	{
	public:
		::System::String* trackTransformPath; // 0x10
		::System::Type* trackType; // 0x18
		::System::String* guid; // 0x20

		::System::Void _ctor(::UnityEngine::Timeline::TrackAsset* trackAsset, ::UnityEngine::Object* trackObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_TRACKREFERENCE__CTOR_OFFSET))(this, trackAsset, trackObject);
		}

		::System::Void RecordTrackReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_TRACKREFERENCE_RECORDTRACKREFERENCE_OFFSET))(this);
		}

		::System::Void SetTrackReferenceByType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_TRACKREFERENCE_SETTRACKREFERENCEBYTYPE_OFFSET))(this);
		}

		::System::Void SetTrackReference(::UnityEngine::GameObject* gameObject, ::UnityEngine::Timeline::TrackAsset* trackAsset, ::UnityEngine::Playables::PlayableDirector* playableDirector)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_TRACKREFERENCE_SETTRACKREFERENCE_OFFSET))(this, gameObject, trackAsset, playableDirector);
		}
	};
}
