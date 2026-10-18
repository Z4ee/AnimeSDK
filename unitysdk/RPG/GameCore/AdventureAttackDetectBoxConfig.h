#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAttackDetectShapeConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTUREATTACKDETECTBOXCONFIG_METHOD_3_04616F95B159F145_OFFSET UNITYSDK_OFFSET(0x1D3B68F0)
#define RPG_GAMECORE_ADVENTUREATTACKDETECTBOXCONFIG_METHOD_3_EB49B9F9CCE63E1C_OFFSET UNITYSDK_OFFSET(0x1D3B6930)
#define RPG_GAMECORE_ADVENTUREATTACKDETECTBOXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B6920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAttackDetectBoxConfig_TypeDefinitionIndex = 16274;

	class AdventureAttackDetectBoxConfig : public ::RPG::GameCore::AdventureAttackDetectShapeConfig
	{
	public:
		::RPG::MVector3 Size; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTBOXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_04616F95B159F145(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureAttackDetectBoxConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureAttackDetectBoxConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTBOXCONFIG_METHOD_3_04616F95B159F145_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EB49B9F9CCE63E1C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureAttackDetectBoxConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureAttackDetectBoxConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTBOXCONFIG_METHOD_3_EB49B9F9CCE63E1C_OFFSET))(a1, a2);
		}
	};
}
