#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_HALFBOOMERANGPROJECTILEDATA_METHOD_3_D64C167A4B585F96_OFFSET UNITYSDK_OFFSET(0x1D1776C0)
#define RPG_GAMECORE_HALFBOOMERANGPROJECTILEDATA_METHOD_3_EDAC578252A177B1_OFFSET UNITYSDK_OFFSET(0x1D177540)
#define RPG_GAMECORE_HALFBOOMERANGPROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D177610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HalfBoomerangProjectileData_TypeDefinitionIndex = 15485;

	class HalfBoomerangProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BoomerangAngleRoll; // 0xB8
		::RPG::GameCore::DynamicFloat* BoomerangEccentricity; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HALFBOOMERANGPROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EDAC578252A177B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HalfBoomerangProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HalfBoomerangProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HALFBOOMERANGPROJECTILEDATA_METHOD_3_EDAC578252A177B1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D64C167A4B585F96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HalfBoomerangProjectileData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HalfBoomerangProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HALFBOOMERANGPROJECTILEDATA_METHOD_3_D64C167A4B585F96_OFFSET))(a1, a2);
		}
	};
}
