#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_33;
class Class_1_F0A446EC7AE7E87D;
class Class_1_FB0633E85BD6CF8E_5;
namespace RPG::Client { class GridFightPortalData; }
namespace RPG::Client { class GridFightPortalSelectAction; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x9884610)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_GET_PORTALDATALIST_OFFSET UNITYSDK_OFFSET(0x98845F0)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_GET_SELECTEDPORTALDATA_OFFSET UNITYSDK_OFFSET(0x98845D0)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x9884620)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SET_PORTALDATALIST_OFFSET UNITYSDK_OFFSET(0x9884600)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SET_SELECTEDPORTALDATA_OFFSET UNITYSDK_OFFSET(0x98845E0)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_1_OFFSET UNITYSDK_OFFSET(0x98841F0)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_2_OFFSET UNITYSDK_OFFSET(0x9884430)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9884130)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9884630)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPortalServerData_TypeDefinitionIndex = 52849;

	class GridFightPortalServerData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightPortalData*>* _PortalDataList_k__BackingField; // 0x10
		::RPG::Client::GridFightPortalData* _SelectedPortalData_k__BackingField; // 0x18
		::RPG::Client::GridFightPortalSelectAction* _Action_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_F0A446EC7AE7E87D* action)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_OFFSET))(this, action);
		}

		::System::Void Sync_1(::Class_1_FB0633E85BD6CF8E_5* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_1_OFFSET))(this, info);
		}

		::System::Void Sync_2(::Class_1_735612C94F558EAE_33* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_33*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_2_OFFSET))(this, update);
		}

		::RPG::Client::GridFightPortalData* get_SelectedPortalData()
		{
			return ((::RPG::Client::GridFightPortalData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_GET_SELECTEDPORTALDATA_OFFSET))(this);
		}

		::System::Void set_SelectedPortalData(::RPG::Client::GridFightPortalData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SET_SELECTEDPORTALDATA_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightPortalData*>* get_PortalDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightPortalData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_GET_PORTALDATALIST_OFFSET))(this);
		}

		::System::Void set_PortalDataList(::System::Collections::Generic::List_1<::RPG::Client::GridFightPortalData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightPortalData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SET_PORTALDATALIST_OFFSET))(this, value);
		}

		::RPG::Client::GridFightPortalSelectAction* get_Action()
		{
			return ((::RPG::Client::GridFightPortalSelectAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_Action(::RPG::Client::GridFightPortalSelectAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPortalSelectAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SET_ACTION_OFFSET))(this, value);
		}
	};
}
