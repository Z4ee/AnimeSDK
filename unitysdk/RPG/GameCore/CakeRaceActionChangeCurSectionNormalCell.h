#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONCHANGECURSECTIONNORMALCELL_METHOD_3_815135E34C4F1708_OFFSET UNITYSDK_OFFSET(0x1876BA00)
#define RPG_GAMECORE_CAKERACEACTIONCHANGECURSECTIONNORMALCELL_METHOD_3_97D19AA69937B701_OFFSET UNITYSDK_OFFSET(0x18768FB0)
#define RPG_GAMECORE_CAKERACEACTIONCHANGECURSECTIONNORMALCELL__CTOR_OFFSET UNITYSDK_OFFSET(0x18768F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionChangeCurSectionNormalCell_TypeDefinitionIndex = 17429;

	class CakeRaceActionChangeCurSectionNormalCell : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::RPG::GameCore::CakeRaceCellType NewCellType; // 0x10
		::System::UInt32 Percent; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGECURSECTIONNORMALCELL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_815135E34C4F1708(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionChangeCurSectionNormalCell*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionChangeCurSectionNormalCell*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGECURSECTIONNORMALCELL_METHOD_3_815135E34C4F1708_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_97D19AA69937B701(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionChangeCurSectionNormalCell* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionChangeCurSectionNormalCell*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGECURSECTIONNORMALCELL_METHOD_3_97D19AA69937B701_OFFSET))(a1, a2);
		}
	};
}
