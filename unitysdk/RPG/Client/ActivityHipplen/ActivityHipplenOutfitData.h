#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenOutfitType.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_49;
class Class_1_9305CDA54C32E908;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenOutfitItemData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenOutfitTypeData; }
namespace RPG::GameCore { class ActivityHipplenOutfitRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_CHECKOUTFITISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1B7B5800)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETCUROUTFITROWBYTYPE_OFFSET UNITYSDK_OFFSET(0x1B7B5CA0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETHIPPLENBODYOUTFITKEY_OFFSET UNITYSDK_OFFSET(0x1B7B5B30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETHIPPLENITEMOUTFITKEY_OFFSET UNITYSDK_OFFSET(0x1B7B5FE0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETKEYFRAGMENTBYOUTFITMATERIALID_OFFSET UNITYSDK_OFFSET(0x1B7B5F30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETOUTFITITEMLISTBYTYPE_OFFSET UNITYSDK_OFFSET(0x1B7B60B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETOUTFITTYPEDATABYTYPE_OFFSET UNITYSDK_OFFSET(0x1B7B6520)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_SYNCCUROUTFIT_OFFSET UNITYSDK_OFFSET(0x1B7B53B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1B7B4AF0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_UNLOCKOUTFIT_OFFSET UNITYSDK_OFFSET(0x1B7B58C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7B4A40)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenOutfitData_TypeDefinitionIndex = 75206;

	class ActivityHipplenOutfitData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedOutfitIDList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _CurOutfitIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_9305CDA54C32E908* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9305CDA54C32E908*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncCurOutfit(::Class_1_45BB92167AED63A0_49* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_49*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_SYNCCUROUTFIT_OFFSET))(this, a1);
		}

		::System::Boolean CheckOutfitIsUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_CHECKOUTFITISUNLOCK_OFFSET))(this, a1);
		}

		::System::Void UnlockOutfit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_UNLOCKOUTFIT_OFFSET))(this, a1);
		}

		::System::String* GetHipplenBodyOutfitKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETHIPPLENBODYOUTFITKEY_OFFSET))(this);
		}

		::System::String* GetHipplenItemOutfitKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETHIPPLENITEMOUTFITKEY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenOutfitItemData*>* GetOutfitItemListByType(::RPG::GameCore::HipplenOutfitType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenOutfitItemData*>*(*)(::PVOID, ::RPG::GameCore::HipplenOutfitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETOUTFITITEMLISTBYTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenOutfitTypeData* GetOutfitTypeDataByType(::RPG::GameCore::HipplenOutfitType a1)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenOutfitTypeData*(*)(::PVOID, ::RPG::GameCore::HipplenOutfitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETOUTFITTYPEDATABYTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivityHipplenOutfitRow* GetCurOutfitRowByType(::RPG::GameCore::HipplenOutfitType a1)
		{
			return ((::RPG::GameCore::ActivityHipplenOutfitRow*(*)(::PVOID, ::RPG::GameCore::HipplenOutfitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETCUROUTFITROWBYTYPE_OFFSET))(this, a1);
		}

		::System::String* GetKeyFragmentByOutfitMaterialID(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETKEYFRAGMENTBYOUTFITMATERIALID_OFFSET))(this, a1);
		}
	};
}
