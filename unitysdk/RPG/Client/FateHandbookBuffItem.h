#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateBuffRarityType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateBuffData; }
namespace RPG::Client { class FateTraitData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x968CAD0)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_ALLLEVELBUFFPREVIEWDICT_OFFSET UNITYSDK_OFFSET(0x968D4E0)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_BUFFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x968CC00)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_BUFFICONPATH_OFFSET UNITYSDK_OFFSET(0x968D120)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0x968CBC0)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_BUFFLEVEL_OFFSET UNITYSDK_OFFSET(0x968CBE0)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_BUFFNAME_OFFSET UNITYSDK_OFFSET(0x968CF30)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_EXTRAEFFECTARRAY_OFFSET UNITYSDK_OFFSET(0x968D610)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_MAINTRAITDATA_OFFSET UNITYSDK_OFFSET(0x968CCD0)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x968D270)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_SELLPRICE_OFFSET UNITYSDK_OFFSET(0x968D3B0)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_SUBTRAITDATA_OFFSET UNITYSDK_OFFSET(0x968CE00)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_SET_BUFFID_OFFSET UNITYSDK_OFFSET(0x968CBD0)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM_SET_BUFFLEVEL_OFFSET UNITYSDK_OFFSET(0x968CBF0)
#define RPG_CLIENT_FATEHANDBOOKBUFFITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x968CBB0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHandbookBuffItem_TypeDefinitionIndex = 51986;

	class FateHandbookBuffItem : public ::System::Object
	{
	public:
		::RPG::Client::FateTraitData* _SubTraitData; // 0x10
		::RPG::Client::FateTraitData* _MainTraitData; // 0x18
		::RPG::Client::FateBuffData* _BuffDisplayData; // 0x20
		::System::UInt32 _BuffLevel_k__BackingField; // 0x28
		::System::UInt32 _BuffID_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 buffId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFITEM__CTOR_OFFSET))(this, buffId);
		}

		static ::RPG::Client::FateHandbookBuffItem* Create(::System::UInt32 buffId)
		{
			return ((::RPG::Client::FateHandbookBuffItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFITEM_CREATE_OFFSET))(buffId);
		}

		::System::UInt32 get_BuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_BUFFID_OFFSET))(this);
		}

		::System::Void set_BuffID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFITEM_SET_BUFFID_OFFSET))(this, value);
		}

		::System::UInt32 get_BuffLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFITEM_GET_BUFFLEVEL_OFFSET))(this);
		}

		::System::Void set_BuffLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKBUFFITEM_SET_BUFFLEVEL_OFFSET))(this, value);
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
