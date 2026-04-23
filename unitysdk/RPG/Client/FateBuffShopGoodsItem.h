#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateBuffRarityType.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_30;
namespace RPG::Client { class FateBuffData; }
namespace RPG::Client { class FateTraitData; }
namespace System { class String; }

#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_CREATE_1_OFFSET UNITYSDK_OFFSET(0xA331A50)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xA3315A0)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0xA330C20)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_BUFFLEVEL_OFFSET UNITYSDK_OFFSET(0xA331D10)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_BUFFMAINTRAITDATA_OFFSET UNITYSDK_OFFSET(0xA332270)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_BUFFNAME_OFFSET UNITYSDK_OFFSET(0xA331C80)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_BUFFSUBTRAITDATA_OFFSET UNITYSDK_OFFSET(0xA332420)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_BUFFTAG_OFFSET UNITYSDK_OFFSET(0xA331D30)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_DISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xA331C70)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_EFFECTDESCTEXT_OFFSET UNITYSDK_OFFSET(0xA331DF0)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_EXTRAEFFECTARRAY_OFFSET UNITYSDK_OFFSET(0xA332210)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA332240)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xA331C10)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_ISMAINTRAITMODIFIED_OFFSET UNITYSDK_OFFSET(0xA332540)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_ISSOLDOUT_OFFSET UNITYSDK_OFFSET(0xA331C50)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_ISSUBTRAITMODIFIED_OFFSET UNITYSDK_OFFSET(0xA332580)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_PRICE_OFFSET UNITYSDK_OFFSET(0xA331C30)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xA331DC0)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_SIMPLEEFFECTDESCTEXT_OFFSET UNITYSDK_OFFSET(0xA331E10)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xA331C20)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_SET_ISSOLDOUT_OFFSET UNITYSDK_OFFSET(0xA331C60)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_SET_PRICE_OFFSET UNITYSDK_OFFSET(0xA331C40)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_SYNCBOUGHT_OFFSET UNITYSDK_OFFSET(0xA330560)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_SYNCSOLD_OFFSET UNITYSDK_OFFSET(0xA330630)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA331910)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBuffShopGoodsItem_TypeDefinitionIndex = 58991;

	class FateBuffShopGoodsItem : public ::System::Object
	{
	public:
		::RPG::Client::FateBuffData* _DisplayData; // 0x10
		::System::UInt32 _Price_k__BackingField; // 0x18
		::System::Boolean _IsSoldOut_k__BackingField; // 0x1C
		::System::UInt32 _Index_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 id, ::System::UInt32 buffID, ::System::UInt32 price, ::System::UInt32 cnt, ::System::Boolean isSoldOut)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM__CTOR_OFFSET))(this, id, buffID, price, cnt, isSoldOut);
		}

		static ::RPG::Client::FateBuffShopGoodsItem* Create(::Class_1_21C7581DFE99F091_30* proto, ::System::UInt32 index)
		{
			return ((::RPG::Client::FateBuffShopGoodsItem*(*)(::Class_1_21C7581DFE99F091_30*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_CREATE_OFFSET))(proto, index);
		}

		static ::RPG::Client::FateBuffShopGoodsItem* Create_1(::System::UInt32 id, ::System::UInt32 buffID, ::System::UInt32 price, ::System::UInt32 soldCount, ::System::Boolean isSoldOut)
		{
			return ((::RPG::Client::FateBuffShopGoodsItem*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_CREATE_1_OFFSET))(id, buffID, price, soldCount, isSoldOut);
		}

		::System::Void SyncBought()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_SYNCBOUGHT_OFFSET))(this);
		}

		::System::Void SyncSold()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_SYNCSOLD_OFFSET))(this);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_SET_INDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_Price()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_PRICE_OFFSET))(this);
		}

		::System::Void set_Price(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_SET_PRICE_OFFSET))(this, value);
		}

		::System::Boolean get_IsSoldOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_ISSOLDOUT_OFFSET))(this);
		}

		::System::Void set_IsSoldOut(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_SET_ISSOLDOUT_OFFSET))(this, value);
		}

		::RPG::Client::FateBuffData* get_DisplayData()
		{
			return ((::RPG::Client::FateBuffData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_DISPLAYDATA_OFFSET))(this);
		}

		::System::UInt32 get_BuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_BUFFID_OFFSET))(this);
		}

		::RPG::Client::TextID get_BuffName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_BUFFNAME_OFFSET))(this);
		}

		::System::UInt32 get_BuffLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_BUFFLEVEL_OFFSET))(this);
		}

		::RPG::Client::TextID get_BuffTag()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_BUFFTAG_OFFSET))(this);
		}

		::RPG::GameCore::FateBuffRarityType get_Rarity()
		{
			return ((::RPG::GameCore::FateBuffRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_RARITY_OFFSET))(this);
		}

		::System::String* get_EffectDescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_EFFECTDESCTEXT_OFFSET))(this);
		}

		::System::String* get_SimpleEffectDescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_SIMPLEEFFECTDESCTEXT_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectArray()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_EXTRAEFFECTARRAY_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::FateTraitData* get_BuffMainTraitData()
		{
			return ((::RPG::Client::FateTraitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_BUFFMAINTRAITDATA_OFFSET))(this);
		}

		::RPG::Client::FateTraitData* get_BuffSubTraitData()
		{
			return ((::RPG::Client::FateTraitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_BUFFSUBTRAITDATA_OFFSET))(this);
		}

		::System::Boolean get_IsMainTraitModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_ISMAINTRAITMODIFIED_OFFSET))(this);
		}

		::System::Boolean get_IsSubTraitModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_ISSUBTRAITMODIFIED_OFFSET))(this);
		}
	};
}
