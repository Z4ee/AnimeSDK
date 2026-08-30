#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_HALFBOOMERANGWITHDETECTPROJECTILEDATA_METHOD_3_3A29A4FC1EA95037_OFFSET UNITYSDK_OFFSET(0x1D178400)
#define RPG_GAMECORE_HALFBOOMERANGWITHDETECTPROJECTILEDATA_METHOD_3_CB77FDE7B1C41B5C_OFFSET UNITYSDK_OFFSET(0x1D178280)
#define RPG_GAMECORE_HALFBOOMERANGWITHDETECTPROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D178350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HalfBoomerangWithDetectProjectileData_TypeDefinitionIndex = 15493;

	class HalfBoomerangWithDetectProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::System::Single CollisionEnableDelay; // 0xB8
		::RPG::GameCore::DynamicFloat* BoomerangAngleRoll; // 0xC0
		::RPG::GameCore::DynamicFloat* BoomerangEccentricity; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HALFBOOMERANGWITHDETECTPROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CB77FDE7B1C41B5C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HalfBoomerangWithDetectProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HalfBoomerangWithDetectProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HALFBOOMERANGWITHDETECTPROJECTILEDATA_METHOD_3_CB77FDE7B1C41B5C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A29A4FC1EA95037(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HalfBoomerangWithDetectProjectileData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HalfBoomerangWithDetectProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HALFBOOMERANGWITHDETECTPROJECTILEDATA_METHOD_3_3A29A4FC1EA95037_OFFSET))(a1, a2);
		}
	};
}
