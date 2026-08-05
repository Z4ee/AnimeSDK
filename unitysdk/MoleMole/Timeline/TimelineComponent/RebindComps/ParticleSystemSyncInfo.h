#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/TimelineComponent/NoSeamlessBaseReferenceCompInfo.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_PARTICLESYSTEMSYNCINFO_CHECKISVALID_OFFSET UNITYSDK_OFFSET(0x190C9C00)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_PARTICLESYSTEMSYNCINFO_INITINFO_OFFSET UNITYSDK_OFFSET(0x190C9200)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_PARTICLESYSTEMSYNCINFO_REBIND_OFFSET UNITYSDK_OFFSET(0x190C9430)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_PARTICLESYSTEMSYNCINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x190C91A0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_PARTICLESYSTEMSYNCINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x190C9150)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_PARTICLESYSTEMSYNCINFO___BASE_CHECKISVALID_OFFSET UNITYSDK_OFFSET(0x190CA1F0)

namespace MoleMole::Timeline::TimelineComponent::RebindComps
{
	inline static constexpr unsigned int ParticleSystemSyncInfo_TypeDefinitionIndex = 86457;

	class ParticleSystemSyncInfo : public ::MoleMole::Timeline::TimelineComponent::NoSeamlessBaseReferenceCompInfo
	{
	public:
		::System::String* RelativePath; // 0x10
		::UnityEngine::ParticleSystem* Component; // 0x18
		::System::String* shape_meshRendererPath; // 0x20
		::System::String* shape_skinnedMeshRendererPath; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_PARTICLESYSTEMSYNCINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::ParticleSystem* component)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_PARTICLESYSTEMSYNCINFO__CTOR_1_OFFSET))(this, component);
		}

		::System::Void InitInfo(::UnityEngine::ParticleSystem* component)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_PARTICLESYSTEMSYNCINFO_INITINFO_OFFSET))(this, component);
		}

		::System::Void Rebind(::UnityEngine::GameObject* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_PARTICLESYSTEMSYNCINFO_REBIND_OFFSET))(this, root);
		}

		::System::Boolean CheckIsValid(::UnityEngine::GameObject* root)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_PARTICLESYSTEMSYNCINFO_CHECKISVALID_OFFSET))(this, root);
		}

		::System::Boolean __base_CheckIsValid(::UnityEngine::GameObject* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_PARTICLESYSTEMSYNCINFO___BASE_CHECKISVALID_OFFSET))(this, P0);
		}
	};
}
