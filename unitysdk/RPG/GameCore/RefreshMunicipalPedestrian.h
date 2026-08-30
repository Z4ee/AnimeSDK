#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REFRESHMUNICIPALPEDESTRIAN_METHOD_3_0FD2F44304868B1E_OFFSET UNITYSDK_OFFSET(0x1DB7EED0)
#define RPG_GAMECORE_REFRESHMUNICIPALPEDESTRIAN_METHOD_3_4AC5526CE9C51E1B_OFFSET UNITYSDK_OFFSET(0x1DB7EFA0)
#define RPG_GAMECORE_REFRESHMUNICIPALPEDESTRIAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7EF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RefreshMunicipalPedestrian_TypeDefinitionIndex = 20087;

	class RefreshMunicipalPedestrian : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHMUNICIPALPEDESTRIAN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0FD2F44304868B1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshMunicipalPedestrian*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshMunicipalPedestrian*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHMUNICIPALPEDESTRIAN_METHOD_3_0FD2F44304868B1E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4AC5526CE9C51E1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshMunicipalPedestrian* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshMunicipalPedestrian*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHMUNICIPALPEDESTRIAN_METHOD_3_4AC5526CE9C51E1B_OFFSET))(a1, a2);
		}
	};
}
