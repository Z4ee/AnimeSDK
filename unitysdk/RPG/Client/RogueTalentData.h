#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24F009C622EAE626_6;
class Class_1_455CA3FD2409BEB7_22;
class Class_1_455CA3FD2409BEB7_23;
namespace RPG::Client { class RogueTalentDataItem; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETALENTDATA_GETTALENTDATAITEMLIST_OFFSET UNITYSDK_OFFSET(0xB0999A0)
#define RPG_CLIENT_ROGUETALENTDATA_UPDATETALENTBYACTIVATEDRSP_OFFSET UNITYSDK_OFFSET(0xB099930)
#define RPG_CLIENT_ROGUETALENTDATA_UPDATETALENTSRVDATA_OFFSET UNITYSDK_OFFSET(0xB0993F0)
#define RPG_CLIENT_ROGUETALENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB099D60)
#define RPG_CLIENT_ROGUETALENTDATA__GETTALENTDATAITEM_OFFSET UNITYSDK_OFFSET(0xB099A80)
#define RPG_CLIENT_ROGUETALENTDATA__INITROGUETALENTDATAITEMS_OFFSET UNITYSDK_OFFSET(0xB099470)
#define RPG_CLIENT_ROGUETALENTDATA__UPDATEDATAITEMS_OFFSET UNITYSDK_OFFSET(0xB0995E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTalentData_TypeDefinitionIndex = 62173;

	class RogueTalentData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueTalentDataItem*>* _TalentDataItems; // 0x10
		::System::Boolean _Initialized; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATA__CTOR_OFFSET))(this);
		}

		::System::Void UpdateTalentSrvData(::Class_1_455CA3FD2409BEB7_22* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455CA3FD2409BEB7_22*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATA_UPDATETALENTSRVDATA_OFFSET))(this, rsp);
		}

		::System::Void UpdateTalentByActivatedRsp(::Class_1_455CA3FD2409BEB7_23* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455CA3FD2409BEB7_23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATA_UPDATETALENTBYACTIVATEDRSP_OFFSET))(this, rsp);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTalentDataItem*>* GetTalentDataItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTalentDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATA_GETTALENTDATAITEMLIST_OFFSET))(this);
		}

		::System::Void _InitRogueTalentDataItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATA__INITROGUETALENTDATAITEMS_OFFSET))(this);
		}

		::System::Void _UpdateDataItems(::System::Collections::Generic::IEnumerable_1<::Class_1_24F009C622EAE626_6*>* srvTalentList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_24F009C622EAE626_6*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATA__UPDATEDATAITEMS_OFFSET))(this, srvTalentList);
		}

		::RPG::Client::RogueTalentDataItem* _GetTalentDataItem(::System::UInt32 talentID)
		{
			return ((::RPG::Client::RogueTalentDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATA__GETTALENTDATAITEM_OFFSET))(this, talentID);
		}
	};
}
