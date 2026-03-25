#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenOutfitType.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_41;
class Class_1_867606D9C6217C6D_1;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenOutfitItemData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenOutfitTypeData; }
namespace RPG::GameCore { class ActivityHipplenOutfitRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_CHECKOUTFITISUNLOCK_OFFSET UNITYSDK_OFFSET(0x8F28AD0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETCUROUTFITROWBYTYPE_OFFSET UNITYSDK_OFFSET(0x8F28E70)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETHIPPLENBODYOUTFITKEY_OFFSET UNITYSDK_OFFSET(0x8F28D00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETHIPPLENITEMOUTFITKEY_OFFSET UNITYSDK_OFFSET(0x8F29190)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETKEYFRAGMENTBYOUTFITMATERIALID_OFFSET UNITYSDK_OFFSET(0x8F290E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETOUTFITITEMLISTBYTYPE_OFFSET UNITYSDK_OFFSET(0x8F292F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETOUTFITTYPEDATABYTYPE_OFFSET UNITYSDK_OFFSET(0x8F295F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_SYNCCUROUTFIT_OFFSET UNITYSDK_OFFSET(0x8F287B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x8F28170)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_UNLOCKOUTFIT_OFFSET UNITYSDK_OFFSET(0x8F28B30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8F280D0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenOutfitData_TypeDefinitionIndex = 61655;

	class ActivityHipplenOutfitData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedOutfitIDList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _CurOutfitIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_867606D9C6217C6D_1* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_867606D9C6217C6D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_SYNC_OFFSET))(this, rsp);
		}

		::System::Void SyncCurOutfit(::Class_1_735612C94F558EAE_41* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_41*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_SYNCCUROUTFIT_OFFSET))(this, rsp);
		}

		::System::Boolean CheckOutfitIsUnlock(::System::UInt32 outfitID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_CHECKOUTFITISUNLOCK_OFFSET))(this, outfitID);
		}

		::System::Void UnlockOutfit(::System::UInt32 outfitID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_UNLOCKOUTFIT_OFFSET))(this, outfitID);
		}

		::System::String* GetHipplenBodyOutfitKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETHIPPLENBODYOUTFITKEY_OFFSET))(this);
		}

		::System::String* GetHipplenItemOutfitKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETHIPPLENITEMOUTFITKEY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenOutfitItemData*>* GetOutfitItemListByType(::RPG::GameCore::HipplenOutfitType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenOutfitItemData*>*(*)(::PVOID, ::RPG::GameCore::HipplenOutfitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETOUTFITITEMLISTBYTYPE_OFFSET))(this, type);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenOutfitTypeData* GetOutfitTypeDataByType(::RPG::GameCore::HipplenOutfitType type)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenOutfitTypeData*(*)(::PVOID, ::RPG::GameCore::HipplenOutfitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETOUTFITTYPEDATABYTYPE_OFFSET))(this, type);
		}

		::RPG::GameCore::ActivityHipplenOutfitRow* GetCurOutfitRowByType(::RPG::GameCore::HipplenOutfitType type)
		{
			return ((::RPG::GameCore::ActivityHipplenOutfitRow*(*)(::PVOID, ::RPG::GameCore::HipplenOutfitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETCUROUTFITROWBYTYPE_OFFSET))(this, type);
		}

		::System::String* GetKeyFragmentByOutfitMaterialID(::System::UInt32 id)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITDATA_GETKEYFRAGMENTBYOUTFITMATERIALID_OFFSET))(this, id);
		}
	};
}
