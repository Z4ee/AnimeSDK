#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_6.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_13C7B7FC007B24BE;
class Class_1_2007FC101DA28AC5;
class Class_1_3463368126F74BA9;
class Class_1_E7C4009BCC22497A_67;
namespace RPG::Client { class LightConeRecommendData; }
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client { class RelicSuitRecommendData; }
namespace RPG::Client { class SuitRecommendAvatarData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::Client::Recommend { class RelicRecommendBigData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETALLRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xA290180)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETALLRELICRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xA28F250)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETLIGHTCONEBIGDATA_OFFSET UNITYSDK_OFFSET(0xA28FB60)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETNODATARECOMMENDLIST_OFFSET UNITYSDK_OFFSET(0xA291720)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xA28FE50)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETRELICBIGDATA_OFFSET UNITYSDK_OFFSET(0xA291060)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETRELICRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xA28DB90)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETSUITRECOMMENDAVATARDATA_OFFSET UNITYSDK_OFFSET(0xA28F100)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETSUITRECOMMENDCONFIGDATALIST_OFFSET UNITYSDK_OFFSET(0xA291C30)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA28DB30)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xA290CD0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA2929A0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xA292A20)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA292B40)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_REQUESTLIGHTCONERECOMMENDBIGDATA_OFFSET UNITYSDK_OFFSET(0xA28F8F0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_REQUESTRELICRECOMMENDBIGDATA_OFFSET UNITYSDK_OFFSET(0xA290DF0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_REQUESTRELICRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xA291260)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_TRYINITALLRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xA2913E0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA292A90)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__AFTERRECOMMENDDATAUPDATE_OFFSET UNITYSDK_OFFSET(0xA292690)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA293000)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__HANDLEALLRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xA2906C0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__HANDLERECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xA290490)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__INITCONFIGRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xA2921B0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__ONCMDGETBIGDATAALLRECOMMENDSCRSP_OFFSET UNITYSDK_OFFSET(0xA292E90)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__ONCMDGETBIGDATARECOMMENDSCRSP_OFFSET UNITYSDK_OFFSET(0xA292DD0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__REJECTALLPROMISESWHENRECONNECT_OFFSET UNITYSDK_OFFSET(0xA2908E0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__TRYINITAVATARRELICRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xA291910)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__TRYINITRELICAVATARRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xA291AA0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__UPDATEALLRELICAVATARRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xA292440)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__UPDATEALLRELICRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xA2926F0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__UPDATELIGHTCONERECOMMENDBIGDATA_OFFSET UNITYSDK_OFFSET(0xA28FC40)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__UPDATERELICRECOMMENDBIGDATA_OFFSET UNITYSDK_OFFSET(0xA291DD0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA293480)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xA293510)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA2935D0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA293570)

namespace RPG::Client::Recommend
{
	inline static constexpr unsigned int RecommendModule_TypeDefinitionIndex = 61219;

