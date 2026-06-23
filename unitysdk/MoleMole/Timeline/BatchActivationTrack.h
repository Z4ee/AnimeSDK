#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class IExposedPropertyTable; }

#define MOLEMOLE_TIMELINE_BATCHACTIVATIONTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x18717AF0)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONTRACK_METHOD_5_14014646206E49EF_OFFSET UNITYSDK_OFFSET(0x187181C0)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONTRACK_METHOD_5_B1CEB44F8026DA0D_OFFSET UNITYSDK_OFFSET(0x18718340)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONTRACK_METHOD_5_F7662FE9CCCA35A7_OFFSET UNITYSDK_OFFSET(0x18717E60)
#define MOLEMOLE_TIMELINE_BATCHACTIVATIONTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18718120)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int BatchActivationTrack_TypeDefinitionIndex = 71323;

	class BatchActivationTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::ExposedReference_1<::UnityEngine::GameObject*>>* targetReferences; // 0xB0
		::UnityEngine::IExposedPropertyTable* _resolver; // 0xB8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _resolvedTargets; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_14014646206E49EF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONTRACK_METHOD_5_14014646206E49EF_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable Method_5_B1CEB44F8026DA0D(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONTRACK_METHOD_5_B1CEB44F8026DA0D_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_5_F7662FE9CCCA35A7()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHACTIVATIONTRACK_METHOD_5_F7662FE9CCCA35A7_OFFSET))(this);
		}
	};
}
