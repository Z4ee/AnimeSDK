#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightDraftSelectAction_DraftActionState.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"

class Class_1_D17272E82AE804C2_436;
class Class_1_F0A446EC7AE7E87D;
namespace RPG::Client { class GridFightDraftItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_FINISH_OFFSET UNITYSDK_OFFSET(0xBB09170)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_ITEMLIST_OFFSET UNITYSDK_OFFSET(0xBB095E0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_MAXREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xBB09580)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_REFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0xBB095A0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_SELECTCOUNT_OFFSET UNITYSDK_OFFSET(0xBB095C0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_REFRESHROLES_OFFSET UNITYSDK_OFFSET(0xBB09370)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SELECTROLES_OFFSET UNITYSDK_OFFSET(0xBB09270)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_ITEMLIST_OFFSET UNITYSDK_OFFSET(0xBB095F0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_MAXREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xBB09590)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_REFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0xBB095B0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_SELECTCOUNT_OFFSET UNITYSDK_OFFSET(0xBB095D0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0xBB09040)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SYNC_OFFSET UNITYSDK_OFFSET(0xBB08E10)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xBB09600)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION__DISPATCHRSPFINISH_OFFSET UNITYSDK_OFFSET(0xBB090F0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION___IFIXBASEPROXY_FINISH_OFFSET UNITYSDK_OFFSET(0xBB09650)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDraftSelectAction_TypeDefinitionIndex = 60331;

	class GridFightDraftSelectAction : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightDraftItemData*>* _ItemList_k__BackingField; // 0x18
		::RPG::Client::GridFightDraftSelectAction_DraftActionState _State; // 0x20
		::System::UInt32 _SelectCount_k__BackingField; // 0x24
		::System::UInt32 _MaxRefreshTimes_k__BackingField; // 0x28
		::System::UInt32 _RefreshCount_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_F0A446EC7AE7E87D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncHandleRsp(::Class_1_D17272E82AE804C2_436* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_436*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SYNCHANDLERSP_OFFSET))(this, a1);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_FINISH_OFFSET))(this);
		}

		::System::Void SelectRoles(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SELECTROLES_OFFSET))(this, a1);
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

		::System::Void set_MaxRefreshTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_MAXREFRESHTIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_RefreshCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_REFRESHCOUNT_OFFSET))(this);
		}

		::System::Void set_RefreshCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_REFRESHCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_SelectCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_SELECTCOUNT_OFFSET))(this);
		}

		::System::Void set_SelectCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_SELECTCOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightDraftItemData*>* get_ItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightDraftItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_GET_ITEMLIST_OFFSET))(this);
		}

		::System::Void set_ItemList(::System::Collections::Generic::List_1<::RPG::Client::GridFightDraftItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightDraftItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION_SET_ITEMLIST_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSELECTACTION___IFIXBASEPROXY_FINISH_OFFSET))(this);
		}
	};
}
