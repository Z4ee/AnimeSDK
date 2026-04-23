#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAMERABATTLETRANSITIONBEHITCONFIG_METHOD_2_348B3D7C6AC05BAC_OFFSET UNITYSDK_OFFSET(0x187B67D0)
#define RPG_GAMECORE_CAMERABATTLETRANSITIONBEHITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x187B69F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CameraBattleTransitionBeHitConfig_TypeDefinitionIndex = 19380;

	class CameraBattleTransitionBeHitConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single MiddleShotDistance; // 0x10
		::System::Single LongShotDistance; // 0x14
		::System::Single CloseShotAimDistanceWeight; // 0x18
		::System::Single MiddleShotAimDistanceWeight; // 0x1C
		::System::Single LongShotAimDistanceWeight; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERABATTLETRANSITIONBEHITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_348B3D7C6AC05BAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CameraBattleTransitionBeHitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CameraBattleTransitionBeHitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERABATTLETRANSITIONBEHITCONFIG_METHOD_2_348B3D7C6AC05BAC_OFFSET))(a1, a2);
		}
	};
}
