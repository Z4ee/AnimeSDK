#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HALFBOOMERANGWITHDETECTPROJECTILEDATA_METHOD_3_06A393563B5D0867_OFFSET UNITYSDK_OFFSET(0x17293B90)
#define RPG_GAMECORE_HALFBOOMERANGWITHDETECTPROJECTILEDATA_METHOD_3_3A29A4FC1EA95037_OFFSET UNITYSDK_OFFSET(0x17293C00)
#define RPG_GAMECORE_HALFBOOMERANGWITHDETECTPROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17293BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HalfBoomerangWithDetectProjectileData_TypeDefinitionIndex = 14360;

	class HalfBoomerangWithDetectProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::System::Single CollisionEnableDelay; // 0xA8
		::System::Single BoomerangAngleRoll; // 0xAC
		::System::Single BoomerangEccentricity; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HALFBOOMERANGWITHDETECTPROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_06A393563B5D0867(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HalfBoomerangWithDetectProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HalfBoomerangWithDetectProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HALFBOOMERANGWITHDETECTPROJECTILEDATA_METHOD_3_06A393563B5D0867_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A29A4FC1EA95037(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HalfBoomerangWithDetectProjectileData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HalfBoomerangWithDetectProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HALFBOOMERANGWITHDETECTPROJECTILEDATA_METHOD_3_3A29A4FC1EA95037_OFFSET))(a1, a2);
		}
	};
}
