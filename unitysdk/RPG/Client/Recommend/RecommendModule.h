#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_8.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_14504497CA74CDDA_3;
class Class_1_2EFC5657EFE4E7C9;
class Class_1_D40936EF3BF54118_82;
class Class_1_D40936EF3BF54118_83;
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

#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETALLRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x1B6504A0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETALLRELICRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x1B64F420)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETLIGHTCONEBIGDATA_OFFSET UNITYSDK_OFFSET(0x1B64FE70)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETNODATARECOMMENDLIST_OFFSET UNITYSDK_OFFSET(0x1B651970)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x1B650100)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETRELICBIGDATA_OFFSET UNITYSDK_OFFSET(0x1B6512E0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETRELICRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x1B64DBD0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETSUITRECOMMENDAVATARDATA_OFFSET UNITYSDK_OFFSET(0x1B64F2B0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETSUITRECOMMENDCONFIGDATALIST_OFFSET UNITYSDK_OFFSET(0x1B651F80)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B64DB50)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x1B650FC0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1B653230)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x1B653280)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1B653480)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_REQUESTLIGHTCONERECOMMENDBIGDATA_OFFSET UNITYSDK_OFFSET(0x1B64FC70)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_REQUESTRELICRECOMMENDBIGDATA_OFFSET UNITYSDK_OFFSET(0x1B6510E0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_REQUESTRELICRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x1B6514B0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_TRYINITALLRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x1B651650)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B6532F0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__AFTERRECOMMENDDATAUPDATE_OFFSET UNITYSDK_OFFSET(0x1B652AE0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6538C0)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__HANDLEALLRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x1B650A30)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__HANDLERECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x1B650820)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__INITCONFIGRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x1B652540)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__ONCMDGETBIGDATAALLRECOMMENDSCRSP_OFFSET UNITYSDK_OFFSET(0x1B653750)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__ONCMDGETBIGDATARECOMMENDSCRSP_OFFSET UNITYSDK_OFFSET(0x1B653690)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__REJECTALLPROMISESWHENRECONNECT_OFFSET UNITYSDK_OFFSET(0x1B650C40)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__TRYINITAVATARRELICRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x1B651B80)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__TRYINITRELICAVATARRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x1B651D80)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__UPDATEALLRELICAVATARRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x1B652860)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__UPDATEALLRELICRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x1B652B40)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__UPDATELIGHTCONERECOMMENDBIGDATA_OFFSET UNITYSDK_OFFSET(0x1B64FF20)
#define RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__UPDATERELICRECOMMENDBIGDATA_OFFSET UNITYSDK_OFFSET(0x1B6521A0)

namespace RPG::Client::Recommend
{
	inline static constexpr unsigned int RecommendModule_TypeDefinitionIndex = 74361;

	class RecommendModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::Promises::Promise* _FetchAvatarRelicRecommendDataPromise; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Promises::Promise_1<::RPG::Client::RelicRecommendData*>*>* _RequestRelicRecommendDataPromiseDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicRecommendData*>* _AvatarRelicRecommendDataDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::LightConeRecommendData*>* _LightConeRecommendBigDataDict; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::Enum_3_0F1B992870941C13_8, ::System::UInt32>, ::RPG::Client::Promises::Promise_1<::Class_1_2EFC5657EFE4E7C9*>*>* _RecommendDataPromises; // 0x30
		::System::Collections::Generic::Dictionary_2<::Enum_3_0F1B992870941C13_8, ::RPG::Client::Promises::Promise_1<::Class_1_14504497CA74CDDA_3*>*>* _AllRecommendDataPromises; // 0x38
		::RPG::Client::Promises::Promise* _FetchAllDataPromise; // 0x40
		::RPG::Client::Promises::Promise* _FetchRelicAvatarRecommendDataPromise; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Promises::Promise_1<::RPG::Client::LightConeRecommendData*>*>* _RequestLightConeRecommendBigDataPromiseDict; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Recommend::RelicRecommendBigData*>* _RelicRecommendBigDataDict; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicSuitRecommendData*>* _RelicAvatarRecommendDataDict; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Promises::Promise_1<::RPG::Client::Recommend::RelicRecommendBigData*>*>* _RequestRelicRecommendBigDataPromiseDict; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicRecommendData*>* _AvatarRelicRecommendConfigDataDict; // 0x70
		::System::UInt32 _EXPIRED_TIME; // 0x78
		::System::UInt32 _TimeStamp; // 0x7C

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

		::RPG::Client::Promises::IPromise_1<::Class_1_14504497CA74CDDA_3*>* GetAllRecommendData(::Enum_3_0F1B992870941C13_8 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_14504497CA74CDDA_3*>*(*)(::PVOID, ::Enum_3_0F1B992870941C13_8))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE_GETALLRECOMMENDDATA_OFFSET))(this, a1);
		}

		::System::Void _HandleRecommendData(::Class_1_2EFC5657EFE4E7C9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2EFC5657EFE4E7C9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__HANDLERECOMMENDDATA_OFFSET))(this, a1);
		}

		::System::Void _HandleAllRecommendData(::Class_1_14504497CA74CDDA_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14504497CA74CDDA_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__HANDLEALLRECOMMENDDATA_OFFSET))(this, a1);
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

		::System::Void _UpdateAllRelicAvatarRecommendData(::Class_1_D40936EF3BF54118_82* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_82*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__UPDATEALLRELICAVATARRECOMMENDDATA_OFFSET))(this, a1);
		}

		::System::Void _UpdateAllRelicRecommendData(::Class_1_D40936EF3BF54118_83* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_83*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_RECOMMENDMODULE__UPDATEALLRELICRECOMMENDDATA_OFFSET))(this, a1);
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
	};
}
