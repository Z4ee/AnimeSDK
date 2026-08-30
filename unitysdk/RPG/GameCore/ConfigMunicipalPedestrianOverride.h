#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONFIGMUNICIPALPEDESTRIANOVERRIDE_METHOD_2_48054D856ED67EAA_OFFSET UNITYSDK_OFFSET(0x1CFFA220)
#define RPG_GAMECORE_CONFIGMUNICIPALPEDESTRIANOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFFA350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigMunicipalPedestrianOverride_TypeDefinitionIndex = 16725;

	class ConfigMunicipalPedestrianOverride : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single OverrideTestSpawnDistance; // 0x10
		::System::Boolean OverrideEnableAutoRespawn; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMUNICIPALPEDESTRIANOVERRIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_48054D856ED67EAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConfigMunicipalPedestrianOverride*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConfigMunicipalPedestrianOverride*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMUNICIPALPEDESTRIANOVERRIDE_METHOD_2_48054D856ED67EAA_OFFSET))(a1, a2);
		}
	};
}
