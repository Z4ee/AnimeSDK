#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenOutfitType.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_49;
class Class_1_DE6E491FE63D8E69_4;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenOutfitItemData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenOutfitTypeData; }
namespace RPG::GameCore { class ActivityHipplenOutfitRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_CHECKOUTFITISUNLOCK_OFFSET UNITYSDK_OFFSET(0x19BC5C50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETCUROUTFITROWBYTYPE_OFFSET UNITYSDK_OFFSET(0x19BC60F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETHIPPLENBODYOUTFITKEY_OFFSET UNITYSDK_OFFSET(0x19BC5F80)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETHIPPLENITEMOUTFITKEY_OFFSET UNITYSDK_OFFSET(0x19BC6430)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETKEYFRAGMENTBYOUTFITMATERIALID_OFFSET UNITYSDK_OFFSET(0x19BC6380)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETOUTFITITEMLISTBYTYPE_OFFSET UNITYSDK_OFFSET(0x19BC6500)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETOUTFITTYPEDATABYTYPE_OFFSET UNITYSDK_OFFSET(0x19BC6970)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_SYNCCUROUTFIT_OFFSET UNITYSDK_OFFSET(0x19BC5800)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x19BC4F40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_UNLOCKOUTFIT_OFFSET UNITYSDK_OFFSET(0x19BC5D10)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC4E90)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenOutfitData_TypeDefinitionIndex = 71900;

	class ActivityHipplenOutfitData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _CurOutfitIDList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedOutfitIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_DE6E491FE63D8E69_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DE6E491FE63D8E69_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_SYNC_OFFSET))(this, a1);
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
