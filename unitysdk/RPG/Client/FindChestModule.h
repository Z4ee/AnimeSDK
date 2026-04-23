#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_0_16E4307DCC419505_709;
class Class_1_DB51D85EFE2D324C;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FindChestData; }
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class FindChestFuncDataRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FINDCHESTMODULE_CANFINDCHEST_OFFSET UNITYSDK_OFFSET(0xA385330)
#define RPG_CLIENT_FINDCHESTMODULE_CHECKGAMEMODEVALID_OFFSET UNITYSDK_OFFSET(0xA385CF0)
#define RPG_CLIENT_FINDCHESTMODULE_GETSORTEDFINDCHESTDATALIST_OFFSET UNITYSDK_OFFSET(0xA3861E0)
#define RPG_CLIENT_FINDCHESTMODULE_GET_FINDCHESTDATAS_OFFSET UNITYSDK_OFFSET(0xA386BC0)
#define RPG_CLIENT_FINDCHESTMODULE_GET_SHOWAVATARMAPSFXMARK_OFFSET UNITYSDK_OFFSET(0xA386B80)
#define RPG_CLIENT_FINDCHESTMODULE_GET_SHOWITEMMAPSFXMARK_OFFSET UNITYSDK_OFFSET(0xA386BA0)
#define RPG_CLIENT_FINDCHESTMODULE_INITMODULEREQUEST_OFFSET UNITYSDK_OFFSET(0xA3848B0)
#define RPG_CLIENT_FINDCHESTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA3846A0)
#define RPG_CLIENT_FINDCHESTMODULE_ONGETMARKCHESTSCRSP_OFFSET UNITYSDK_OFFSET(0xA386370)
#define RPG_CLIENT_FINDCHESTMODULE_ONMARKCHESTCHANGEDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA3868E0)
#define RPG_CLIENT_FINDCHESTMODULE_ONUPDATEMARKCHESTSCRSP_OFFSET UNITYSDK_OFFSET(0xA3866C0)
#define RPG_CLIENT_FINDCHESTMODULE_SET_SHOWAVATARMAPSFXMARK_OFFSET UNITYSDK_OFFSET(0xA386B90)
#define RPG_CLIENT_FINDCHESTMODULE_SET_SHOWITEMMAPSFXMARK_OFFSET UNITYSDK_OFFSET(0xA386BB0)
#define RPG_CLIENT_FINDCHESTMODULE_TRIGGERFINDCHEST_OFFSET UNITYSDK_OFFSET(0xA384970)
#define RPG_CLIENT_FINDCHESTMODULE_TRYGETFINDCHESTCONFIG_OFFSET UNITYSDK_OFFSET(0xA386070)
#define RPG_CLIENT_FINDCHESTMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA384720)
#define RPG_CLIENT_FINDCHESTMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA3847D0)
#define RPG_CLIENT_FINDCHESTMODULE__CHECKCHESTISOPENED_OFFSET UNITYSDK_OFFSET(0xA385C70)
#define RPG_CLIENT_FINDCHESTMODULE__CHECKVALIDCHEST_OFFSET UNITYSDK_OFFSET(0xA386A20)
#define RPG_CLIENT_FINDCHESTMODULE__CHECKWORLDVALID_OFFSET UNITYSDK_OFFSET(0xA385EA0)
#define RPG_CLIENT_FINDCHESTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA386BD0)
#define RPG_CLIENT_FINDCHESTMODULE__GETVALIDCHESTS_OFFSET UNITYSDK_OFFSET(0xA385BC0)
#define RPG_CLIENT_FINDCHESTMODULE__ONUIANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xA386950)
#define RPG_CLIENT_FINDCHESTMODULE__ONUPDATECHESTGROUPLIST_OFFSET UNITYSDK_OFFSET(0xA3863F0)
#define RPG_CLIENT_FINDCHESTMODULE__TRYSHOWMAPHINT_OFFSET UNITYSDK_OFFSET(0xA386830)
#define RPG_CLIENT_FINDCHESTMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA386C90)
#define RPG_CLIENT_FINDCHESTMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA386D20)
#define RPG_CLIENT_FINDCHESTMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA386D80)

