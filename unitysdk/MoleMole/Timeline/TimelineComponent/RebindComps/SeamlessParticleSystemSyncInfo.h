#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CGRuntimeUnitLoadType.h"
#include "unitysdk/MoleMole/Timeline/TimelineComponent/SeamlessBaseReferenceCompInfo.h"

namespace MoleMole { class CGRuntimeUnit; }
namespace System { class String; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSPARTICLESYSTEMSYNCINFO_INITBASEINFO_OFFSET UNITYSDK_OFFSET(0x1A1C1DD0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSPARTICLESYSTEMSYNCINFO_INITINFO_OFFSET UNITYSDK_OFFSET(0x1A1C1EC0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSPARTICLESYSTEMSYNCINFO_REBIND_OFFSET UNITYSDK_OFFSET(0x1A1C24C0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSPARTICLESYSTEMSYNCINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A1C1D30)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSPARTICLESYSTEMSYNCINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C1C80)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSPARTICLESYSTEMSYNCINFO___BASE_INITBASEINFO_OFFSET UNITYSDK_OFFSET(0x1A1C2C00)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSPARTICLESYSTEMSYNCINFO___BASE_REBIND_OFFSET UNITYSDK_OFFSET(0x1A1C2C70)

namespace MoleMole::Timeline::TimelineComponent::RebindComps
{
	inline static constexpr unsigned int SeamlessParticleSystemSyncInfo_TypeDefinitionIndex = 46440;

	class SeamlessParticleSystemSyncInfo : public ::MoleMole::Timeline::TimelineComponent::SeamlessBaseReferenceCompInfo
	{
	public:
		::UnityEngine::ParticleSystem* Component; // 0x30
		::System::String* shape_meshRendererPath; // 0x38
		::System::String* shape_skinnedMeshRendererPath; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSPARTICLESYSTEMSYNCINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MoleMole::CGRuntimeUnit* runtimeUnit, ::UnityEngine::ParticleSystem* component, ::MoleMole::CGRuntimeUnitLoadType loadType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CGRuntimeUnit*, ::UnityEngine::ParticleSystem*, ::MoleMole::CGRuntimeUnitLoadType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSPARTICLESYSTEMSYNCINFO__CTOR_1_OFFSET))(this, runtimeUnit, component, loadType);
		}

		::System::Void InitBaseInfo(::MoleMole::CGRuntimeUnit* runtimeUnit, ::UnityEngine::Component* component, ::MoleMole::CGRuntimeUnitLoadType loadType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CGRuntimeUnit*, ::UnityEngine::Component*, ::MoleMole::CGRuntimeUnitLoadType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSPARTICLESYSTEMSYNCINFO_INITBASEINFO_OFFSET))(this, runtimeUnit, component, loadType);
		}

		::System::Void InitInfo(::UnityEngine::ParticleSystem* component)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSPARTICLESYSTEMSYNCINFO_INITINFO_OFFSET))(this, component);
		}

		::System::Void Rebind(::UnityEngine::GameObject* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSPARTICLESYSTEMSYNCINFO_REBIND_OFFSET))(this, root);
		}

		::System::Void __base_InitBaseInfo(::MoleMole::CGRuntimeUnit* P0, ::UnityEngine::Component* P1, ::MoleMole::CGRuntimeUnitLoadType P2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CGRuntimeUnit*, ::UnityEngine::Component*, ::MoleMole::CGRuntimeUnitLoadType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSPARTICLESYSTEMSYNCINFO___BASE_INITBASEINFO_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_Rebind(::UnityEngine::GameObject* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSPARTICLESYSTEMSYNCINFO___BASE_REBIND_OFFSET))(this, P0);
		}
	};
}
