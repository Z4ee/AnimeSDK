#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOMERANGPROJECTILEDATA_METHOD_3_D585D8F9F99A9FC3_OFFSET UNITYSDK_OFFSET(0x16FEFA20)
#define RPG_GAMECORE_BOOMERANGPROJECTILEDATA_METHOD_3_D65D46D7FD9AC52B_OFFSET UNITYSDK_OFFSET(0x16FEFA90)
#define RPG_GAMECORE_BOOMERANGPROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16FEFA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoomerangProjectileData_TypeDefinitionIndex = 14352;

	class BoomerangProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::System::Single BoomerangAngleRoll; // 0xA8
		::System::Single BoomerangEccentricity; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMERANGPROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D585D8F9F99A9FC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoomerangProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoomerangProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMERANGPROJECTILEDATA_METHOD_3_D585D8F9F99A9FC3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D65D46D7FD9AC52B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoomerangProjectileData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoomerangProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMERANGPROJECTILEDATA_METHOD_3_D65D46D7FD9AC52B_OFFSET))(a1, a2);
		}
	};
}
