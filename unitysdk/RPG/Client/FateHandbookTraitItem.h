#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateTraitType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateTraitBuffItem; }
namespace RPG::Client { class FateTraitData; }
namespace RPG::Client { class IFateTraitSource; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEHANDBOOKTRAITITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xB9A29B0)
#define RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_EXTRAEFFECTARRAY_OFFSET UNITYSDK_OFFSET(0xB9A3C30)
#define RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_RELATEDFATEBUFFIDLIST_OFFSET UNITYSDK_OFFSET(0xB9A36F0)
#define RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_TRAITBIGICONPATH_OFFSET UNITYSDK_OFFSET(0xB9A3120)
#define RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_TRAITBUFFITEMLIST_OFFSET UNITYSDK_OFFSET(0xB9A3520)
#define RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_TRAITDESC_OFFSET UNITYSDK_OFFSET(0xB9A2F40)
#define RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_TRAITDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xB9A2AE0)
#define RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0xB9A2AA0)
#define RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_TRAITLEVEL_OFFSET UNITYSDK_OFFSET(0xB9A2AC0)
#define RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_TRAITNAME_OFFSET UNITYSDK_OFFSET(0xB9A2C40)
#define RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_TRAITSMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xB9A33B0)
#define RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_TRAITSOURCELIST_OFFSET UNITYSDK_OFFSET(0xB9A3A50)
#define RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_TRAITTYPE_OFFSET UNITYSDK_OFFSET(0xB9A2DE0)
#define RPG_CLIENT_FATEHANDBOOKTRAITITEM_SET_TRAITID_OFFSET UNITYSDK_OFFSET(0xB9A2AB0)
#define RPG_CLIENT_FATEHANDBOOKTRAITITEM_SET_TRAITLEVEL_OFFSET UNITYSDK_OFFSET(0xB9A2AD0)
#define RPG_CLIENT_FATEHANDBOOKTRAITITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB9A2A90)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHandbookTraitItem_TypeDefinitionIndex = 59874;

	class FateHandbookTraitItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IFateTraitSource*>* _TraitSourceList; // 0x10
		::RPG::Client::FateTraitData* _TraitDisplayData; // 0x18
		::System::UInt32 _TraitLevel_k__BackingField; // 0x20
		::System::UInt32 _TraitID_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKTRAITITEM__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::FateHandbookTraitItem* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::FateHandbookTraitItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKTRAITITEM_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_TraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_TRAITID_OFFSET))(this);
		}

		::System::Void set_TraitID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKTRAITITEM_SET_TRAITID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TraitLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_TRAITLEVEL_OFFSET))(this);
		}

		::System::Void set_TraitLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKTRAITITEM_SET_TRAITLEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::FateTraitData* get_TraitDisplayData()
		{
			return ((::RPG::Client::FateTraitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_TRAITDISPLAYDATA_OFFSET))(this);
		}

		::RPG::Client::TextID get_TraitName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_TRAITNAME_OFFSET))(this);
		}

		::RPG::GameCore::FateTraitType get_TraitType()
		{
			return ((::RPG::GameCore::FateTraitType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_TRAITTYPE_OFFSET))(this);
		}

		::System::String* get_TraitDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_TRAITDESC_OFFSET))(this);
		}

		::System::String* get_TraitBigIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_TRAITBIGICONPATH_OFFSET))(this);
		}

		::System::String* get_TraitSmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_TRAITSMALLICONPATH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateTraitBuffItem*>* get_TraitBuffItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateTraitBuffItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_TRAITBUFFITEMLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RelatedFateBuffIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_RELATEDFATEBUFFIDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IFateTraitSource*>* get_TraitSourceList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IFateTraitSource*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_TRAITSOURCELIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectArray()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKTRAITITEM_GET_EXTRAEFFECTARRAY_OFFSET))(this);
		}
	};
}
