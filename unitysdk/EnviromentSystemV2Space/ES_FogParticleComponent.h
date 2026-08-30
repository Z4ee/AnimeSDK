#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/ES_ParticleComponent.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEMV2SPACE_ES_FOGPARTICLECOMPONENT_INIT_OFFSET UNITYSDK_OFFSET(0x106CAAE0)
#define ENVIROMENTSYSTEMV2SPACE_ES_FOGPARTICLECOMPONENT_METHOD_7_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x106CB990)
#define ENVIROMENTSYSTEMV2SPACE_ES_FOGPARTICLECOMPONENT_METHOD_7_3416FD11DD9200F8_OFFSET UNITYSDK_OFFSET(0x106CAB40)
#define ENVIROMENTSYSTEMV2SPACE_ES_FOGPARTICLECOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0x106CB8A0)
#define ENVIROMENTSYSTEMV2SPACE_ES_FOGPARTICLECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x106CC500)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int ES_FogParticleComponent_TypeDefinitionIndex = 49726;

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
	};
}
