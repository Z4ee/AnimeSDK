#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_8.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_2EFC5657EFE4E7C9;
class Class_1_9D5468144EC4C1CF;
class Class_1_A5AD8EDEED0C93F3;
class Class_1_D40936EF3BF54118_80;
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

#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETALLRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xC6C5880)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETALLRELICRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xC6C4A90)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETLIGHTCONEBIGDATA_OFFSET UNITYSDK_OFFSET(0xC6C52D0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETNODATARECOMMENDLIST_OFFSET UNITYSDK_OFFSET(0xC6C6D10)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xC6C5560)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETRELICBIGDATA_OFFSET UNITYSDK_OFFSET(0xC6C6680)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETRELICRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xC6C34A0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETSUITRECOMMENDAVATARDATA_OFFSET UNITYSDK_OFFSET(0xC6C4920)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETSUITRECOMMENDCONFIGDATALIST_OFFSET UNITYSDK_OFFSET(0xC6C7240)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xC6C3440)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xC6C6320)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC6C8010)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xC6C8090)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC6C8290)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_REQUESTLIGHTCONERECOMMENDBIGDATA_OFFSET UNITYSDK_OFFSET(0xC6C5090)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_REQUESTRELICRECOMMENDBIGDATA_OFFSET UNITYSDK_OFFSET(0xC6C6440)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_REQUESTRELICRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xC6C6850)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_TRYINITALLRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xC6C69F0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC6C8100)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__AFTERRECOMMENDDATAUPDATE_OFFSET UNITYSDK_OFFSET(0xC6C7D30)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC6C86D0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__HANDLEALLRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xC6C5D90)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__HANDLERECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xC6C5B80)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__INITCONFIGRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xC6C7800)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__ONCMDGETBIGDATAALLRECOMMENDSCRSP_OFFSET UNITYSDK_OFFSET(0xC6C8560)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__ONCMDGETBIGDATARECOMMENDSCRSP_OFFSET UNITYSDK_OFFSET(0xC6C84A0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__REJECTALLPROMISESWHENRECONNECT_OFFSET UNITYSDK_OFFSET(0xC6C5FA0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__TRYINITAVATARRELICRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xC6C6F20)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__TRYINITRELICAVATARRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xC6C70B0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__UPDATEALLRELICAVATARRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xC6C7AB0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__UPDATEALLRELICRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xC6C7D90)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__UPDATELIGHTCONERECOMMENDBIGDATA_OFFSET UNITYSDK_OFFSET(0xC6C5380)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__UPDATERELICRECOMMENDBIGDATA_OFFSET UNITYSDK_OFFSET(0xC6C7460)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC6C8B50)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xC6C8BD0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC6C8C90)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC6C8C30)

namespace RPG::Client::Recommend
{
	inline static constexpr unsigned int RecommendModule_TypeDefinitionIndex = 69539;

