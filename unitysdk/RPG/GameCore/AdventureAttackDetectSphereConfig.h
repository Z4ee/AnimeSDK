#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAttackDetectShapeConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTUREATTACKDETECTSPHERECONFIG_METHOD_3_507FFACF5E7EB7F4_OFFSET UNITYSDK_OFFSET(0x194404E0)
#define RPG_GAMECORE_ADVENTUREATTACKDETECTSPHERECONFIG_METHOD_3_BDE99FDBCDC0A1CB_OFFSET UNITYSDK_OFFSET(0x194403A0)
#define RPG_GAMECORE_ADVENTUREATTACKDETECTSPHERECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19440390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAttackDetectSphereConfig_TypeDefinitionIndex = 15462;

	class AdventureAttackDetectSphereConfig : public ::RPG::GameCore::AdventureAttackDetectShapeConfig
	{
	public:
		::System::Single Radius; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTSPHERECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_507FFACF5E7EB7F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureAttackDetectSphereConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureAttackDetectSphereConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTSPHERECONFIG_METHOD_3_507FFACF5E7EB7F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BDE99FDBCDC0A1CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureAttackDetectSphereConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureAttackDetectSphereConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTSPHERECONFIG_METHOD_3_BDE99FDBCDC0A1CB_OFFSET))(a1, a2);
		}
	};
}
