#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/TimelineComponent/NoSeamlessBaseReferenceCompInfo.h"

namespace MoleMole::Timeline { class MonoSyncTransform; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_NORMALSYNCREFERENCEINFO_CHECKISVALID_OFFSET UNITYSDK_OFFSET(0x13EC9F50)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_NORMALSYNCREFERENCEINFO_REBIND_OFFSET UNITYSDK_OFFSET(0x13EC9CC0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_NORMALSYNCREFERENCEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x13EC9C50)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_NORMALSYNCREFERENCEINFO___BASE_CHECKISVALID_OFFSET UNITYSDK_OFFSET(0x13ECA260)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int NormalSyncReferenceInfo_TypeDefinitionIndex = 67404;

	class NormalSyncReferenceInfo : public ::MoleMole::Timeline::TimelineComponent::NoSeamlessBaseReferenceCompInfo
	{
	public:
		::System::String* RelativePath; // 0x10
		::MoleMole::Timeline::MonoSyncTransform* SyncTransform; // 0x18

		::System::Void _ctor(::MoleMole::Timeline::MonoSyncTransform* syncTransform)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Timeline::MonoSyncTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_NORMALSYNCREFERENCEINFO__CTOR_OFFSET))(this, syncTransform);
		}

		::System::Void Rebind(::UnityEngine::GameObject* referenceRoot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_NORMALSYNCREFERENCEINFO_REBIND_OFFSET))(this, referenceRoot);
		}

		::System::Boolean CheckIsValid(::UnityEngine::GameObject* root)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_NORMALSYNCREFERENCEINFO_CHECKISVALID_OFFSET))(this, root);
		}

		::System::Boolean __base_CheckIsValid(::UnityEngine::GameObject* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_NORMALSYNCREFERENCEINFO___BASE_CHECKISVALID_OFFSET))(this, P0);
		}
	};
}
