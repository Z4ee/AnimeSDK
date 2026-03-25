#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
#include "unitysdk/RPG/GameCore/CakeRacePickupItemType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONMANHATTANPLACEPICKUPITEM_METHOD_3_B567B03FAF8858DE_OFFSET UNITYSDK_OFFSET(0x17044F20)
#define RPG_GAMECORE_CAKERACEACTIONMANHATTANPLACEPICKUPITEM_METHOD_3_E51744988ED28E1A_OFFSET UNITYSDK_OFFSET(0x17046970)
#define RPG_GAMECORE_CAKERACEACTIONMANHATTANPLACEPICKUPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x17044F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionManhattanPlacePickupItem_TypeDefinitionIndex = 16845;

	class CakeRaceActionManhattanPlacePickupItem : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::RPG::GameCore::CakeRacePickupItemType PickupItemType; // 0x10
		::System::UInt32 Distance; // 0x14
		::System::UInt32 MaxItemNum; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONMANHATTANPLACEPICKUPITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E51744988ED28E1A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionManhattanPlacePickupItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionManhattanPlacePickupItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONMANHATTANPLACEPICKUPITEM_METHOD_3_E51744988ED28E1A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B567B03FAF8858DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionManhattanPlacePickupItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionManhattanPlacePickupItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONMANHATTANPLACEPICKUPITEM_METHOD_3_B567B03FAF8858DE_OFFSET))(a1, a2);
		}
	};
}
