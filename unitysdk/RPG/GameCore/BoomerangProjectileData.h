#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BOOMERANGPROJECTILEDATA_METHOD_3_C5F10A8159AC3068_OFFSET UNITYSDK_OFFSET(0x1A406DD0)
#define RPG_GAMECORE_BOOMERANGPROJECTILEDATA_METHOD_3_D65D46D7FD9AC52B_OFFSET UNITYSDK_OFFSET(0x1A406F50)
#define RPG_GAMECORE_BOOMERANGPROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A406EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoomerangProjectileData_TypeDefinitionIndex = 15048;

	class BoomerangProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BoomerangAngleRoll; // 0xB8
		::RPG::GameCore::DynamicFloat* BoomerangEccentricity; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMERANGPROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C5F10A8159AC3068(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoomerangProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoomerangProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMERANGPROJECTILEDATA_METHOD_3_C5F10A8159AC3068_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D65D46D7FD9AC52B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoomerangProjectileData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoomerangProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMERANGPROJECTILEDATA_METHOD_3_D65D46D7FD9AC52B_OFFSET))(a1, a2);
		}
	};
}
