#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HALFBOOMERANGPROJECTILEDATA_METHOD_3_28EFDCFEDE9F7CE6_OFFSET UNITYSDK_OFFSET(0x17293080)
#define RPG_GAMECORE_HALFBOOMERANGPROJECTILEDATA_METHOD_3_D64C167A4B585F96_OFFSET UNITYSDK_OFFSET(0x172930F0)
#define RPG_GAMECORE_HALFBOOMERANGPROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x172930D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HalfBoomerangProjectileData_TypeDefinitionIndex = 14353;

	class HalfBoomerangProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::System::Single BoomerangAngleRoll; // 0xA8
		::System::Single BoomerangEccentricity; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HALFBOOMERANGPROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_28EFDCFEDE9F7CE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HalfBoomerangProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HalfBoomerangProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HALFBOOMERANGPROJECTILEDATA_METHOD_3_28EFDCFEDE9F7CE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D64C167A4B585F96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HalfBoomerangProjectileData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HalfBoomerangProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HALFBOOMERANGPROJECTILEDATA_METHOD_3_D64C167A4B585F96_OFFSET))(a1, a2);
		}
	};
}