	class RecommendModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Promises::Promise_1<::RPG::Client::LightConeRecommendData*>*>* _RequestLightConeRecommendBigDataPromiseDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Promises::Promise_1<::RPG::Client::Recommend::RelicRecommendBigData*>*>* _RequestRelicRecommendBigDataPromiseDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::LightConeRecommendData*>* _LightConeRecommendBigDataDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Promises::Promise_1<::RPG::Client::RelicRecommendData*>*>* _RequestRelicRecommendDataPromiseDict; // 0x28
		::RPG::Client::Promises::Promise* _FetchAllDataPromise; // 0x30
		::System::Collections::Generic::Dictionary_2<::Enum_3_01618AD0437C8486_6, ::RPG::Client::Promises::Promise_1<::Class_1_3463368126F74BA9*>*>* _AllRecommendDataPromises; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Recommend::RelicRecommendBigData*>* _RelicRecommendBigDataDict; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::Enum_3_01618AD0437C8486_6, ::System::UInt32>, ::RPG::Client::Promises::Promise_1<::Class_1_13C7B7FC007B24BE*>*>* _RecommendDataPromises; // 0x48
		::RPG::Client::Promises::Promise* _FetchAvatarRelicRecommendDataPromise; // 0x50
		::RPG::Client::Promises::Promise* _FetchRelicAvatarRecommendDataPromise; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicRecommendData*>* _AvatarRelicRecommendDataDict; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicSuitRecommendData*>* _RelicAvatarRecommendDataDict; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicRecommendData*>* _AvatarRelicRecommendConfigDataDict; // 0x70
		::System::UInt32 _TimeStamp; // 0x78
		::System::UInt32 _EXPIRED_TIME; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::LightConeRecommendData*>* RequestLightConeRecommendBigData(::System::UInt32 avatarRealID)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::LightConeRecommendData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_REQUESTLIGHTCONERECOMMENDBIGDATA_OFFSET))(this, avatarRealID);
		}

		::RPG::Client::LightConeRecommendData* GetLightConeBigData(::System::UInt32 avatarRealID)
		{
			return ((::RPG::Client::LightConeRecommendData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETLIGHTCONEBIGDATA_OFFSET))(this, avatarRealID);
		}

		::System::Void _UpdateLightConeRecommendBigData(::Class_1_13C7B7FC007B24BE* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_13C7B7FC007B24BE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__UPDATELIGHTCONERECOMMENDBIGDATA_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_13C7B7FC007B24BE*>* GetRecommendData(::Enum_3_01618AD0437C8486_6 type, ::System::UInt32 key)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_13C7B7FC007B24BE*>*(*)(::PVOID, ::Enum_3_01618AD0437C8486_6, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETRECOMMENDDATA_OFFSET))(this, type, key);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_3463368126F74BA9*>* GetAllRecommendData(::Enum_3_01618AD0437C8486_6 type)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_3463368126F74BA9*>*(*)(::PVOID, ::Enum_3_01618AD0437C8486_6))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETALLRECOMMENDDATA_OFFSET))(this, type);
		}

		::System::Void _HandleRecommendData(::Class_1_13C7B7FC007B24BE* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_13C7B7FC007B24BE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__HANDLERECOMMENDDATA_OFFSET))(this, rsp);
		}

		::System::Void _HandleAllRecommendData(::Class_1_3463368126F74BA9* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3463368126F74BA9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__HANDLEALLRECOMMENDDATA_OFFSET))(this, rsp);
		}

		::System::Void _RejectAllPromisesWhenReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__REJECTALLPROMISESWHENRECONNECT_OFFSET))(this);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GET_ISEXPIRED_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::Recommend::RelicRecommendBigData*>* RequestRelicRecommendBigData(::System::UInt32 avatarRealID)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::Recommend::RelicRecommendBigData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_REQUESTRELICRECOMMENDBIGDATA_OFFSET))(this, avatarRealID);
		}

		::RPG::Client::Recommend::RelicRecommendBigData* GetRelicBigData(::System::UInt32 avatarRealID)
		{
			return ((::RPG::Client::Recommend::RelicRecommendBigData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETRELICBIGDATA_OFFSET))(this, avatarRealID);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::RelicRecommendData*>* RequestRelicRecommendData(::System::UInt32 avatarRealID)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::RelicRecommendData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_REQUESTRELICRECOMMENDDATA_OFFSET))(this, avatarRealID);
		}

		::RPG::Client::RelicRecommendData* GetRelicRecommendData(::System::UInt32 avatarRealID)
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETRELICRECOMMENDDATA_OFFSET))(this, avatarRealID);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicRecommendData*>* GetAllRelicRecommendData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicRecommendData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETALLRELICRECOMMENDDATA_OFFSET))(this);
		}

		::RPG::Client::RelicSuitRecommendData* GetSuitRecommendAvatarData(::System::UInt32 setID)
		{
			return ((::RPG::Client::RelicSuitRecommendData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETSUITRECOMMENDAVATARDATA_OFFSET))(this, setID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicRecommendData*>* GetNoDataRecommendList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicRecommendData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETNODATARECOMMENDLIST_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* TryInitAllRecommendData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_TRYINITALLRECOMMENDDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SuitRecommendAvatarData*>* GetSuitRecommendConfigDataList(::System::UInt32 setID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SuitRecommendAvatarData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETSUITRECOMMENDCONFIGDATALIST_OFFSET))(this, setID);
		}

		::System::Void _UpdateRelicRecommendBigData(::Class_1_13C7B7FC007B24BE* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_13C7B7FC007B24BE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__UPDATERELICRECOMMENDBIGDATA_OFFSET))(this, rsp);
		}

		::System::Void _InitConfigRecommendData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__INITCONFIGRECOMMENDDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryInitAvatarRelicRecommendData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__TRYINITAVATARRELICRECOMMENDDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryInitRelicAvatarRecommendData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__TRYINITRELICAVATARRECOMMENDDATA_OFFSET))(this);
		}

		::System::Void _UpdateAllRelicAvatarRecommendData(::Class_1_E7C4009BCC22497A_67* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_67*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__UPDATEALLRELICAVATARRECOMMENDDATA_OFFSET))(this, rsp);
		}

		::System::Void _UpdateAllRelicRecommendData(::Class_1_2007FC101DA28AC5* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2007FC101DA28AC5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__UPDATEALLRELICRECOMMENDDATA_OFFSET))(this, rsp);
		}

		::System::Void _AfterRecommendDataUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__AFTERRECOMMENDDATAUPDATE_OFFSET))(this);
		}

		static ::RPG::Client::Recommend::RecommendModule* get_Instance()
		{
			return ((::RPG::Client::Recommend::RecommendModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GET_INSTANCE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _OnCmdGetBigDataRecommendScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__ONCMDGETBIGDATARECOMMENDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetBigDataAllRecommendScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__ONCMDGETBIGDATAALLRECOMMENDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}
	};
}
