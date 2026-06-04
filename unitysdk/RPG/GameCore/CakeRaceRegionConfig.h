#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeRaceRegionCellConfig; }

#define RPG_GAMECORE_CAKERACEREGIONCONFIG_METHOD_3_5637F3A24878D50E_OFFSET UNITYSDK_OFFSET(0x195F0770)
#define RPG_GAMECORE_CAKERACEREGIONCONFIG_METHOD_3_68480C6F22CDF550_OFFSET UNITYSDK_OFFSET(0x195F0800)
#define RPG_GAMECORE_CAKERACEREGIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x195F07E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceRegionConfig_TypeDefinitionIndex = 17518;

	class CakeRaceRegionConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::Il2CppArray<::RPG::GameCore::CakeRaceRegionCellConfig*>* CellList; // 0x18
		::System::UInt32 Length; // 0x20
		::System::UInt32 Width; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEREGIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5637F3A24878D50E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceRegionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceRegionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEREGIONCONFIG_METHOD_3_5637F3A24878D50E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_68480C6F22CDF550(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceRegionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceRegionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEREGIONCONFIG_METHOD_3_68480C6F22CDF550_OFFSET))(a1, a2);
		}
	};
}
