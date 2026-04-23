#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
#include "unitysdk/RPG/GameCore/CakeRacePickupItemType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONGENERATEPICKUPITEM_METHOD_3_88D66DF91BC48048_OFFSET UNITYSDK_OFFSET(0x1876A290)
#define RPG_GAMECORE_CAKERACEACTIONGENERATEPICKUPITEM_METHOD_3_D973838C0C90151D_OFFSET UNITYSDK_OFFSET(0x1876BF00)
#define RPG_GAMECORE_CAKERACEACTIONGENERATEPICKUPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1876A270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionGeneratePickupItem_TypeDefinitionIndex = 17440;

	class CakeRaceActionGeneratePickupItem : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::RPG::GameCore::CakeRacePickupItemType PickupItemType; // 0x10
		::System::UInt32 Count; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGENERATEPICKUPITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D973838C0C90151D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionGeneratePickupItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionGeneratePickupItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGENERATEPICKUPITEM_METHOD_3_D973838C0C90151D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_88D66DF91BC48048(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionGeneratePickupItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionGeneratePickupItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGENERATEPICKUPITEM_METHOD_3_88D66DF91BC48048_OFFSET))(a1, a2);
		}
	};
}
