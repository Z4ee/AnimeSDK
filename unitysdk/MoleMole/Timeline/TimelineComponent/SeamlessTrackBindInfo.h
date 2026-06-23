#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TimelineBindingType.h"

namespace MoleMole { class CGRuntimeUnit; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SEAMLESSTRACKBINDINFO_GETSYNCENTITYTAGID_OFFSET UNITYSDK_OFFSET(0x15E30A00)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SEAMLESSTRACKBINDINFO_GET_REFERENCENAME_OFFSET UNITYSDK_OFFSET(0x15E309A0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SEAMLESSTRACKBINDINFO_REBIND_OFFSET UNITYSDK_OFFSET(0x15E30D80)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SEAMLESSTRACKBINDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x15E313F0)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int SeamlessTrackBindInfo_TypeDefinitionIndex = 68062;

	class SeamlessTrackBindInfo : public ::System::Object
	{
	public:
		::MoleMole::Config::EntityType EntityType; // 0x10
		::System::Int32 unitId; // 0x14
		::System::Int32 index; // 0x18
		::System::String* relativePath; // 0x20
		::System::String* overrideTagStr; // 0x28
		::TimelineBindingType BindingType; // 0x30
		::System::String* trackGuid; // 0x38

		::System::Void _ctor(::MoleMole::CGRuntimeUnit* runtimeUnit, ::System::String* relativePath, ::System::String* _trackGuid)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CGRuntimeUnit*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SEAMLESSTRACKBINDINFO__CTOR_OFFSET))(this, runtimeUnit, relativePath, _trackGuid);
		}

		::System::String* get_ReferenceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SEAMLESSTRACKBINDINFO_GET_REFERENCENAME_OFFSET))(this);
		}

		::System::Void Rebind(::UnityEngine::GameObject* root, ::UnityEngine::Playables::PlayableDirector* selfPdComp)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SEAMLESSTRACKBINDINFO_REBIND_OFFSET))(this, root, selfPdComp);
		}

		static ::System::String* GetSyncEntityTagId(::MoleMole::Config::EntityType EntityType, ::System::Int32 unitId, ::System::Int32 index)
		{
			return ((::System::String*(*)(::MoleMole::Config::EntityType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SEAMLESSTRACKBINDINFO_GETSYNCENTITYTAGID_OFFSET))(EntityType, unitId, index);
		}
	};
}
