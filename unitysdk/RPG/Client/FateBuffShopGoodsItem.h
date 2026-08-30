#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateBuffRarityType.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_38;
namespace RPG::Client { class FateBuffData; }
namespace RPG::Client { class FateTraitData; }
namespace System { class String; }

#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_CREATE_1_OFFSET UNITYSDK_OFFSET(0xCF30460)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xCF30040)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0xCF2F750)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_BUFFLEVEL_OFFSET UNITYSDK_OFFSET(0xCF30690)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_BUFFMAINTRAITDATA_OFFSET UNITYSDK_OFFSET(0xCF309D0)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_BUFFNAME_OFFSET UNITYSDK_OFFSET(0xCF305C0)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_BUFFSUBTRAITDATA_OFFSET UNITYSDK_OFFSET(0xCF30B30)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_BUFFTAG_OFFSET UNITYSDK_OFFSET(0xCF306E0)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_DISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xCF30580)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_EFFECTDESCTEXT_OFFSET UNITYSDK_OFFSET(0xCF30830)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_EXTRAEFFECTARRAY_OFFSET UNITYSDK_OFFSET(0xCF308D0)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCF30950)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xCF30520)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_ISMAINTRAITMODIFIED_OFFSET UNITYSDK_OFFSET(0xCF30C90)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_ISSOLDOUT_OFFSET UNITYSDK_OFFSET(0xCF30560)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_ISSUBTRAITMODIFIED_OFFSET UNITYSDK_OFFSET(0xCF30CE0)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_PRICE_OFFSET UNITYSDK_OFFSET(0xCF30540)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xCF307B0)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_SIMPLEEFFECTDESCTEXT_OFFSET UNITYSDK_OFFSET(0xCF30880)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xCF30530)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_SET_ISSOLDOUT_OFFSET UNITYSDK_OFFSET(0xCF30570)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_SET_PRICE_OFFSET UNITYSDK_OFFSET(0xCF30550)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_SYNCBOUGHT_OFFSET UNITYSDK_OFFSET(0xCF2EA90)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM_SYNCSOLD_OFFSET UNITYSDK_OFFSET(0xCF2EB60)
#define RPG_CLIENT_FATEBUFFSHOPGOODSITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xCF302A0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBuffShopGoodsItem_TypeDefinitionIndex = 64187;

	class FateBuffShopGoodsItem : public ::System::Object
	{
	public:
		::RPG::Client::FateBuffData* _DisplayData; // 0x10
		::System::UInt32 _Index_k__BackingField; // 0x18
		::System::UInt32 _Price_k__BackingField; // 0x1C
		::System::Boolean _IsSoldOut_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::FateBuffShopGoodsItem* Create(::Class_1_21C7581DFE99F091_38* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::FateBuffShopGoodsItem*(*)(::Class_1_21C7581DFE99F091_38*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::FateBuffShopGoodsItem* Create_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5)
		{
			return ((::RPG::Client::FateBuffShopGoodsItem*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_CREATE_1_OFFSET))(a1, a2, a3, a4, a5);
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

		::System::Void set_Index(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_SET_INDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_Price()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_PRICE_OFFSET))(this);
		}

		::System::Void set_Price(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_SET_PRICE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSoldOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_GET_ISSOLDOUT_OFFSET))(this);
		}

		::System::Void set_IsSoldOut(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPGOODSITEM_SET_ISSOLDOUT_OFFSET))(this, a1);
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
