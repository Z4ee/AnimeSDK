#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DrinkMakerCheersFormulaRow; }

#define RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_CUPID_OFFSET UNITYSDK_OFFSET(0xCCEE870)
#define RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_DECOID_OFFSET UNITYSDK_OFFSET(0xCCEE9B0)
#define RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_ICEID_OFFSET UNITYSDK_OFFSET(0xCCEE8C0)
#define RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_INGREDIENTLIST_OFFSET UNITYSDK_OFFSET(0xCCEE910)
#define RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_MIXLAYER_OFFSET UNITYSDK_OFFSET(0xCCEE960)
#define RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCCEA930)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCheersDisplayData_TypeDefinitionIndex = 63617;

	class DrinkMakerCheersDisplayData : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerCheersFormulaRow* _Row; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_CupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_CUPID_OFFSET))(this);
		}

		::System::UInt32 get_IceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_ICEID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_IngredientList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_INGREDIENTLIST_OFFSET))(this);
		}

		::System::UInt32 get_MixLayer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_MIXLAYER_OFFSET))(this);
		}

		::System::UInt32 get_DecoId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_DECOID_OFFSET))(this);
		}
	};
}
