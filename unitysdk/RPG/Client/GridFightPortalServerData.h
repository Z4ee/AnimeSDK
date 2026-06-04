#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_401;
class Class_1_F0A446EC7AE7E87D;
class Class_1_FB0633E85BD6CF8E_4;
namespace RPG::Client { class GridFightPortalData; }
namespace RPG::Client { class GridFightPortalSelectAction; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_GET_ACTION_OFFSET UNITYSDK_OFFSET(0xBBD0290)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_GET_PORTALDATALIST_OFFSET UNITYSDK_OFFSET(0xBBD0270)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_GET_SELECTEDPORTALDATA_OFFSET UNITYSDK_OFFSET(0xBBD0250)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SET_ACTION_OFFSET UNITYSDK_OFFSET(0xBBD02A0)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SET_PORTALDATALIST_OFFSET UNITYSDK_OFFSET(0xBBD0280)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SET_SELECTEDPORTALDATA_OFFSET UNITYSDK_OFFSET(0xBBD0260)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_1_OFFSET UNITYSDK_OFFSET(0xBBCFC40)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_2_OFFSET UNITYSDK_OFFSET(0xBBD0010)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xBBCFB80)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBBD02B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPortalServerData_TypeDefinitionIndex = 60859;

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

		::System::Void Sync(::Class_1_F0A446EC7AE7E87D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void Sync_1(::Class_1_FB0633E85BD6CF8E_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_1_OFFSET))(this, a1);
		}

		::System::Void Sync_2(::Class_1_D17272E82AE804C2_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_401*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_2_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightPortalData* get_SelectedPortalData()
		{
			return ((::RPG::Client::GridFightPortalData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_GET_SELECTEDPORTALDATA_OFFSET))(this);
		}

		::System::Void set_SelectedPortalData(::RPG::Client::GridFightPortalData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SET_SELECTEDPORTALDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightPortalData*>* get_PortalDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightPortalData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_GET_PORTALDATALIST_OFFSET))(this);
		}

		::System::Void set_PortalDataList(::System::Collections::Generic::List_1<::RPG::Client::GridFightPortalData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightPortalData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SET_PORTALDATALIST_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightPortalSelectAction* get_Action()
		{
			return ((::RPG::Client::GridFightPortalSelectAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_Action(::RPG::Client::GridFightPortalSelectAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPortalSelectAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SET_ACTION_OFFSET))(this, a1);
		}
	};
}
