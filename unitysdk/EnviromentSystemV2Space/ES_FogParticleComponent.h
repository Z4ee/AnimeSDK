#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/ES_ParticleComponent.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEMV2SPACE_ES_FOGPARTICLECOMPONENT_INIT_OFFSET UNITYSDK_OFFSET(0x103530D0)
#define ENVIROMENTSYSTEMV2SPACE_ES_FOGPARTICLECOMPONENT_METHOD_7_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x10353DD0)
#define ENVIROMENTSYSTEMV2SPACE_ES_FOGPARTICLECOMPONENT_METHOD_7_3416FD11DD9200F8_OFFSET UNITYSDK_OFFSET(0x10353130)
#define ENVIROMENTSYSTEMV2SPACE_ES_FOGPARTICLECOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0x10353CE0)
#define ENVIROMENTSYSTEMV2SPACE_ES_FOGPARTICLECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x10354990)
#define ENVIROMENTSYSTEMV2SPACE_ES_FOGPARTICLECOMPONENT___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x10354A10)
#define ENVIROMENTSYSTEMV2SPACE_ES_FOGPARTICLECOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10354A20)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int ES_FogParticleComponent_TypeDefinitionIndex = 39989;

	class ES_FogParticleComponent : public ::EnviromentSystemV2Space::ES_ParticleComponent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_FOGPARTICLECOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_FOGPARTICLECOMPONENT_INIT_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_FOGPARTICLECOMPONENT_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_7_3416FD11DD9200F8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_FOGPARTICLECOMPONENT_METHOD_7_3416FD11DD9200F8_OFFSET))(this);
		}

		::System::Void Method_7_2566AD459572DFC3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_FOGPARTICLECOMPONENT_METHOD_7_2566AD459572DFC3_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_FOGPARTICLECOMPONENT___IFIXBASEPROXY_INIT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_FOGPARTICLECOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
