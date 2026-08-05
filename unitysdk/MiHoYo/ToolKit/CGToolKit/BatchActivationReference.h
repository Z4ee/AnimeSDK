#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class IExposedPropertyTable; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define MIHOYO_TOOLKIT_CGTOOLKIT_BATCHACTIVATIONREFERENCE_RECOVERREFERENCE_OFFSET UNITYSDK_OFFSET(0xF118F90)
#define MIHOYO_TOOLKIT_CGTOOLKIT_BATCHACTIVATIONREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0xF118C50)

namespace MiHoYo::ToolKit::CGToolKit
{
	inline static constexpr unsigned int BatchActivationReference_TypeDefinitionIndex = 54878;

	class BatchActivationReference : public ::System::Object
	{
	public:
		::System::String* trackGuid; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* referenceObjPaths; // 0x18

		::System::Void _ctor(::System::String* guid, ::UnityEngine::Timeline::TrackAsset* batchTrack, ::UnityEngine::IExposedPropertyTable* resolver)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::IExposedPropertyTable*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_BATCHACTIVATIONREFERENCE__CTOR_OFFSET))(this, guid, batchTrack, resolver);
		}

		::System::Void RecoverReference(::UnityEngine::Timeline::TimelineAsset* timelineAsset, ::UnityEngine::IExposedPropertyTable* resolver)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineAsset*, ::UnityEngine::IExposedPropertyTable*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_BATCHACTIVATIONREFERENCE_RECOVERREFERENCE_OFFSET))(this, timelineAsset, resolver);
		}
	};
}
