#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_BB4B99DE4C2501EC_3;
class Class_1_F3CA30716D4FAF92_5;
namespace RPG::Client { class AvatarPathData; }
namespace RPG::Client { class MultiPathAvatarData; }
namespace RPG::Client { class MultiPathAvatarUnlockItemTransfer; }
namespace RPG::GameCore { class AvatarPathChangeConfig; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MULTIPATHAVATARMODULE_CLEARCACHEDTRANSFERITEMBYUNLOCKAVATAR_OFFSET UNITYSDK_OFFSET(0xAAED010)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAEAB60)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_GETALLAVATARPATHDATA_OFFSET UNITYSDK_OFFSET(0xAAEC1C0)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_GETALLMULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0xAAEC3E0)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_GETAVATARPATHDATALIST_OFFSET UNITYSDK_OFFSET(0xAAEC5A0)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_GETAVATARPATHDATA_1_OFFSET UNITYSDK_OFFSET(0xAAEC7A0)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_GETAVATARPATHDATA_OFFSET UNITYSDK_OFFSET(0xAAEC640)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_GETCHANGECONFIG_1_OFFSET UNITYSDK_OFFSET(0xAAECB70)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_GETCHANGECONFIG_OFFSET UNITYSDK_OFFSET(0xAAEC900)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_GETMULTIPATHAVATARDATA_OFFSET UNITYSDK_OFFSET(0xAAEBDD0)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_GETMULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0xAAEC040)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_GETREQUESTUNLOCKEDMULTIPATHAVATARTYPES_OFFSET UNITYSDK_OFFSET(0xAAECE60)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_GETUNLOCKTOAST_1_OFFSET UNITYSDK_OFFSET(0xAAECDF0)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_GETUNLOCKTOAST_OFFSET UNITYSDK_OFFSET(0xAAECBC0)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_GET_CACHEDTRANSFERITEM_OFFSET UNITYSDK_OFFSET(0xAAED060)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_GET_HASCACHEDTRANSFERITEMBYUNLOCKAVATAR_OFFSET UNITYSDK_OFFSET(0xAAED000)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_INITSERVERDATA_OFFSET UNITYSDK_OFFSET(0xAAEAC50)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xAAEA8A0)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_ISHARMONYBASICTYPEREQUESTUNLOCKED_OFFSET UNITYSDK_OFFSET(0xAAECF00)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_ISMULTIPATHAVATARTYPEREQUESTUNLOCKED_OFFSET UNITYSDK_OFFSET(0xAAECF90)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_SENDSETAVATARPATHCSREQ_OFFSET UNITYSDK_OFFSET(0xAAEA020)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_SENDSETMULTIPLEAVATARPATHSCSREQ_OFFSET UNITYSDK_OFFSET(0xAAEA0F0)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_SENDUNLOCKAVATARPATHCSREQ_OFFSET UNITYSDK_OFFSET(0xAAEA410)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_SETCURRENTMULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0xAAEA200)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_SETREQUESTUNLOCKEDMULTIPATHAVATARTYPES_OFFSET UNITYSDK_OFFSET(0xAAEA520)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_SYNCHEROAVATARPATHDATA_OFFSET UNITYSDK_OFFSET(0xAAEBF00)
#define RPG_CLIENT_MULTIPATHAVATARMODULE_SYNCSERVERDATA_OFFSET UNITYSDK_OFFSET(0xAAEB3D0)
#define RPG_CLIENT_MULTIPATHAVATARMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xAAE9ED0)
#define RPG_CLIENT_MULTIPATHAVATARMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xAAED070)
#define RPG_CLIENT_MULTIPATHAVATARMODULE__INITMULTIPATHAVATARDATA_OFFSET UNITYSDK_OFFSET(0xAAEA930)
#define RPG_CLIENT_MULTIPATHAVATARMODULE__ONCMDADDMULTIPATHAVATARSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xAAEA640)
#define RPG_CLIENT_MULTIPATHAVATARMODULE__ONCMDAVATARPATHCHANGEDNOTIFY_OFFSET UNITYSDK_OFFSET(0xAAEA390)
#define RPG_CLIENT_MULTIPATHAVATARMODULE__ONCMDSETAVATARPATHSCRSP_OFFSET UNITYSDK_OFFSET(0xAAEA180)
#define RPG_CLIENT_MULTIPATHAVATARMODULE__ONCMDSETMULTIPLEAVATARPATHSSCRSP_OFFSET UNITYSDK_OFFSET(0xAAEA310)
#define RPG_CLIENT_MULTIPATHAVATARMODULE__ONCMDUNLOCKAVATARPATHSCRSP_OFFSET UNITYSDK_OFFSET(0xAAEA4A0)
#define RPG_CLIENT_MULTIPATHAVATARMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAED1F0)
#define RPG_CLIENT_MULTIPATHAVATARMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xAAED160)
#define RPG_CLIENT_MULTIPATHAVATARMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xAAED100)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPathAvatarModule_TypeDefinitionIndex = 61064;

	class MultiPathAvatarModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>* _RequestUnlockedMultiPathAvatarTypes; // 0x10
		::RPG::Client::MultiPathAvatarUnlockItemTransfer* _CachedTransferItem; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MultiPathAvatarData*>* _MultiPathAvatarDataDict; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void SendSetAvatarPathCsReq(::Enum_3_DFCB42601400F441 multiPathAvatarType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_SENDSETAVATARPATHCSREQ_OFFSET))(this, multiPathAvatarType);
		}

		::System::Void SendSetMultipleAvatarPathsCsReq(::System::Collections::Generic::List_1<::System::UInt32>* avatarIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_SENDSETMULTIPLEAVATARPATHSCSREQ_OFFSET))(this, avatarIDs);
		}

		::System::Void _OnCmdSetAvatarPathScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE__ONCMDSETAVATARPATHSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdSetMultipleAvatarPathsScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE__ONCMDSETMULTIPLEAVATARPATHSSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdAvatarPathChangedNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE__ONCMDAVATARPATHCHANGEDNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void SendUnlockAvatarPathCsReq(::Enum_3_DFCB42601400F441 multiPathAvatarType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_SENDUNLOCKAVATARPATHCSREQ_OFFSET))(this, multiPathAvatarType);
		}

		::System::Void _OnCmdUnlockAvatarPathScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE__ONCMDUNLOCKAVATARPATHSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdAddMultiPathAvatarScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE__ONCMDADDMULTIPATHAVATARSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void InitServerData(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::Class_1_BB4B99DE4C2501EC_3*>* avatarBaseDataDict, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::Class_1_F3CA30716D4FAF92_5*>* avatarUniqueDataDict, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* reqUnlockedAvatarIdList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::Class_1_BB4B99DE4C2501EC_3*>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::Class_1_F3CA30716D4FAF92_5*>*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_INITSERVERDATA_OFFSET))(this, avatarBaseDataDict, avatarUniqueDataDict, reqUnlockedAvatarIdList);
		}

		::System::Void SyncServerData(::System::Collections::Generic::IEnumerable_1<::Class_1_F3CA30716D4FAF92_5*>* changeUniqueDataList, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::Class_1_BB4B99DE4C2501EC_3*>* avatarBaseDataDict, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::Class_1_F3CA30716D4FAF92_5*>* avatarUniqueDataDict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_F3CA30716D4FAF92_5*>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::Class_1_BB4B99DE4C2501EC_3*>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::Class_1_F3CA30716D4FAF92_5*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_SYNCSERVERDATA_OFFSET))(this, changeUniqueDataList, avatarBaseDataDict, avatarUniqueDataDict);
		}

		::System::Void SetCurrentMultiPathAvatarType(::Enum_3_DFCB42601400F441 multiPathAvatarType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_SETCURRENTMULTIPATHAVATARTYPE_OFFSET))(this, multiPathAvatarType);
		}

		::System::Void SyncHeroAvatarPathData(::Enum_3_DFCB42601400F441 curHeroPath)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_SYNCHEROAVATARPATHDATA_OFFSET))(this, curHeroPath);
		}

		::RPG::Client::MultiPathAvatarData* GetMultiPathAvatarData(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::MultiPathAvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_GETMULTIPATHAVATARDATA_OFFSET))(this, avatarID);
		}

		::Enum_3_DFCB42601400F441 GetMultiPathAvatarType(::System::UInt32 avatarID)
		{
			return ((::Enum_3_DFCB42601400F441(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_GETMULTIPATHAVATARTYPE_OFFSET))(this, avatarID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarPathData*>* GetAllAvatarPathData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarPathData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_GETALLAVATARPATHDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>* GetAllMultiPathAvatarType()
		{
			return ((::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_GETALLMULTIPATHAVATARTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarPathData*>* GetAvatarPathDataList(::System::UInt32 avatarID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarPathData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_GETAVATARPATHDATALIST_OFFSET))(this, avatarID);
		}

		::RPG::Client::AvatarPathData* GetAvatarPathData(::Enum_3_DFCB42601400F441 multiPathAvatarType)
		{
			return ((::RPG::Client::AvatarPathData*(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_GETAVATARPATHDATA_OFFSET))(this, multiPathAvatarType);
		}

		::RPG::Client::AvatarPathData* GetAvatarPathData_1(::System::UInt32 multiPathAvatarType)
		{
			return ((::RPG::Client::AvatarPathData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_GETAVATARPATHDATA_1_OFFSET))(this, multiPathAvatarType);
		}

		::RPG::GameCore::AvatarPathChangeConfig* GetChangeConfig(::System::UInt32 avatarID)
		{
			return ((::RPG::GameCore::AvatarPathChangeConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_GETCHANGECONFIG_OFFSET))(this, avatarID);
		}

		::RPG::GameCore::AvatarPathChangeConfig* GetChangeConfig_1(::Enum_3_DFCB42601400F441 multiPathAvatarType)
		{
			return ((::RPG::GameCore::AvatarPathChangeConfig*(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_GETCHANGECONFIG_1_OFFSET))(this, multiPathAvatarType);
		}

		::RPG::Client::TextID GetUnlockToast(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_GETUNLOCKTOAST_OFFSET))(this, avatarID);
		}

		::RPG::Client::TextID GetUnlockToast_1(::Enum_3_DFCB42601400F441 multiPathAvatarType)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_GETUNLOCKTOAST_1_OFFSET))(this, multiPathAvatarType);
		}

		::System::Void SetRequestUnlockedMultiPathAvatarTypes(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* basicTypeIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_SETREQUESTUNLOCKEDMULTIPATHAVATARTYPES_OFFSET))(this, basicTypeIDs);
		}

		::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>* GetRequestUnlockedMultiPathAvatarTypes()
		{
			return ((::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_GETREQUESTUNLOCKEDMULTIPATHAVATARTYPES_OFFSET))(this);
		}

		::System::Boolean IsHarmonyBasicTypeRequestUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_ISHARMONYBASICTYPEREQUESTUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsMultiPathAvatarTypeRequestUnlocked(::Enum_3_DFCB42601400F441 multiPathAvatarType)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_ISMULTIPATHAVATARTYPEREQUESTUNLOCKED_OFFSET))(this, multiPathAvatarType);
		}

		::System::Boolean get_HasCachedTransferItemByUnlockAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_GET_HASCACHEDTRANSFERITEMBYUNLOCKAVATAR_OFFSET))(this);
		}

		::System::Void ClearCachedTransferItemByUnlockAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_CLEARCACHEDTRANSFERITEMBYUNLOCKAVATAR_OFFSET))(this);
		}

		::RPG::Client::MultiPathAvatarUnlockItemTransfer* get_CachedTransferItem()
		{
			return ((::RPG::Client::MultiPathAvatarUnlockItemTransfer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE_GET_CACHEDTRANSFERITEM_OFFSET))(this);
		}

		::System::Void _InitMultiPathAvatarData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE__INITMULTIPATHAVATARDATA_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHAVATARMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
