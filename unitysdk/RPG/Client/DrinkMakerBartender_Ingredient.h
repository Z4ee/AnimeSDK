#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DrinkMakerIngredientRow; }
namespace System { class String; }

#define RPG_CLIENT_DRINKMAKERBARTENDER_INGREDIENT_CREATE_OFFSET UNITYSDK_OFFSET(0xCCD5E50)
#define RPG_CLIENT_DRINKMAKERBARTENDER_INGREDIENT_GET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xCCD6770)
#define RPG_CLIENT_DRINKMAKERBARTENDER_INGREDIENT_GET_DESC_OFFSET UNITYSDK_OFFSET(0xCCD66B0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_INGREDIENT_GET_HASBUBBLE_OFFSET UNITYSDK_OFFSET(0xCCD67C0)
#define RPG_CLIENT_DRINKMAKERBARTENDER_INGREDIENT_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCCD6720)
#define RPG_CLIENT_DRINKMAKERBARTENDER_INGREDIENT_GET_ID_OFFSET UNITYSDK_OFFSET(0xCCD6230)
#define RPG_CLIENT_DRINKMAKERBARTENDER_INGREDIENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCCD6640)
#define RPG_CLIENT_DRINKMAKERBARTENDER_INGREDIENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCCD6630)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBartender_Ingredient_TypeDefinitionIndex = 63603;

	class DrinkMakerBartender_Ingredient : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerIngredientRow* _Row; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_INGREDIENT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DrinkMakerBartender_Ingredient* Create(::RPG::GameCore::DrinkMakerIngredientRow* a1)
		{
			return ((::RPG::Client::DrinkMakerBartender_Ingredient*(*)(::RPG::GameCore::DrinkMakerIngredientRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_INGREDIENT_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_INGREDIENT_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_INGREDIENT_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_INGREDIENT_GET_DESC_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_INGREDIENT_GET_ICONPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* get_Attribute()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_INGREDIENT_GET_ATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean get_HasBubble()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER_INGREDIENT_GET_HASBUBBLE_OFFSET))(this);
		}
	};
}
