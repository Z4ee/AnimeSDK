#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACECYLINDERCOLLIDERCONFIG_METHOD_3_C43367CD5FF1C553_OFFSET UNITYSDK_OFFSET(0x195EC560)
#define RPG_GAMECORE_CAKERACECYLINDERCOLLIDERCONFIG_METHOD_3_D660F5F8D03A3D0F_OFFSET UNITYSDK_OFFSET(0x195EC4D0)
#define RPG_GAMECORE_CAKERACECYLINDERCOLLIDERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x195EC540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCylinderColliderConfig_TypeDefinitionIndex = 17517;

	class CakeRaceCylinderColliderConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Single Radius; // 0x10
		::System::Single Height; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECYLINDERCOLLIDERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D660F5F8D03A3D0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceCylinderColliderConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceCylinderColliderConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECYLINDERCOLLIDERCONFIG_METHOD_3_D660F5F8D03A3D0F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C43367CD5FF1C553(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceCylinderColliderConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceCylinderColliderConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECYLINDERCOLLIDERCONFIG_METHOD_3_C43367CD5FF1C553_OFFSET))(a1, a2);
		}
	};
}
