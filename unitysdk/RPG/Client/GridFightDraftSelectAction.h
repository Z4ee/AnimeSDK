#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightDraftSelectAction_DraftActionState.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"

class Class_1_D17272E82AE804C2_423;
class Class_1_F0A446EC7AE7E87D;
namespace RPG::Client { class GridFightDraftItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_FINISH_OFFSET UNITYSDK_OFFSET(0xA46D380)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_ITEMLIST_OFFSET UNITYSDK_OFFSET(0xA46D7F0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_MAXREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xA46D790)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_REFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0xA46D7B0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_SELECTCOUNT_OFFSET UNITYSDK_OFFSET(0xA46D7D0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_REFRESHROLES_OFFSET UNITYSDK_OFFSET(0xA46D580)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SELECTROLES_OFFSET UNITYSDK_OFFSET(0xA46D480)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_ITEMLIST_OFFSET UNITYSDK_OFFSET(0xA46D800)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_MAXREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xA46D7A0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_REFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0xA46D7C0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_SELECTCOUNT_OFFSET UNITYSDK_OFFSET(0xA46D7E0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0xA46D250)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SYNC_OFFSET UNITYSDK_OFFSET(0xA46D0D0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA46D810)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION__DISPATCHRSPFINISH_OFFSET UNITYSDK_OFFSET(0xA46D300)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION___IFIXBASEPROXY_FINISH_OFFSET UNITYSDK_OFFSET(0xA46D860)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDraftSelectAction_TypeDefinitionIndex = 59396;

	class GridFightDraftSelectAction : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightDraftItemData*>* _ItemList_k__BackingField; // 0x18
		::RPG::Client::GridFightDraftSelectAction_DraftActionState _State; // 0x20
		::System::UInt32 _RefreshCount_k__BackingField; // 0x24
		::System::UInt32 _MaxRefreshTimes_k__BackingField; // 0x28
		::System::UInt32 _SelectCount_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_F0A446EC7AE7E87D* pendingAction)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SYNC_OFFSET))(this, pendingAction);
		}

		::System::Void SyncHandleRsp(::Class_1_D17272E82AE804C2_423* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_423*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SYNCHANDLERSP_OFFSET))(this, rsp);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_FINISH_OFFSET))(this);
		}

		::System::Void SelectRoles(::System::Collections::Generic::List_1<::System::UInt32>* selectedList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SELECTROLES_OFFSET))(this, selectedList);
		}

		::System::Void RefreshRoles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_REFRESHROLES_OFFSET))(this);
		}

		::System::Void _DispatchRspFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION__DISPATCHRSPFINISH_OFFSET))(this);
		}

		::System::UInt32 get_MaxRefreshTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_MAXREFRESHTIMES_OFFSET))(this);
		}

		::System::Void set_MaxRefreshTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_MAXREFRESHTIMES_OFFSET))(this, value);
		}

		::System::UInt32 get_RefreshCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_REFRESHCOUNT_OFFSET))(this);
		}

		::System::Void set_RefreshCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_REFRESHCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_SelectCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_SELECTCOUNT_OFFSET))(this);
		}

		::System::Void set_SelectCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_SELECTCOUNT_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightDraftItemData*>* get_ItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightDraftItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_ITEMLIST_OFFSET))(this);
		}

		::System::Void set_ItemList(::System::Collections::Generic::List_1<::RPG::Client::GridFightDraftItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightDraftItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_ITEMLIST_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION___IFIXBASEPROXY_FINISH_OFFSET))(this);
		}
	};
}
