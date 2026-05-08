#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/TimelineComponent/NoSeamlessBaseReferenceCompInfo.h"

namespace MoleMole::Timeline { class MonoSyncTransform; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_MONOSYNCTRANSFORMSYNCINFO_INITINFO_OFFSET UNITYSDK_OFFSET(0x12FC2B20)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_MONOSYNCTRANSFORMSYNCINFO_REBIND_OFFSET UNITYSDK_OFFSET(0x12FC2DB0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_MONOSYNCTRANSFORMSYNCINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12FC2AD0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_MONOSYNCTRANSFORMSYNCINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x12FC2A90)

namespace MoleMole::Timeline::TimelineComponent::RebindComps
{
	inline static constexpr unsigned int MonoSyncTransformSyncInfo_TypeDefinitionIndex = 72208;

	class MonoSyncTransformSyncInfo : public ::MoleMole::Timeline::TimelineComponent::NoSeamlessBaseReferenceCompInfo
	{
	public:
		::System::String* RelativePath; // 0x10
		::MoleMole::Timeline::MonoSyncTransform* Component; // 0x18
		::System::String* syncTargetPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_MONOSYNCTRANSFORMSYNCINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MoleMole::Timeline::MonoSyncTransform* component)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Timeline::MonoSyncTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_MONOSYNCTRANSFORMSYNCINFO__CTOR_1_OFFSET))(this, component);
		}

		::System::Void InitInfo(::MoleMole::Timeline::MonoSyncTransform* component)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Timeline::MonoSyncTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_MONOSYNCTRANSFORMSYNCINFO_INITINFO_OFFSET))(this, component);
		}

		::System::Void Rebind(::UnityEngine::GameObject* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_MONOSYNCTRANSFORMSYNCINFO_REBIND_OFFSET))(this, root);
		}
	};
}
