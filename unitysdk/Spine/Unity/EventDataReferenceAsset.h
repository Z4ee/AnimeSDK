#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace Spine { class EventData; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace System { class String; }

#define SPINE_UNITY_EVENTDATAREFERENCEASSET_GET_EVENTDATA_OFFSET UNITYSDK_OFFSET(0x18B3AA30)
#define SPINE_UNITY_EVENTDATAREFERENCEASSET_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18B3AA60)
#define SPINE_UNITY_EVENTDATAREFERENCEASSET_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x18B3AD70)
#define SPINE_UNITY_EVENTDATAREFERENCEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x18B3ADB0)

namespace Spine::Unity
{
	inline static constexpr unsigned int EventDataReferenceAsset_TypeDefinitionIndex = 37795;

	class EventDataReferenceAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		// static const ::System::Boolean QuietSkeletonData; // 0x0
		::Spine::Unity::SkeletonDataAsset* skeletonDataAsset; // 0x18
		::System::String* eventName; // 0x20
		::Spine::EventData* eventData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_EVENTDATAREFERENCEASSET__CTOR_OFFSET))(this);
		}

		::Spine::EventData* get_EventData()
		{
			return ((::Spine::EventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_EVENTDATAREFERENCEASSET_GET_EVENTDATA_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_EVENTDATAREFERENCEASSET_INITIALIZE_OFFSET))(this);
		}

		static ::Spine::EventData* op_Implicit(::Spine::Unity::EventDataReferenceAsset* asset)
		{
			return ((::Spine::EventData*(*)(::Spine::Unity::EventDataReferenceAsset*))((::PBYTE)hIl2Cpp + SPINE_UNITY_EVENTDATAREFERENCEASSET_OP_IMPLICIT_OFFSET))(asset);
		}
	};
}
