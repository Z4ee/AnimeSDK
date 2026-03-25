#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroBoolProperty.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }

#define ENVIROMENTSYSTEM_ENVIROEPROBEOVERRIDEPROPERTY_METHOD_3_0414B7E68ABA5085_OFFSET UNITYSDK_OFFSET(0xFB8C1C0)
#define ENVIROMENTSYSTEM_ENVIROEPROBEOVERRIDEPROPERTY_METHOD_3_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0xFB8C0E0)
#define ENVIROMENTSYSTEM_ENVIROEPROBEOVERRIDEPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0xFB8C000)
#define ENVIROMENTSYSTEM_ENVIROEPROBEOVERRIDEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xFB8BF50)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroEProbeOverrideProperty_TypeDefinitionIndex = 40283;

	class EnviroEProbeOverrideProperty : public ::EnviromentSystem::EnviroBoolProperty
	{
	public:
		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEPROBEOVERRIDEPROPERTY__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroBoolProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroBoolProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEPROBEOVERRIDEPROPERTY__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Method_3_D2A08F3D951A0C1D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEPROBEOVERRIDEPROPERTY_METHOD_3_D2A08F3D951A0C1D_OFFSET))(this, a1);
		}

		::System::Void Method_3_0414B7E68ABA5085(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEPROBEOVERRIDEPROPERTY_METHOD_3_0414B7E68ABA5085_OFFSET))(this, P0);
		}
	};
}
