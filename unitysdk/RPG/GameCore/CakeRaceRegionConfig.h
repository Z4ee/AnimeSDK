#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeRaceRegionCellConfig; }

#define RPG_GAMECORE_CAKERACEREGIONCONFIG_METHOD_3_A69316D3C2E4FBA8_OFFSET UNITYSDK_OFFSET(0x18774630)
#define RPG_GAMECORE_CAKERACEREGIONCONFIG_METHOD_3_ED91A9EFF797BA3E_OFFSET UNITYSDK_OFFSET(0x187746C0)
#define RPG_GAMECORE_CAKERACEREGIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x187746A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceRegionConfig_TypeDefinitionIndex = 17519;

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

		static ::System::Void Method_3_A69316D3C2E4FBA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceRegionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceRegionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEREGIONCONFIG_METHOD_3_A69316D3C2E4FBA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED91A9EFF797BA3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceRegionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceRegionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEREGIONCONFIG_METHOD_3_ED91A9EFF797BA3E_OFFSET))(a1, a2);
		}
	};
}
