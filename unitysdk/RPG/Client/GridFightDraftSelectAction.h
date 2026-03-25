#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightDraftSelectAction_DraftActionState.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"

class Class_1_F0A446EC7AE7E87D;
class Class_1_FA4F4A67B1C04320_407;
namespace RPG::Client { class GridFightDraftItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_FINISH_OFFSET UNITYSDK_OFFSET(0x97F3240)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_ITEMLIST_OFFSET UNITYSDK_OFFSET(0x97F36B0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_MAXREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x97F3650)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_REFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0x97F3670)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_SELECTCOUNT_OFFSET UNITYSDK_OFFSET(0x97F3690)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_REFRESHROLES_OFFSET UNITYSDK_OFFSET(0x97F3440)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SELECTROLES_OFFSET UNITYSDK_OFFSET(0x97F3340)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_ITEMLIST_OFFSET UNITYSDK_OFFSET(0x97F36C0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_MAXREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x97F3660)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_REFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0x97F3680)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_SELECTCOUNT_OFFSET UNITYSDK_OFFSET(0x97F36A0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0x97F3110)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SYNC_OFFSET UNITYSDK_OFFSET(0x97F2F80)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x97F36D0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION__DISPATCHRSPFINISH_OFFSET UNITYSDK_OFFSET(0x97F31C0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION___IFIXBASEPROXY_FINISH_OFFSET UNITYSDK_OFFSET(0x97F3720)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDraftSelectAction_TypeDefinitionIndex = 52438;

	class GridFightDraftSelectAction : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightDraftItemData*>* _ItemList_k__BackingField; // 0x18
		::System::UInt32 _RefreshCount_k__BackingField; // 0x20
		::System::UInt32 _SelectCount_k__BackingField; // 0x24
		::System::UInt32 _MaxRefreshTimes_k__BackingField; // 0x28
		::RPG::Client::GridFightDraftSelectAction_DraftActionState _State; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_F0A446EC7AE7E87D* pendingAction)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SYNC_OFFSET))(this, pendingAction);
		}

		::System::Void SyncHandleRsp(::Class_1_FA4F4A67B1C04320_407* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_407*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SYNCHANDLERSP_OFFSET))(this, rsp);
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
