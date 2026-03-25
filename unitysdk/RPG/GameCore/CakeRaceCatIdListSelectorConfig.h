#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBaseTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACECATIDLISTSELECTORCONFIG_METHOD_3_8BEF3CA76438DBCE_OFFSET UNITYSDK_OFFSET(0x17048330)
#define RPG_GAMECORE_CAKERACECATIDLISTSELECTORCONFIG_METHOD_3_DBBB3D635C7AFBFD_OFFSET UNITYSDK_OFFSET(0x17049B80)
#define RPG_GAMECORE_CAKERACECATIDLISTSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17048320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCatIdListSelectorConfig_TypeDefinitionIndex = 16894;

	class CakeRaceCatIdListSelectorConfig : public ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* CatIdList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECATIDLISTSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DBBB3D635C7AFBFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceCatIdListSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceCatIdListSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECATIDLISTSELECTORCONFIG_METHOD_3_DBBB3D635C7AFBFD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8BEF3CA76438DBCE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceCatIdListSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceCatIdListSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECATIDLISTSELECTORCONFIG_METHOD_3_8BEF3CA76438DBCE_OFFSET))(a1, a2);
		}
	};
}