namespace RPG::Client
{
	inline static constexpr unsigned int FindChestModule_TypeDefinitionIndex = 59066;

	class FindChestModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_709*>* _ChestDataList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FindChestData*>* _FindChestDatas; // 0x18
		::System::Boolean _ShowAvatarMapSFXMark_k__BackingField; // 0x20
		::System::Boolean _ShowItemMapSFXMark_k__BackingField; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void InitModuleRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_INITMODULEREQUEST_OFFSET))(this);
		}

		::System::Boolean TriggerFindChest(::System::UInt32 funcID, ::System::UInt32 triggerParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_TRIGGERFINDCHEST_OFFSET))(this, funcID, triggerParam);
		}

		::System::Boolean CanFindChest(::System::UInt32 funcID, ::System::UInt32 triggerParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_CANFINDCHEST_OFFSET))(this, funcID, triggerParam);
		}

		::System::Boolean CheckGameModeValid(::System::UInt32 funcID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_CHECKGAMEMODEVALID_OFFSET))(this, funcID);
		}

		::System::Boolean _CheckWorldValid(::System::UInt32 funcID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE__CHECKWORLDVALID_OFFSET))(this, funcID);
		}

		::RPG::GameCore::FindChestFuncDataRow* TryGetFindChestConfig(::System::UInt32 itemID)
		{
			return ((::RPG::GameCore::FindChestFuncDataRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_TRYGETFINDCHESTCONFIG_OFFSET))(this, itemID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FindChestData*>* GetSortedFindChestDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FindChestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_GETSORTEDFINDCHESTDATALIST_OFFSET))(this);
		}

		::System::Void OnGetMarkChestScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_ONGETMARKCHESTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void OnUpdateMarkChestScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_ONUPDATEMARKCHESTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _TryShowMapHint(::System::UInt32 funcID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE__TRYSHOWMAPHINT_OFFSET))(this, funcID);
		}

		::System::Void OnMarkChestChangedScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_ONMARKCHESTCHANGEDSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnUIAnimationEvent(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE__ONUIANIMATIONEVENT_OFFSET))(this, obj);
		}

		::System::Void _OnUpdateChestGroupList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB51D85EFE2D324C*>* chestGroupList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB51D85EFE2D324C*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE__ONUPDATECHESTGROUPLIST_OFFSET))(this, chestGroupList);
		}

		::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_709*>* _GetValidChests(::RPG::Client::MapDef* mapDef, ::RPG::GameCore::FindChestFuncDataRow* findChestRow)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_709*>*(*)(::PVOID, ::RPG::Client::MapDef*, ::RPG::GameCore::FindChestFuncDataRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE__GETVALIDCHESTS_OFFSET))(this, mapDef, findChestRow);
		}

		::System::Boolean _CheckValidChest(::System::UInt32 chestID, ::RPG::GameCore::FindChestFuncDataRow* findChestRow)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FindChestFuncDataRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE__CHECKVALIDCHEST_OFFSET))(this, chestID, findChestRow);
		}

		::System::Boolean _CheckChestIsOpened(::RPG::Client::MapDef* mapDef, ::System::UInt32 chestID)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE__CHECKCHESTISOPENED_OFFSET))(this, mapDef, chestID);
		}

		::System::Boolean get_ShowAvatarMapSFXMark()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_GET_SHOWAVATARMAPSFXMARK_OFFSET))(this);
		}

		::System::Void set_ShowAvatarMapSFXMark(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_SET_SHOWAVATARMAPSFXMARK_OFFSET))(this, value);
		}

		::System::Boolean get_ShowItemMapSFXMark()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_GET_SHOWITEMMAPSFXMARK_OFFSET))(this);
		}

		::System::Void set_ShowItemMapSFXMark(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_SET_SHOWITEMMAPSFXMARK_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FindChestData*>* get_FindChestDatas()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FindChestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_GET_FINDCHESTDATAS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
