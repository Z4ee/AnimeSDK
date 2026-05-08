#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/Timeline/TimelineComponent/RuntimeTimelineMap___c__DisplayClass4_0.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/TimelineBindingType.h"

class Class_1_F5001838B73D62A7;
namespace MoleMole { class CGRuntimeUnit; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP_GETSKINANDACCESSORYCONFIG_OFFSET UNITYSDK_OFFSET(0x13892F20)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP_REBIND_OFFSET UNITYSDK_OFFSET(0x13893230)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x13893F70)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP__REBIND_G__BINDGOTOTACK_4_0_OFFSET UNITYSDK_OFFSET(0x13893C00)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int RuntimeTimelineMap_TypeDefinitionIndex = 63419;

	class RuntimeTimelineMap : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::Playables::PlayableDirector* LightPlayableDirector; // 0x58
		::UnityEngine::Playables::PlayableDirector* EffectPlayableDirector; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::CGRuntimeUnit*>* unitReferences; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CGRuntimeUnit*>* GetSkinAndAccessoryConfig()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CGRuntimeUnit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP_GETSKINANDACCESSORYCONFIG_OFFSET))(this);
		}

		::System::Void Rebind(::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EntityType, ::System::Collections::Generic::List_1<::Class_1_F5001838B73D62A7*>*>* bindGos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EntityType, ::System::Collections::Generic::List_1<::Class_1_F5001838B73D62A7*>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP_REBIND_OFFSET))(this, bindGos);
		}

		static ::System::Void _Rebind_g__BindGoToTack_4_0(::TimelineBindingType trackBindType, ::UnityEngine::GameObject* go, ::UnityEngine::Timeline::TrackAsset* trackAsset, ::MoleMole::Timeline::TimelineComponent::RuntimeTimelineMap___c__DisplayClass4_0& a4)
		{
			return ((::System::Void(*)(::TimelineBindingType, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TrackAsset*, ::MoleMole::Timeline::TimelineComponent::RuntimeTimelineMap___c__DisplayClass4_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP__REBIND_G__BINDGOTOTACK_4_0_OFFSET))(trackBindType, go, trackAsset, a4);
		}
	};
}
