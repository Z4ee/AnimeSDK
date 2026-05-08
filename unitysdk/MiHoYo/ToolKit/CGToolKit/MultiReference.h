#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class MultiRendererTrack; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class TimelineAsset; }

#define MIHOYO_TOOLKIT_CGTOOLKIT_MULTIREFERENCE_RECOVERREFERENCE_OFFSET UNITYSDK_OFFSET(0x123F3270)
#define MIHOYO_TOOLKIT_CGTOOLKIT_MULTIREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x123F2F20)

namespace MiHoYo::ToolKit::CGToolKit
{
	inline static constexpr unsigned int MultiReference_TypeDefinitionIndex = 45604;

	class MultiReference : public ::System::Object
	{
	public:
		::System::String* trackGuid; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* referenceObjPaths; // 0x18

		::System::Void _ctor(::System::String* guid, ::MoleMole::Timeline::MultiRendererTrack* referenceTrack)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Timeline::MultiRendererTrack*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_MULTIREFERENCE__CTOR_OFFSET))(this, guid, referenceTrack);
		}

		::System::Void RecoverReference(::UnityEngine::Timeline::TimelineAsset* timelineAsset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + MIHOYO_TOOLKIT_CGTOOLKIT_MULTIREFERENCE_RECOVERREFERENCE_OFFSET))(this, timelineAsset);
		}
	};
}
