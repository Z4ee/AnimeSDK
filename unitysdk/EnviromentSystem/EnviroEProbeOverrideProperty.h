#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroBoolProperty.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }

#define ENVIROMENTSYSTEM_ENVIROEPROBEOVERRIDEPROPERTY_METHOD_3_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0x10682130)
#define ENVIROMENTSYSTEM_ENVIROEPROBEOVERRIDEPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10682050)
#define ENVIROMENTSYSTEM_ENVIROEPROBEOVERRIDEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x10681FA0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroEProbeOverrideProperty_TypeDefinitionIndex = 50021;

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
	};
}
