#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DrinkMakerCheersIngredientRow; }
namespace RPG::GameCore { class DrinkMakerIngredientRow; }

#define RPG_CLIENT_DRINKMAKERBARINGREDIENT_CREATEFORCHEERS_OFFSET UNITYSDK_OFFSET(0x94AC5C0)
#define RPG_CLIENT_DRINKMAKERBARINGREDIENT_CREATENORMAL_OFFSET UNITYSDK_OFFSET(0x94AC530)
#define RPG_CLIENT_DRINKMAKERBARINGREDIENT_GET_ID_OFFSET UNITYSDK_OFFSET(0x94AC820)
#define RPG_CLIENT_DRINKMAKERBARINGREDIENT_GET_ROW_OFFSET UNITYSDK_OFFSET(0x94AC840)
#define RPG_CLIENT_DRINKMAKERBARINGREDIENT_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x94AC640)
#define RPG_CLIENT_DRINKMAKERBARINGREDIENT_SET_ID_OFFSET UNITYSDK_OFFSET(0x94AC830)
#define RPG_CLIENT_DRINKMAKERBARINGREDIENT_SET_ROW_OFFSET UNITYSDK_OFFSET(0x94AC850)
#define RPG_CLIENT_DRINKMAKERBARINGREDIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x94AC5B0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBarIngredient_TypeDefinitionIndex = 51642;

	class DrinkMakerBarIngredient : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerIngredientRow* _Row_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARINGREDIENT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DrinkMakerBarIngredient* CreateNormal(::System::UInt32 ingredientID)
		{
			return ((::RPG::Client::DrinkMakerBarIngredient*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARINGREDIENT_CREATENORMAL_OFFSET))(ingredientID);
		}

		static ::RPG::Client::DrinkMakerBarIngredient* CreateForCheers(::RPG::GameCore::DrinkMakerCheersIngredientRow* ingredientRow)
		{
			return ((::RPG::Client::DrinkMakerBarIngredient*(*)(::RPG::GameCore::DrinkMakerCheersIngredientRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARINGREDIENT_CREATEFORCHEERS_OFFSET))(ingredientRow);
		}

		::System::Boolean IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARINGREDIENT_ISUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARINGREDIENT_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARINGREDIENT_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::DrinkMakerIngredientRow* get_Row()
		{
			return ((::RPG::GameCore::DrinkMakerIngredientRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARINGREDIENT_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::DrinkMakerIngredientRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DrinkMakerIngredientRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARINGREDIENT_SET_ROW_OFFSET))(this, value);
		}
	};
}
