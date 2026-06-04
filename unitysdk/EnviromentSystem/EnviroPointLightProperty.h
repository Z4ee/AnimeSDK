#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"

namespace EnviromentSystem { class EnviromentProfile; }

#define ENVIROMENTSYSTEM_ENVIROPOINTLIGHTPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x135ADFA0)
#define ENVIROMENTSYSTEM_ENVIROPOINTLIGHTPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x135A5B20)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroPointLightProperty_TypeDefinitionIndex = 46789;

	class EnviroPointLightProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPOINTLIGHTPROPERTY__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroPointLightProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroPointLightProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPOINTLIGHTPROPERTY__CTOR_1_OFFSET))(this, a1);
		}
	};
}
