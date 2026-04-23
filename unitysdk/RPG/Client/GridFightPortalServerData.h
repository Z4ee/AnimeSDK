#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_388;
class Class_1_D7F3D169C3137F53_1;
class Class_1_F0A446EC7AE7E87D;
namespace RPG::Client { class GridFightPortalData; }
namespace RPG::Client { class GridFightPortalSelectAction; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_GET_ACTION_OFFSET UNITYSDK_OFFSET(0xA5628B0)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_GET_PORTALDATALIST_OFFSET UNITYSDK_OFFSET(0xA562890)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_GET_SELECTEDPORTALDATA_OFFSET UNITYSDK_OFFSET(0xA562870)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SET_ACTION_OFFSET UNITYSDK_OFFSET(0xA5628C0)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SET_PORTALDATALIST_OFFSET UNITYSDK_OFFSET(0xA5628A0)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SET_SELECTEDPORTALDATA_OFFSET UNITYSDK_OFFSET(0xA562880)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_1_OFFSET UNITYSDK_OFFSET(0xA5623E0)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_2_OFFSET UNITYSDK_OFFSET(0xA5626A0)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA562320)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA5628D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPortalServerData_TypeDefinitionIndex = 59924;

	class GridFightPortalServerData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightPortalData* _SelectedPortalData_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightPortalData*>* _PortalDataList_k__BackingField; // 0x18
		::RPG::Client::GridFightPortalSelectAction* _Action_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_F0A446EC7AE7E87D* action)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_OFFSET))(this, action);
		}

		::System::Void Sync_1(::Class_1_D7F3D169C3137F53_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D7F3D169C3137F53_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_1_OFFSET))(this, info);
		}

		::System::Void Sync_2(::Class_1_D17272E82AE804C2_388* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_388*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_2_OFFSET))(this, update);
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
