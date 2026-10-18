#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/TargetGenderType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_9CD95AD0A2E83C8D_GET_FIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0xF8826E0)
#define CLASS_1_9CD95AD0A2E83C8D_GET_GENDER_OFFSET UNITYSDK_OFFSET(0xF882600)
#define CLASS_1_9CD95AD0A2E83C8D_GET_HASITEMDISPLAY_OFFSET UNITYSDK_OFFSET(0xF882620)
#define CLASS_1_9CD95AD0A2E83C8D_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xF8826C0)
#define CLASS_1_9CD95AD0A2E83C8D_GET_ITEMBGDESC_OFFSET UNITYSDK_OFFSET(0xF8826A0)
#define CLASS_1_9CD95AD0A2E83C8D_GET_ITEMCURRENCYICONPATH_OFFSET UNITYSDK_OFFSET(0xF882700)
#define CLASS_1_9CD95AD0A2E83C8D_GET_ITEMDESC_OFFSET UNITYSDK_OFFSET(0xF882680)
#define CLASS_1_9CD95AD0A2E83C8D_GET_ITEMNAME_OFFSET UNITYSDK_OFFSET(0xF882660)
#define CLASS_1_9CD95AD0A2E83C8D_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0xF882720)
#define CLASS_1_9CD95AD0A2E83C8D_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xF882640)
#define CLASS_1_9CD95AD0A2E83C8D_SET_FIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0xF8826F0)
#define CLASS_1_9CD95AD0A2E83C8D_SET_GENDER_OFFSET UNITYSDK_OFFSET(0xF882610)
#define CLASS_1_9CD95AD0A2E83C8D_SET_HASITEMDISPLAY_OFFSET UNITYSDK_OFFSET(0xF882630)
#define CLASS_1_9CD95AD0A2E83C8D_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xF8826D0)
#define CLASS_1_9CD95AD0A2E83C8D_SET_ITEMBGDESC_OFFSET UNITYSDK_OFFSET(0xF8826B0)
#define CLASS_1_9CD95AD0A2E83C8D_SET_ITEMCURRENCYICONPATH_OFFSET UNITYSDK_OFFSET(0xF882710)
#define CLASS_1_9CD95AD0A2E83C8D_SET_ITEMDESC_OFFSET UNITYSDK_OFFSET(0xF882690)
#define CLASS_1_9CD95AD0A2E83C8D_SET_ITEMNAME_OFFSET UNITYSDK_OFFSET(0xF882670)
#define CLASS_1_9CD95AD0A2E83C8D_SET_JSONPATH_OFFSET UNITYSDK_OFFSET(0xF882730)
#define CLASS_1_9CD95AD0A2E83C8D_SET_RARITY_OFFSET UNITYSDK_OFFSET(0xF882650)
#define CLASS_1_9CD95AD0A2E83C8D__CTOR_OFFSET UNITYSDK_OFFSET(0xF882740)

inline static constexpr unsigned int Class_1_9CD95AD0A2E83C8D_TypeDefinitionIndex = 62504;

class Class_1_9CD95AD0A2E83C8D : public ::System::Object
{
public:
	::System::String* _ItemCurrencyIconPath_k__BackingField; // 0x10
	::System::String* _IconPath_k__BackingField; // 0x18
	::System::String* _JsonPath_k__BackingField; // 0x20
	::System::String* _FigureIconPath_k__BackingField; // 0x28
	::RPG::GameCore::TargetGenderType _Gender_k__BackingField; // 0x30
	::RPG::Client::TextID _ItemBGDesc_k__BackingField; // 0x38
	::RPG::Client::TextID _ItemDesc_k__BackingField; // 0x48
	::System::Boolean _HasItemDisplay_k__BackingField; // 0x58
	::RPG::GameCore::ItemRarity _Rarity_k__BackingField; // 0x5C
	::RPG::Client::TextID _ItemName_k__BackingField; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CD95AD0A2E83C8D__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::TargetGenderType get_Gender()
	{
		return ((::RPG::GameCore::TargetGenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CD95AD0A2E83C8D_GET_GENDER_OFFSET))(this);
	}

	::System::Void set_Gender(::RPG::GameCore::TargetGenderType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetGenderType))((::PBYTE)hIl2Cpp + CLASS_1_9CD95AD0A2E83C8D_SET_GENDER_OFFSET))(this, a1);
	}

	::System::Boolean get_HasItemDisplay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CD95AD0A2E83C8D_GET_HASITEMDISPLAY_OFFSET))(this);
	}

	::System::Void set_HasItemDisplay(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CD95AD0A2E83C8D_SET_HASITEMDISPLAY_OFFSET))(this, a1);
	}

	::RPG::GameCore::ItemRarity get_Rarity()
	{
		return ((::RPG::GameCore::ItemRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CD95AD0A2E83C8D_GET_RARITY_OFFSET))(this);
	}

	::System::Void set_Rarity(::RPG::GameCore::ItemRarity a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemRarity))((::PBYTE)hIl2Cpp + CLASS_1_9CD95AD0A2E83C8D_SET_RARITY_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_ItemName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CD95AD0A2E83C8D_GET_ITEMNAME_OFFSET))(this);
	}

	::System::Void set_ItemName(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_9CD95AD0A2E83C8D_SET_ITEMNAME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_ItemDesc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CD95AD0A2E83C8D_GET_ITEMDESC_OFFSET))(this);
	}

	::System::Void set_ItemDesc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_9CD95AD0A2E83C8D_SET_ITEMDESC_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_ItemBGDesc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CD95AD0A2E83C8D_GET_ITEMBGDESC_OFFSET))(this);
	}

	::System::Void set_ItemBGDesc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_9CD95AD0A2E83C8D_SET_ITEMBGDESC_OFFSET))(this, a1);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CD95AD0A2E83C8D_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9CD95AD0A2E83C8D_SET_ICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_FigureIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CD95AD0A2E83C8D_GET_FIGUREICONPATH_OFFSET))(this);
	}

	::System::Void set_FigureIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9CD95AD0A2E83C8D_SET_FIGUREICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_ItemCurrencyIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CD95AD0A2E83C8D_GET_ITEMCURRENCYICONPATH_OFFSET))(this);
	}

	::System::Void set_ItemCurrencyIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9CD95AD0A2E83C8D_SET_ITEMCURRENCYICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_JsonPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CD95AD0A2E83C8D_GET_JSONPATH_OFFSET))(this);
	}

	::System::Void set_JsonPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9CD95AD0A2E83C8D_SET_JSONPATH_OFFSET))(this, a1);
	}
};
