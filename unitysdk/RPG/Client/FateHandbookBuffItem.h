#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateBuffRarityType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateBuffData; }
namespace RPG::Client { class FateTraitData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xCF4D010)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_ALLLEVELBUFFPREVIEWDICT_OFFSET UNITYSDK_OFFSET(0xCF4DAA0)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_BUFFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xCF4D140)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_BUFFICONPATH_OFFSET UNITYSDK_OFFSET(0xCF4D660)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0xCF4D100)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_BUFFLEVEL_OFFSET UNITYSDK_OFFSET(0xCF4D120)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_BUFFNAME_OFFSET UNITYSDK_OFFSET(0xCF4D470)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_EXTRAEFFECTARRAY_OFFSET UNITYSDK_OFFSET(0xCF4DBD0)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_MAINTRAITDATA_OFFSET UNITYSDK_OFFSET(0xCF4D210)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xCF4D800)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_SELLPRICE_OFFSET UNITYSDK_OFFSET(0xCF4D970)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_SUBTRAITDATA_OFFSET UNITYSDK_OFFSET(0xCF4D340)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_SET_BUFFID_OFFSET UNITYSDK_OFFSET(0xCF4D110)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_SET_BUFFLEVEL_OFFSET UNITYSDK_OFFSET(0xCF4D130)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xCF4D0F0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHandbookBuffItem_TypeDefinitionIndex = 64131;

	class FateHandbookBuffItem : public ::System::Object
	{
	public:
		::RPG::Client::FateTraitData* _SubTraitData; // 0x10
		::RPG::Client::FateBuffData* _BuffDisplayData; // 0x18
		::RPG::Client::FateTraitData* _MainTraitData; // 0x20
		::System::UInt32 _BuffLevel_k__BackingField; // 0x28
		::System::UInt32 _BuffID_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFITEM__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::FateHandbookBuffItem* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::FateHandbookBuffItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFITEM_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_BuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_BUFFID_OFFSET))(this);
		}

		::System::Void set_BuffID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFITEM_SET_BUFFID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BuffLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_BUFFLEVEL_OFFSET))(this);
		}

		::System::Void set_BuffLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFITEM_SET_BUFFLEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::FateBuffData* get_BuffDisplayData()
		{
			return ((::RPG::Client::FateBuffData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_BUFFDISPLAYDATA_OFFSET))(this);
		}

		::RPG::Client::FateTraitData* get_MainTraitData()
		{
			return ((::RPG::Client::FateTraitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_MAINTRAITDATA_OFFSET))(this);
		}

		::RPG::Client::FateTraitData* get_SubTraitData()
		{
			return ((::RPG::Client::FateTraitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_SUBTRAITDATA_OFFSET))(this);
		}

		::RPG::Client::TextID get_BuffName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_BUFFNAME_OFFSET))(this);
		}

		::System::String* get_BuffIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_BUFFICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::FateBuffRarityType get_Rarity()
		{
			return ((::RPG::GameCore::FateBuffRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_RARITY_OFFSET))(this);
		}

		::System::UInt32 get_SellPrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_SELLPRICE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FateBuffData*>* get_AllLevelBuffPreviewDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FateBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_ALLLEVELBUFFPREVIEWDICT_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectArray()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_EXTRAEFFECTARRAY_OFFSET))(this);
		}
	};
}
