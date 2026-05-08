#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CGRuntimeUnitLoadType.h"
#include "unitysdk/MoleMole/Timeline/TimelineComponent/SeamlessBaseReferenceCompInfo.h"

namespace MoleMole { class CGRuntimeUnit; }
namespace MoleMole::Timeline { class MonoSyncTransform; }
namespace System { class String; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMSYNCINFO_INITBASEINFO_OFFSET UNITYSDK_OFFSET(0x152BD610)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMSYNCINFO_INITINFO_OFFSET UNITYSDK_OFFSET(0x152BD730)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMSYNCINFO_REBIND_OFFSET UNITYSDK_OFFSET(0x152BD9B0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMSYNCINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x152BD570)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMSYNCINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x152BD4F0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMSYNCINFO___BASE_INITBASEINFO_OFFSET UNITYSDK_OFFSET(0x152BDF10)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMSYNCINFO___BASE_REBIND_OFFSET UNITYSDK_OFFSET(0x152BDFD0)

namespace MoleMole::Timeline::TimelineComponent::RebindComps
{
	inline static constexpr unsigned int SeamlessMonoSyncTransformSyncInfo_TypeDefinitionIndex = 64990;

	class SeamlessMonoSyncTransformSyncInfo : public ::MoleMole::Timeline::TimelineComponent::SeamlessBaseReferenceCompInfo
	{
	public:
		::MoleMole::Timeline::MonoSyncTransform* Component; // 0x30
		::System::String* syncTargetPath; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMSYNCINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MoleMole::CGRuntimeUnit* runtimeUnit, ::MoleMole::Timeline::MonoSyncTransform* component, ::MoleMole::CGRuntimeUnitLoadType loadType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CGRuntimeUnit*, ::MoleMole::Timeline::MonoSyncTransform*, ::MoleMole::CGRuntimeUnitLoadType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMSYNCINFO__CTOR_1_OFFSET))(this, runtimeUnit, component, loadType);
		}

		::System::Void InitBaseInfo(::MoleMole::CGRuntimeUnit* runtimeUnit, ::UnityEngine::Component* component, ::MoleMole::CGRuntimeUnitLoadType loadType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CGRuntimeUnit*, ::UnityEngine::Component*, ::MoleMole::CGRuntimeUnitLoadType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMSYNCINFO_INITBASEINFO_OFFSET))(this, runtimeUnit, component, loadType);
		}

		::System::Void InitInfo(::MoleMole::Timeline::MonoSyncTransform* component)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Timeline::MonoSyncTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMSYNCINFO_INITINFO_OFFSET))(this, component);
		}

		::System::Void Rebind(::UnityEngine::GameObject* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMSYNCINFO_REBIND_OFFSET))(this, root);
		}

		::System::Void __base_InitBaseInfo(::MoleMole::CGRuntimeUnit* P0, ::UnityEngine::Component* P1, ::MoleMole::CGRuntimeUnitLoadType P2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CGRuntimeUnit*, ::UnityEngine::Component*, ::MoleMole::CGRuntimeUnitLoadType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMSYNCINFO___BASE_INITBASEINFO_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_Rebind(::UnityEngine::GameObject* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMSYNCINFO___BASE_REBIND_OFFSET))(this, P0);
		}
	};
}
