#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole::Timeline::TimelineComponent { class PreLoadCameraData; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEPRELOADCOMP_GETPRELOADCAMERADATA_OFFSET UNITYSDK_OFFSET(0x180ABBB0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEPRELOADCOMP__CTOR_OFFSET UNITYSDK_OFFSET(0x180ABBF0)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int RuntimeTimelinePreLoadComp_TypeDefinitionIndex = 58947;

	class RuntimeTimelinePreLoadComp : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::MoleMole::Timeline::TimelineComponent::PreLoadCameraData* CameraData; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEPRELOADCOMP__CTOR_OFFSET))(this);
		}

		::MoleMole::Timeline::TimelineComponent::PreLoadCameraData* GetPreLoadCameraData()
		{
			return ((::MoleMole::Timeline::TimelineComponent::PreLoadCameraData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEPRELOADCOMP_GETPRELOADCAMERADATA_OFFSET))(this);
		}
	};
}
