#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CGRuntimeUnitLoadType.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CGRuntimeUnit; }
namespace System { class String; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SEAMLESSBASEREFERENCECOMPINFO_INITBASEINFO_OFFSET UNITYSDK_OFFSET(0x15BCB2C0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SEAMLESSBASEREFERENCECOMPINFO_REBIND_OFFSET UNITYSDK_OFFSET(0x15BCBB30)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SEAMLESSBASEREFERENCECOMPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x15BCAB60)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int SeamlessBaseReferenceCompInfo_TypeDefinitionIndex = 57287;

	class SeamlessBaseReferenceCompInfo : public ::System::Object
	{
	public:
		::MoleMole::Config::EntityType EntityType; // 0x10
		::System::Int32 unitId; // 0x14
		::System::Int32 index; // 0x18
		::System::String* RelativePath; // 0x20
		::MoleMole::CGRuntimeUnitLoadType LoadType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SEAMLESSBASEREFERENCECOMPINFO__CTOR_OFFSET))(this);
		}

		::System::Void Rebind(::UnityEngine::GameObject* referenceRoot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SEAMLESSBASEREFERENCECOMPINFO_REBIND_OFFSET))(this, referenceRoot);
		}

		::System::Void InitBaseInfo(::MoleMole::CGRuntimeUnit* runtimeUnit, ::UnityEngine::Component* component, ::MoleMole::CGRuntimeUnitLoadType loadType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CGRuntimeUnit*, ::UnityEngine::Component*, ::MoleMole::CGRuntimeUnitLoadType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_SEAMLESSBASEREFERENCECOMPINFO_INITBASEINFO_OFFSET))(this, runtimeUnit, component, loadType);
		}
	};
}
