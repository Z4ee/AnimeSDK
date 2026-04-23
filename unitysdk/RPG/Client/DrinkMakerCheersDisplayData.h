#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DrinkMakerCheersFormulaRow; }

#define RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_CUPID_OFFSET UNITYSDK_OFFSET(0xA193220)
#define RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_DECOID_OFFSET UNITYSDK_OFFSET(0xA1932A0)
#define RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_ICEID_OFFSET UNITYSDK_OFFSET(0xA193240)
#define RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_INGREDIENTLIST_OFFSET UNITYSDK_OFFSET(0xA193260)
#define RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA_GET_MIXLAYER_OFFSET UNITYSDK_OFFSET(0xA193280)
#define RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA18FA80)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCheersDisplayData_TypeDefinitionIndex = 58612;

	class DrinkMakerCheersDisplayData : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerCheersFormulaRow* _Row; // 0x10

		::System::Void _ctor(::System::UInt32 configId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSDISPLAYDATA__CTOR_OFFSET))(this, configId);
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
