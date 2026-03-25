#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONCHANGEVALIDITEM_METHOD_3_8D0ED5FE68AAFE47_OFFSET UNITYSDK_OFFSET(0x17043D80)
#define RPG_GAMECORE_CAKERACEACTIONCHANGEVALIDITEM_METHOD_3_BC448428DA8D6E34_OFFSET UNITYSDK_OFFSET(0x170463D0)
#define RPG_GAMECORE_CAKERACEACTIONCHANGEVALIDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x17043D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionChangeValidItem_TypeDefinitionIndex = 16853;

	class CakeRaceActionChangeValidItem : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::UInt32 InvalidItemId; // 0x10
		::System::UInt32 ValidItemId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGEVALIDITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BC448428DA8D6E34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionChangeValidItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionChangeValidItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGEVALIDITEM_METHOD_3_BC448428DA8D6E34_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8D0ED5FE68AAFE47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionChangeValidItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionChangeValidItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGEVALIDITEM_METHOD_3_8D0ED5FE68AAFE47_OFFSET))(a1, a2);
		}
	};
}
