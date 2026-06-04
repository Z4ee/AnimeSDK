#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONFIGMUNICIPALPEDESTRIANOVERRIDE_METHOD_2_4F8222307DDAA8C5_OFFSET UNITYSDK_OFFSET(0x19674530)
#define RPG_GAMECORE_CONFIGMUNICIPALPEDESTRIANOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x19674690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigMunicipalPedestrianOverride_TypeDefinitionIndex = 16057;

	class ConfigMunicipalPedestrianOverride : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single OverrideTestSpawnDistance; // 0x10
		::System::Boolean OverrideEnableAutoRespawn; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMUNICIPALPEDESTRIANOVERRIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4F8222307DDAA8C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConfigMunicipalPedestrianOverride*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConfigMunicipalPedestrianOverride*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMUNICIPALPEDESTRIANOVERRIDE_METHOD_2_4F8222307DDAA8C5_OFFSET))(a1, a2);
		}
	};
}