	class RecommendModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Promises::Promise_1<::RPG::Client::RelicRecommendData*>*>* _RequestRelicRecommendDataPromiseDict; // 0x10
		::RPG::Client::Promises::Promise* _FetchRelicAvatarRecommendDataPromise; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicRecommendData*>* _AvatarRelicRecommendConfigDataDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Recommend::RelicRecommendBigData*>* _RelicRecommendBigDataDict; // 0x28
		::RPG::Client::Promises::Promise* _FetchAvatarRelicRecommendDataPromise; // 0x30
		::RPG::Client::Promises::Promise* _FetchAllDataPromise; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Promises::Promise_1<::RPG::Client::Recommend::RelicRecommendBigData*>*>* _RequestRelicRecommendBigDataPromiseDict; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Promises::Promise_1<::RPG::Client::LightConeRecommendData*>*>* _RequestLightConeRecommendBigDataPromiseDict; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicRecommendData*>* _AvatarRelicRecommendDataDict; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::Enum_3_0F1B992870941C13_8, ::System::UInt32>, ::RPG::Client::Promises::Promise_1<::Class_1_2EFC5657EFE4E7C9*>*>* _RecommendDataPromises; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::LightConeRecommendData*>* _LightConeRecommendBigDataDict; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicSuitRecommendData*>* _RelicAvatarRecommendDataDict; // 0x68
		::System::Collections::Generic::Dictionary_2<::Enum_3_0F1B992870941C13_8, ::RPG::Client::Promises::Promise_1<::Class_1_A5AD8EDEED0C93F3*>*>* _AllRecommendDataPromises; // 0x70
		::System::UInt32 _TimeStamp; // 0x78
		::System::UInt32 _EXPIRED_TIME; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::LightConeRecommendData*>* RequestLightConeRecommendBigData(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::LightConeRecommendData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_REQUESTLIGHTCONERECOMMENDBIGDATA_OFFSET))(this, a1);
		}

		::RPG::Client::LightConeRecommendData* GetLightConeBigData(::System::UInt32 a1)
		{
			return ((::RPG::Client::LightConeRecommendData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETLIGHTCONEBIGDATA_OFFSET))(this, a1);
		}

		::System::Void _UpdateLightConeRecommendBigData(::Class_1_2EFC5657EFE4E7C9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2EFC5657EFE4E7C9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__UPDATELIGHTCONERECOMMENDBIGDATA_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_2EFC5657EFE4E7C9*>* GetRecommendData(::Enum_3_0F1B992870941C13_8 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_2EFC5657EFE4E7C9*>*(*)(::PVOID, ::Enum_3_0F1B992870941C13_8, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETRECOMMENDDATA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_A5AD8EDEED0C93F3*>* GetAllRecommendData(::Enum_3_0F1B992870941C13_8 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_A5AD8EDEED0C93F3*>*(*)(::PVOID, ::Enum_3_0F1B992870941C13_8))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETALLRECOMMENDDATA_OFFSET))(this, a1);
		}

		::System::Void _HandleRecommendData(::Class_1_2EFC5657EFE4E7C9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2EFC5657EFE4E7C9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__HANDLERECOMMENDDATA_OFFSET))(this, a1);
		}

		::System::Void _HandleAllRecommendData(::Class_1_A5AD8EDEED0C93F3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A5AD8EDEED0C93F3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__HANDLEALLRECOMMENDDATA_OFFSET))(this, a1);
		}

		::System::Void _RejectAllPromisesWhenReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__REJECTALLPROMISESWHENRECONNECT_OFFSET))(this);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GET_ISEXPIRED_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::Recommend::RelicRecommendBigData*>* RequestRelicRecommendBigData(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::Recommend::RelicRecommendBigData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_REQUESTRELICRECOMMENDBIGDATA_OFFSET))(this, a1);
		}

		::RPG::Client::Recommend::RelicRecommendBigData* GetRelicBigData(::System::UInt32 a1)
		{
			return ((::RPG::Client::Recommend::RelicRecommendBigData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETRELICBIGDATA_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::RelicRecommendData*>* RequestRelicRecommendData(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::RelicRecommendData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_REQUESTRELICRECOMMENDDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RelicRecommendData* GetRelicRecommendData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETRELICRECOMMENDDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicRecommendData*>* GetAllRelicRecommendData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicRecommendData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETALLRELICRECOMMENDDATA_OFFSET))(this);
		}

		::RPG::Client::RelicSuitRecommendData* GetSuitRecommendAvatarData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RelicSuitRecommendData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETSUITRECOMMENDAVATARDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicRecommendData*>* GetNoDataRecommendList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicRecommendData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETNODATARECOMMENDLIST_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* TryInitAllRecommendData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_TRYINITALLRECOMMENDDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SuitRecommendAvatarData*>* GetSuitRecommendConfigDataList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SuitRecommendAvatarData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETSUITRECOMMENDCONFIGDATALIST_OFFSET))(this, a1);
		}

		::System::Void _UpdateRelicRecommendBigData(::Class_1_2EFC5657EFE4E7C9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2EFC5657EFE4E7C9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__UPDATERELICRECOMMENDBIGDATA_OFFSET))(this, a1);
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

		::System::Void _UpdateAllRelicAvatarRecommendData(::Class_1_D40936EF3BF54118_80* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__UPDATEALLRELICAVATARRECOMMENDDATA_OFFSET))(this, a1);
		}

		::System::Void _UpdateAllRelicRecommendData(::Class_1_9D5468144EC4C1CF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9D5468144EC4C1CF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__UPDATEALLRELICRECOMMENDDATA_OFFSET))(this, a1);
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

		::System::Void _OnCmdGetBigDataRecommendScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__ONCMDGETBIGDATARECOMMENDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetBigDataAllRecommendScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__ONCMDGETBIGDATAALLRECOMMENDSCRSP_OFFSET))(this, a1, a2);
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
