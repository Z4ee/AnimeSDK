#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/ES_ParticleComponent.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEMV2SPACE_ES_CLOUDPARTICLECOMPONENT_INIT_OFFSET UNITYSDK_OFFSET(0x135D0D40)
#define ENVIROMENTSYSTEMV2SPACE_ES_CLOUDPARTICLECOMPONENT_METHOD_7_E8F71BC8471C5469_OFFSET UNITYSDK_OFFSET(0x135D1890)
#define ENVIROMENTSYSTEMV2SPACE_ES_CLOUDPARTICLECOMPONENT_METHOD_7_FE268EA0D7E91617_OFFSET UNITYSDK_OFFSET(0x135D1020)
#define ENVIROMENTSYSTEMV2SPACE_ES_CLOUDPARTICLECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x135D1C90)
#define ENVIROMENTSYSTEMV2SPACE_ES_CLOUDPARTICLECOMPONENT___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x135D1D90)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int ES_CloudParticleComponent_TypeDefinitionIndex = 46480;

	class ES_CloudParticleComponent : public ::EnviromentSystemV2Space::ES_ParticleComponent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CLOUDPARTICLECOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CLOUDPARTICLECOMPONENT_INIT_OFFSET))(this, a1);
		}

		::System::Void Method_7_FE268EA0D7E91617()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CLOUDPARTICLECOMPONENT_METHOD_7_FE268EA0D7E91617_OFFSET))(this);
		}

		::System::Void Method_7_E8F71BC8471C5469()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CLOUDPARTICLECOMPONENT_METHOD_7_E8F71BC8471C5469_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ES_CLOUDPARTICLECOMPONENT___IFIXBASEPROXY_INIT_OFFSET))(this, a1);
		}
	};
}
