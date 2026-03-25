#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F0A446EC7AE7E87D;
namespace RPG::Client { class GridFightDraftItemData; }
namespace RPG::Client { class GridFightDraftSelectAction; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTDRAFTSERVERDATA_GET_ITEMLIST_OFFSET UNITYSDK_OFFSET(0x97F2A80)
#define RPG_CLIENT_GRIDFIGHTDRAFTSERVERDATA_GET_MAXREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x97F38D0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSERVERDATA_GET_REFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0x97F38F0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSERVERDATA_GET_SELECTACTION_OFFSET UNITYSDK_OFFSET(0x97F3910)
#define RPG_CLIENT_GRIDFIGHTDRAFTSERVERDATA_GET_SELECTCOUNT_OFFSET UNITYSDK_OFFSET(0x97F2AA0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSERVERDATA_REFRESHROLES_OFFSET UNITYSDK_OFFSET(0x97F3880)
#define RPG_CLIENT_GRIDFIGHTDRAFTSERVERDATA_SELECTROLES_OFFSET UNITYSDK_OFFSET(0x97F3820)
#define RPG_CLIENT_GRIDFIGHTDRAFTSERVERDATA_SET_SELECTACTION_OFFSET UNITYSDK_OFFSET(0x97F3920)
#define RPG_CLIENT_GRIDFIGHTDRAFTSERVERDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x97F37C0)
#define RPG_CLIENT_GRIDFIGHTDRAFTSERVERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x97F3930)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDraftServerData_TypeDefinitionIndex = 52440;

	class GridFightDraftServerData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightDraftSelectAction* _SelectAction_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSERVERDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_F0A446EC7AE7E87D* pendingAction)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSERVERDATA_SYNC_OFFSET))(this, pendingAction);
		}

		::System::Void SelectRoles(::System::Collections::Generic::List_1<::System::UInt32>* selectedList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSERVERDATA_SELECTROLES_OFFSET))(this, selectedList);
		}

		::System::Void RefreshRoles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSERVERDATA_REFRESHROLES_OFFSET))(this);
		}

		::System::UInt32 get_MaxRefreshTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSERVERDATA_GET_MAXREFRESHTIMES_OFFSET))(this);
		}

		::System::UInt32 get_RefreshCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSERVERDATA_GET_REFRESHCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_SelectCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSERVERDATA_GET_SELECTCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightDraftItemData*>* get_ItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightDraftItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSERVERDATA_GET_ITEMLIST_OFFSET))(this);
		}

		::RPG::Client::GridFightDraftSelectAction* get_SelectAction()
		{
			return ((::RPG::Client::GridFightDraftSelectAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSERVERDATA_GET_SELECTACTION_OFFSET))(this);
		}

		::System::Void set_SelectAction(::RPG::Client::GridFightDraftSelectAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDraftSelectAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTSERVERDATA_SET_SELECTACTION_OFFSET))(this, value);
		}
	};
}
