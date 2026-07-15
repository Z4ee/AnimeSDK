#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OVERRIDESELECTDARKTEAMENTITYCAMERA_METHOD_3_B112B8352BB4547D_OFFSET UNITYSDK_OFFSET(0x1BB08B30)
#define RPG_GAMECORE_OVERRIDESELECTDARKTEAMENTITYCAMERA_METHOD_3_BC02F2737E0F7991_OFFSET UNITYSDK_OFFSET(0x1BB08B80)
#define RPG_GAMECORE_OVERRIDESELECTDARKTEAMENTITYCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB08B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideSelectDarkTeamEntityCamera_TypeDefinitionIndex = 21941;

	class OverrideSelectDarkTeamEntityCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single ChooseEnemyTargetLookAtWeight; // 0x18
		::System::Single ChooseEnemyTargetLookAtWeightByTeamWidth; // 0x1C
		::System::Single ChooseEnemyTargetDisToCenterWeight; // 0x20
		::System::Single ChooseEnemyTargetDisToCenterImpairment; // 0x24
		::System::Single ChooseEnemyTargetLookAtAmplitude; // 0x28
		::System::Single ChooseEnemyTargetCenterOffset1; // 0x2C
		::System::Single ChooseEnemyTargetCenterOffset2; // 0x30
		::System::Single ChooseEnemyTargetCenterOffset3; // 0x34
		::RPG::MVector3 ChooseEnemyTargetMaxDeflection; // 0x38
		::System::Single AimDumpY; // 0x44
		::System::Boolean Override; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESELECTDARKTEAMENTITYCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B112B8352BB4547D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideSelectDarkTeamEntityCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideSelectDarkTeamEntityCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESELECTDARKTEAMENTITYCAMERA_METHOD_3_B112B8352BB4547D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BC02F2737E0F7991(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideSelectDarkTeamEntityCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideSelectDarkTeamEntityCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESELECTDARKTEAMENTITYCAMERA_METHOD_3_BC02F2737E0F7991_OFFSET))(a1, a2);
		}
	};
}
