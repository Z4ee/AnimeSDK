#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBaseTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACECATIDLISTSELECTORCONFIG_METHOD_3_356A2F8BA195DE18_OFFSET UNITYSDK_OFFSET(0x1CF73DB0)
#define RPG_GAMECORE_CAKERACECATIDLISTSELECTORCONFIG_METHOD_3_D16C95BCD7EA4BCB_OFFSET UNITYSDK_OFFSET(0x1CF723F0)
#define RPG_GAMECORE_CAKERACECATIDLISTSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF723E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCatIdListSelectorConfig_TypeDefinitionIndex = 18181;

	class CakeRaceCatIdListSelectorConfig : public ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* CatIdList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECATIDLISTSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_356A2F8BA195DE18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceCatIdListSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceCatIdListSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECATIDLISTSELECTORCONFIG_METHOD_3_356A2F8BA195DE18_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D16C95BCD7EA4BCB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceCatIdListSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceCatIdListSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECATIDLISTSELECTORCONFIG_METHOD_3_D16C95BCD7EA4BCB_OFFSET))(a1, a2);
		}
	};
}
