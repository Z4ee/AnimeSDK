#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EffectLODType.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_COLLECTPARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x18198D40)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_START_OFFSET UNITYSDK_OFFSET(0x181994E0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_UPDATELOD_OFFSET UNITYSDK_OFFSET(0x18199250)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18199530)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int RuntimeTimelineEffectLodManager_TypeDefinitionIndex = 84782;

	class RuntimeTimelineEffectLodManager : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Boolean IsTestLoadType; // 0x58
		::MoleMole::Config::EffectLODType testShowLodType; // 0x5C
		::System::Collections::Generic::Dictionary_2<::UnityEngine::ParticleSystem*, ::MoleMole::Config::EffectLODType>* effectLodManagers; // 0x60
		::System::Collections::Generic::Dictionary_2<::UnityEngine::ParticleSystem*, ::MoleMole::Config::EffectLODType>* emptyEffectLodManagers; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void CollectParticleSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_COLLECTPARTICLESYSTEM_OFFSET))(this);
		}

		::System::Void UpdateLod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_UPDATELOD_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_START_OFFSET))(this);
		}
	};
}
