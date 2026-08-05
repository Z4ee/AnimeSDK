#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CGRuntimeUnitLoadType.h"
#include "unitysdk/MoleMole/Timeline/TimelineComponent/SeamlessBaseReferenceCompInfo.h"

namespace MoleMole { class CGRuntimeUnit; }
namespace MoleMole::Timeline { class MonoSyncTransform; }
namespace System { class String; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SYNCREFERENCEINFO_INITBASEINFO_OFFSET UNITYSDK_OFFSET(0x180AC010)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SYNCREFERENCEINFO_REBIND_OFFSET UNITYSDK_OFFSET(0x180ABC40)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SYNCREFERENCEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x180AC140)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SYNCREFERENCEINFO___BASE_INITBASEINFO_OFFSET UNITYSDK_OFFSET(0x180AC1C0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SYNCREFERENCEINFO___BASE_REBIND_OFFSET UNITYSDK_OFFSET(0x180AC280)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int SyncReferenceInfo_TypeDefinitionIndex = 85098;

	class SyncReferenceInfo : public ::MoleMole::Timeline::TimelineComponent::SeamlessBaseReferenceCompInfo
	{
	public:
		::System::String* relativePath; // 0x30
		::MoleMole::Timeline::MonoSyncTransform* SyncTransform; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SYNCREFERENCEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Rebind(::UnityEngine::GameObject* referenceRoot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SYNCREFERENCEINFO_REBIND_OFFSET))(this, referenceRoot);
		}

		::System::Void InitBaseInfo(::MoleMole::CGRuntimeUnit* runtimeUnit, ::UnityEngine::Component* component, ::MoleMole::CGRuntimeUnitLoadType loadType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CGRuntimeUnit*, ::UnityEngine::Component*, ::MoleMole::CGRuntimeUnitLoadType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SYNCREFERENCEINFO_INITBASEINFO_OFFSET))(this, runtimeUnit, component, loadType);
		}

		::System::Void __base_InitBaseInfo(::MoleMole::CGRuntimeUnit* P0, ::UnityEngine::Component* P1, ::MoleMole::CGRuntimeUnitLoadType P2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CGRuntimeUnit*, ::UnityEngine::Component*, ::MoleMole::CGRuntimeUnitLoadType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SYNCREFERENCEINFO___BASE_INITBASEINFO_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_Rebind(::UnityEngine::GameObject* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SYNCREFERENCEINFO___BASE_REBIND_OFFSET))(this, P0);
		}
	};
}
