#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGDEATHEFFECTCONFIG_METHOD_2_3141CE82353F699B_OFFSET UNITYSDK_OFFSET(0x1C37B860)
#define RPG_GAMECORE_CHENLINGDEATHEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3815D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingDeathEffectConfig_TypeDefinitionIndex = 15077;

	class ChenLingDeathEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector2 DirYRange; // 0x10
		::RPG::MVector2 SoldierForceRange; // 0x18
		::RPG::MVector3 SoldierTorqueRangeMin; // 0x20
		::RPG::MVector3 SoldierTorqueRangeMax; // 0x2C
		::RPG::MVector2 WeaponForceRange; // 0x38
		::RPG::MVector3 WeaponTorqueRangeMin; // 0x40
		::RPG::MVector3 WeaponTorqueRangeMax; // 0x4C
		::RPG::GameCore::FixPoint WeaponDisappearDelay; // 0x58
		::RPG::GameCore::FixPoint ScaleToForceMultiper; // 0x60
		::RPG::GameCore::FixPoint ScaleToTorqueMultiper; // 0x68
		::RPG::GameCore::FixPoint DisappearDelay; // 0x70
		::RPG::GameCore::FixPoint Dither; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGDEATHEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3141CE82353F699B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingDeathEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingDeathEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGDEATHEFFECTCONFIG_METHOD_2_3141CE82353F699B_OFFSET))(a1, a2);
		}
	};
}
