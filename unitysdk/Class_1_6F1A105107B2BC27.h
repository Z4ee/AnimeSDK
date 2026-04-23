#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/TargetGenderType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_6F1A105107B2BC27_GET_FIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0x118DDDC0)
#define CLASS_1_6F1A105107B2BC27_GET_GENDER_OFFSET UNITYSDK_OFFSET(0x118DDCE0)
#define CLASS_1_6F1A105107B2BC27_GET_HASITEMDISPLAY_OFFSET UNITYSDK_OFFSET(0x118DDD00)
#define CLASS_1_6F1A105107B2BC27_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x118DDDA0)
#define CLASS_1_6F1A105107B2BC27_GET_ITEMBGDESC_OFFSET UNITYSDK_OFFSET(0x118DDD80)
#define CLASS_1_6F1A105107B2BC27_GET_ITEMCURRENCYICONPATH_OFFSET UNITYSDK_OFFSET(0x118DDDE0)
#define CLASS_1_6F1A105107B2BC27_GET_ITEMDESC_OFFSET UNITYSDK_OFFSET(0x118DDD60)
#define CLASS_1_6F1A105107B2BC27_GET_ITEMNAME_OFFSET UNITYSDK_OFFSET(0x118DDD40)
#define CLASS_1_6F1A105107B2BC27_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x118DDE00)
#define CLASS_1_6F1A105107B2BC27_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x118DDD20)
#define CLASS_1_6F1A105107B2BC27_SET_FIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0x118DDDD0)
#define CLASS_1_6F1A105107B2BC27_SET_GENDER_OFFSET UNITYSDK_OFFSET(0x118DDCF0)
#define CLASS_1_6F1A105107B2BC27_SET_HASITEMDISPLAY_OFFSET UNITYSDK_OFFSET(0x118DDD10)
#define CLASS_1_6F1A105107B2BC27_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x118DDDB0)
#define CLASS_1_6F1A105107B2BC27_SET_ITEMBGDESC_OFFSET UNITYSDK_OFFSET(0x118DDD90)
#define CLASS_1_6F1A105107B2BC27_SET_ITEMCURRENCYICONPATH_OFFSET UNITYSDK_OFFSET(0x118DDDF0)
#define CLASS_1_6F1A105107B2BC27_SET_ITEMDESC_OFFSET UNITYSDK_OFFSET(0x118DDD70)
#define CLASS_1_6F1A105107B2BC27_SET_ITEMNAME_OFFSET UNITYSDK_OFFSET(0x118DDD50)
#define CLASS_1_6F1A105107B2BC27_SET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x118DDE10)
#define CLASS_1_6F1A105107B2BC27_SET_RARITY_OFFSET UNITYSDK_OFFSET(0x118DDD30)
#define CLASS_1_6F1A105107B2BC27__CTOR_OFFSET UNITYSDK_OFFSET(0x118DDE20)

inline static constexpr unsigned int Class_1_6F1A105107B2BC27_TypeDefinitionIndex = 57681;

class Class_1_6F1A105107B2BC27 : public ::System::Object
{
public:
	::System::String* _FigureIconPath_k__BackingField; // 0x10
	::System::String* _IconPath_k__BackingField; // 0x18
	::System::String* _ItemCurrencyIconPath_k__BackingField; // 0x20
	::System::String* _JsonPath_k__BackingField; // 0x28
	::RPG::Client::TextID _ItemName_k__BackingField; // 0x30
	::RPG::GameCore::TargetGenderType _Gender_k__BackingField; // 0x40
	::RPG::Client::TextID _ItemDesc_k__BackingField; // 0x48
	::System::Boolean _HasItemDisplay_k__BackingField; // 0x58
	::RPG::GameCore::ItemRarity _Rarity_k__BackingField; // 0x5C
	::RPG::Client::TextID _ItemBGDesc_k__BackingField; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F1A105107B2BC27__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::TargetGenderType get_Gender()
	{
		return ((::RPG::GameCore::TargetGenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F1A105107B2BC27_GET_GENDER_OFFSET))(this);
	}

	::System::Void set_Gender(::RPG::GameCore::TargetGenderType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetGenderType))((::PBYTE)hIl2Cpp + CLASS_1_6F1A105107B2BC27_SET_GENDER_OFFSET))(this, value);
	}

	::System::Boolean get_HasItemDisplay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F1A105107B2BC27_GET_HASITEMDISPLAY_OFFSET))(this);
	}

	::System::Void set_HasItemDisplay(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6F1A105107B2BC27_SET_HASITEMDISPLAY_OFFSET))(this, value);
	}

	::RPG::GameCore::ItemRarity get_Rarity()
	{
		return ((::RPG::GameCore::ItemRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F1A105107B2BC27_GET_RARITY_OFFSET))(this);
	}

	::System::Void set_Rarity(::RPG::GameCore::ItemRarity value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemRarity))((::PBYTE)hIl2Cpp + CLASS_1_6F1A105107B2BC27_SET_RARITY_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_ItemName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F1A105107B2BC27_GET_ITEMNAME_OFFSET))(this);
	}

	::System::Void set_ItemName(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_6F1A105107B2BC27_SET_ITEMNAME_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_ItemDesc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F1A105107B2BC27_GET_ITEMDESC_OFFSET))(this);
	}

	::System::Void set_ItemDesc(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_6F1A105107B2BC27_SET_ITEMDESC_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_ItemBGDesc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F1A105107B2BC27_GET_ITEMBGDESC_OFFSET))(this);
	}

	::System::Void set_ItemBGDesc(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_6F1A105107B2BC27_SET_ITEMBGDESC_OFFSET))(this, value);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F1A105107B2BC27_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6F1A105107B2BC27_SET_ICONPATH_OFFSET))(this, value);
	}

	::System::String* get_FigureIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F1A105107B2BC27_GET_FIGUREICONPATH_OFFSET))(this);
	}

	::System::Void set_FigureIconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6F1A105107B2BC27_SET_FIGUREICONPATH_OFFSET))(this, value);
	}

	::System::String* get_ItemCurrencyIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F1A105107B2BC27_GET_ITEMCURRENCYICONPATH_OFFSET))(this);
	}

	::System::Void set_ItemCurrencyIconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6F1A105107B2BC27_SET_ITEMCURRENCYICONPATH_OFFSET))(this, value);
	}

	::System::String* get_JsonPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F1A105107B2BC27_GET_JSONPATH_OFFSET))(this);
	}

	::System::Void set_JsonPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6F1A105107B2BC27_SET_JSONPATH_OFFSET))(this, value);
	}
};
