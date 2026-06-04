#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_0_16E4307DCC419505_760;
class Class_1_DB51D85EFE2D324C;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FindChestData; }
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class FindChestFuncDataRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FINDCHESTMODULE_CANFINDCHEST_OFFSET UNITYSDK_OFFSET(0xBA216B0)
#define RPG_CLIENT_FINDCHESTMODULE_CHECKGAMEMODEVALID_OFFSET UNITYSDK_OFFSET(0xBA22060)
#define RPG_CLIENT_FINDCHESTMODULE_GETSORTEDFINDCHESTDATALIST_OFFSET UNITYSDK_OFFSET(0xBA225B0)
#define RPG_CLIENT_FINDCHESTMODULE_GET_FINDCHESTDATAS_OFFSET UNITYSDK_OFFSET(0xBA230D0)
#define RPG_CLIENT_FINDCHESTMODULE_GET_SHOWAVATARMAPSFXMARK_OFFSET UNITYSDK_OFFSET(0xBA23090)
#define RPG_CLIENT_FINDCHESTMODULE_GET_SHOWITEMMAPSFXMARK_OFFSET UNITYSDK_OFFSET(0xBA230B0)
#define RPG_CLIENT_FINDCHESTMODULE_INITMODULEREQUEST_OFFSET UNITYSDK_OFFSET(0xBA20C20)
#define RPG_CLIENT_FINDCHESTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xBA208A0)
#define RPG_CLIENT_FINDCHESTMODULE_ONGETMARKCHESTSCRSP_OFFSET UNITYSDK_OFFSET(0xBA227F0)
#define RPG_CLIENT_FINDCHESTMODULE_ONMARKCHESTCHANGEDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xBA22E00)
#define RPG_CLIENT_FINDCHESTMODULE_ONUPDATEMARKCHESTSCRSP_OFFSET UNITYSDK_OFFSET(0xBA22B90)
#define RPG_CLIENT_FINDCHESTMODULE_SET_SHOWAVATARMAPSFXMARK_OFFSET UNITYSDK_OFFSET(0xBA230A0)
#define RPG_CLIENT_FINDCHESTMODULE_SET_SHOWITEMMAPSFXMARK_OFFSET UNITYSDK_OFFSET(0xBA230C0)
#define RPG_CLIENT_FINDCHESTMODULE_TRIGGERFINDCHEST_OFFSET UNITYSDK_OFFSET(0xBA20CE0)
#define RPG_CLIENT_FINDCHESTMODULE_TRYGETFINDCHESTCONFIG_OFFSET UNITYSDK_OFFSET(0xBA223E0)
#define RPG_CLIENT_FINDCHESTMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xBA20920)
#define RPG_CLIENT_FINDCHESTMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xBA209F0)
#define RPG_CLIENT_FINDCHESTMODULE__CHECKCHESTISOPENED_OFFSET UNITYSDK_OFFSET(0xBA21F80)
#define RPG_CLIENT_FINDCHESTMODULE__CHECKVALIDCHEST_OFFSET UNITYSDK_OFFSET(0xBA22F40)
#define RPG_CLIENT_FINDCHESTMODULE__CHECKWORLDVALID_OFFSET UNITYSDK_OFFSET(0xBA22210)
#define RPG_CLIENT_FINDCHESTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBA230E0)
#define RPG_CLIENT_FINDCHESTMODULE__GETVALIDCHESTS_OFFSET UNITYSDK_OFFSET(0xBA21ED0)
#define RPG_CLIENT_FINDCHESTMODULE__ONUIANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xBA22E70)
#define RPG_CLIENT_FINDCHESTMODULE__ONUPDATECHESTGROUPLIST_OFFSET UNITYSDK_OFFSET(0xBA22870)
#define RPG_CLIENT_FINDCHESTMODULE__TRYSHOWMAPHINT_OFFSET UNITYSDK_OFFSET(0xBA22D50)
#define RPG_CLIENT_FINDCHESTMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xBA231A0)
#define RPG_CLIENT_FINDCHESTMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xBA23220)
#define RPG_CLIENT_FINDCHESTMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xBA23280)

namespace RPG::Client
{
	inline static constexpr unsigned int FindChestModule_TypeDefinitionIndex = 59996;

	class FindChestModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_760*>* _ChestDataList; // 0x10
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

		::System::Boolean TriggerFindChest(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_TRIGGERFINDCHEST_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanFindChest(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_CANFINDCHEST_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckGameModeValid(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_CHECKGAMEMODEVALID_OFFSET))(this, a1);
		}

		::System::Boolean _CheckWorldValid(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE__CHECKWORLDVALID_OFFSET))(this, a1);
		}

		::RPG::GameCore::FindChestFuncDataRow* TryGetFindChestConfig(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FindChestFuncDataRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_TRYGETFINDCHESTCONFIG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FindChestData*>* GetSortedFindChestDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FindChestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_GETSORTEDFINDCHESTDATALIST_OFFSET))(this);
		}

		::System::Void OnGetMarkChestScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_ONGETMARKCHESTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void OnUpdateMarkChestScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_ONUPDATEMARKCHESTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _TryShowMapHint(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE__TRYSHOWMAPHINT_OFFSET))(this, a1);
		}

		::System::Void OnMarkChestChangedScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_ONMARKCHESTCHANGEDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnUIAnimationEvent(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE__ONUIANIMATIONEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnUpdateChestGroupList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB51D85EFE2D324C*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB51D85EFE2D324C*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE__ONUPDATECHESTGROUPLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_760*>* _GetValidChests(::RPG::Client::MapDef* a1, ::RPG::GameCore::FindChestFuncDataRow* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_760*>*(*)(::PVOID, ::RPG::Client::MapDef*, ::RPG::GameCore::FindChestFuncDataRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE__GETVALIDCHESTS_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckValidChest(::System::UInt32 a1, ::RPG::GameCore::FindChestFuncDataRow* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FindChestFuncDataRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE__CHECKVALIDCHEST_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckChestIsOpened(::RPG::Client::MapDef* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE__CHECKCHESTISOPENED_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ShowAvatarMapSFXMark()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_GET_SHOWAVATARMAPSFXMARK_OFFSET))(this);
		}

		::System::Void set_ShowAvatarMapSFXMark(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_SET_SHOWAVATARMAPSFXMARK_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowItemMapSFXMark()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_GET_SHOWITEMMAPSFXMARK_OFFSET))(this);
		}

		::System::Void set_ShowItemMapSFXMark(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE_SET_SHOWITEMMAPSFXMARK_OFFSET))(this, a1);
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
