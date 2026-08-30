#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAttackDetectShapeConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTUREATTACKDETECTCIRCLECONFIG_METHOD_3_1571164E920D0733_OFFSET UNITYSDK_OFFSET(0x1CBA8130)
#define RPG_GAMECORE_ADVENTUREATTACKDETECTCIRCLECONFIG_METHOD_3_DFC2BC2A6B419832_OFFSET UNITYSDK_OFFSET(0x1CBA8180)
#define RPG_GAMECORE_ADVENTUREATTACKDETECTCIRCLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA8170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAttackDetectCircleConfig_TypeDefinitionIndex = 16103;

	class AdventureAttackDetectCircleConfig : public ::RPG::GameCore::AdventureAttackDetectShapeConfig
	{
	public:
		::System::Single MinRadius; // 0x20
		::System::Single MaxRadius; // 0x24
		::System::Single FanAngle; // 0x28
		::System::Single Hight; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTCIRCLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1571164E920D0733(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureAttackDetectCircleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureAttackDetectCircleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTCIRCLECONFIG_METHOD_3_1571164E920D0733_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DFC2BC2A6B419832(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureAttackDetectCircleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureAttackDetectCircleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTCIRCLECONFIG_METHOD_3_DFC2BC2A6B419832_OFFSET))(a1, a2);
		}
	};
}
