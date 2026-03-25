#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_47EB23CB5C4B2615_36;
class Class_1_92B1BD6FC8375724;
class Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D;
class Class_1_B1050BB558D637BF;
class Class_1_DDB796240B07BA45;
class Class_1_F22B920916A3710A;
class Class_1_F22B920916A3710A_Class_1_93CDA5C33880619D;
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightPortalCalculator; }
namespace RPG::Client { class GridFightTeamCalculator; }
namespace RPG::Client { template <typename T> class GridFightGameRefHttpRspBody_1; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedFile; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF_APPLYREF_1_OFFSET UNITYSDK_OFFSET(0x98254B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_APPLYREF_OFFSET UNITYSDK_OFFSET(0x9825000)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_CLEARAPPLIEDGAMEREF_OFFSET UNITYSDK_OFFSET(0x98258F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_COUNTAPPLIEDGAMEREF_OFFSET UNITYSDK_OFFSET(0x98257D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9824DB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_FAVOUR_OFFSET UNITYSDK_OFFSET(0x9826D90)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GETFAVOURLIST_OFFSET UNITYSDK_OFFSET(0x9826AB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GETGAMEREFH5URL_OFFSET UNITYSDK_OFFSET(0x9827950)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GETREFREALLIKECNT_OFFSET UNITYSDK_OFFSET(0x9827600)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GET_ALLRELATIVEREFSBYPORTAL_OFFSET UNITYSDK_OFFSET(0x9823150)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GET_ALLRELATIVEREFS_OFFSET UNITYSDK_OFFSET(0x9822DC0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GET_FAVOURCNT_OFFSET UNITYSDK_OFFSET(0x9823570)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GET_FAVOURMAXCNT_OFFSET UNITYSDK_OFFSET(0x9823460)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GET_FAVOURSORTEDREFS_OFFSET UNITYSDK_OFFSET(0x9822B40)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GET_HASREFS_OFFSET UNITYSDK_OFFSET(0x9822D60)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GET_HASSAVEDAPPLIEDGAMEREFID_OFFSET UNITYSDK_OFFSET(0x9822C80)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_GET_MMF_OFFSET UNITYSDK_OFFSET(0x98235E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_ISCOMPLIANT_OFFSET UNITYSDK_OFFSET(0x9825F40)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_ISFAVOUR_OFFSET UNITYSDK_OFFSET(0x9828120)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_ISLIKE_OFFSET UNITYSDK_OFFSET(0x9828090)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_ISNEW_OFFSET UNITYSDK_OFFSET(0x98281B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_ISREFERENCED_OFFSET UNITYSDK_OFFSET(0x9826020)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_LIKE_OFFSET UNITYSDK_OFFSET(0x9826B10)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_PENDINGREADUPDATE_OFFSET UNITYSDK_OFFSET(0x9826FF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_PENDINGREQINTERECTDATA_OFFSET UNITYSDK_OFFSET(0x9827AF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_READUPDATE_OFFSET UNITYSDK_OFFSET(0x9826ED0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_REPORTAPPLIEDGAMEREF_OFFSET UNITYSDK_OFFSET(0x9825980)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_REQALLPENDINGREADUPDATE_OFFSET UNITYSDK_OFFSET(0x98272B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_REQCURPENDINGIDSINTERECTDATA_OFFSET UNITYSDK_OFFSET(0x9827B80)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_REQGAMEREFDATABYSHARECODEINFO_OFFSET UNITYSDK_OFFSET(0x98276E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_REQINTERECTDATA_OFFSET UNITYSDK_OFFSET(0x9827CB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_REQSHARECODEINFO_OFFSET UNITYSDK_OFFSET(0x9827880)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_RESTOREAPPLIEDGAMEREF_OFFSET UNITYSDK_OFFSET(0x9823650)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGETGAMEREFSTATICDATAAPIHTTPREQ_OFFSET UNITYSDK_OFFSET(0x98210D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGETGRIDFIGHTGAMEREFSHARECODEREQ_OFFSET UNITYSDK_OFFSET(0x98220E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTGAMEREFAPPLYREQ_OFFSET UNITYSDK_OFFSET(0x9820B30)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTGAMEREFFAVOURREQ_OFFSET UNITYSDK_OFFSET(0x9820010)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTGAMEREFLIKEREQ_OFFSET UNITYSDK_OFFSET(0x98205A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_OFFSET UNITYSDK_OFFSET(0x981F810)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTGETGAMEREFINTERECTDATAREQ_OFFSET UNITYSDK_OFFSET(0x98214B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTREADGAMEREFUPDATEREQ_OFFSET UNITYSDK_OFFSET(0x9821A30)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SET_MMF_OFFSET UNITYSDK_OFFSET(0x98235F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SWITCHLANG_OFFSET UNITYSDK_OFFSET(0x9824480)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SYNCFAVOURLIST_OFFSET UNITYSDK_OFFSET(0x9824E20)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SYNCFROMFILE_OFFSET UNITYSDK_OFFSET(0x98237F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SYNC_1_OFFSET UNITYSDK_OFFSET(0x9824790)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_SYNC_OFFSET UNITYSDK_OFFSET(0x9823600)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_UNAPPLYREF_OFFSET UNITYSDK_OFFSET(0x9825CE0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_UNFAVOUR_OFFSET UNITYSDK_OFFSET(0x98274C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF_UNLIKE_OFFSET UNITYSDK_OFFSET(0x9826C50)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__CCTOR_OFFSET UNITYSDK_OFFSET(0x9828680)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__CTOR_OFFSET UNITYSDK_OFFSET(0x9828240)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__GETALLPORTALRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x9823160)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__GETALLRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x9822DD0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__LOGHTTPRSP_OFFSET UNITYSDK_OFFSET(0x9822A10)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__ONHTTPERROR_OFFSET UNITYSDK_OFFSET(0x9822A60)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__READNECESSARYDATA_OFFSET UNITYSDK_OFFSET(0x9823BC0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__READOFFSET_OFFSET UNITYSDK_OFFSET(0x98238F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__REQCURPENDINGIDSINTERECTDATA_B__83_0_OFFSET UNITYSDK_OFFSET(0x9828750)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__RESTOREAPPLIEDGAMEREF_B__59_0_OFFSET UNITYSDK_OFFSET(0x98286D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__SENDGAMEREFHTTPREQ_OFFSET UNITYSDK_OFFSET(0x9821D90)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__SETHTTPREQDEBUGPARAMS_OFFSET UNITYSDK_OFFSET(0x98226A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__SETHTTPREQPARAMS_OFFSET UNITYSDK_OFFSET(0x981FEF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF__SYNCGAMEREFDATAINTERECT_OFFSET UNITYSDK_OFFSET(0x9827D90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef_TypeDefinitionIndex = 52515;

	class GridFightGameRef : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightTeamCalculator** StaticGet__Calculator()
		{
			return (::RPG::Client::GridFightTeamCalculator**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRef_TypeDefinitionIndex)->GetStaticField(0x15060);
		}
		static ::System::String** StaticGet_FallBackLang()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRef_TypeDefinitionIndex)->GetStaticField(0x15068);
		}
		static ::RPG::Client::GridFightPortalCalculator** StaticGet__PortalCalculator()
		{
			return (::RPG::Client::GridFightPortalCalculator**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRef_TypeDefinitionIndex)->GetStaticField(0x15070);
		}
		::RPG::Client::GridFightGameRefData* AppliedGameRef; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* _CurPendingReadUpdateIDs; // 0x18
		::System::String* CurLang; // 0x20
		::System::IO::MemoryMappedFiles::MemoryMappedFile* _MMF_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::Il2CppArray<::System::String*>*>* _PendingReadUpdateIDs; // 0x30
		::System::Collections::Generic::HashSet_1<::System::String*>* _FavourGameRefIDS; // 0x38
		::System::String* _ApiDomain; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>* FavourRefs; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _RealLikeCnt; // 0x50
		::System::String* CurFilePath; // 0x58
		::Il2CppArray<::RPG::Client::GridFightGameRefData*>* AllRefs; // 0x60
		::System::Collections::Generic::HashSet_1<::RPG::Client::MongoObjectId>* _AppliedGameRefs; // 0x68
		::System::Collections::Generic::HashSet_1<::System::String*>* _NewGameRefIDS; // 0x70
		::System::Collections::Generic::HashSet_1<::System::String*>* _LikedGameRefIDS; // 0x78
		::System::Collections::Generic::HashSet_1<::System::String*>* _PendingInterectDataIDs; // 0x80
		::System::UInt32 CurRefVersion; // 0x88
		::System::UInt32 PendingVersion; // 0x8C
		::System::Single _LastInterectTime; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__CCTOR_OFFSET))();
		}

		::System::Void SendGridFightGetFavourListGameRefReq(::System::Int32 pageNum, ::System::Int32 pageSize, ::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_OFFSET))(this, pageNum, pageSize, callback);
		}

		::System::Void SendGridFightGameRefFavourReq(::System::String* id, ::System::Boolean isFavour, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTGAMEREFFAVOURREQ_OFFSET))(this, id, isFavour, callback);
		}

		::System::Void SendGridFightGameRefLikeReq(::System::String* id, ::System::Boolean isLike, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTGAMEREFLIKEREQ_OFFSET))(this, id, isLike, callback);
		}

		::System::Void SendGridFightGameRefApplyReq(::Il2CppArray<::System::String*>* ids, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTGAMEREFAPPLYREQ_OFFSET))(this, ids, callback);
		}

		::System::Void SendGetGameRefStaticDataApiHttpReq(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGETGAMEREFSTATICDATAAPIHTTPREQ_OFFSET))(this, callback);
		}

		::System::Void SendGridFightGetGameRefInterectDataReq(::Il2CppArray<::System::String*>* ids, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B1050BB558D637BF*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B1050BB558D637BF*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTGETGAMEREFINTERECTDATAREQ_OFFSET))(this, ids, callback);
		}

		::System::Void SendGridFightReadGameRefUpdateReq(::Il2CppArray<::System::String*>* ids, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGRIDFIGHTREADGAMEREFUPDATEREQ_OFFSET))(this, ids, callback);
		}

		::System::Void SendGetGridFightGameRefShareCodeReq(::System::String* shareCode, ::System::Action_1<::RPG::Client::GridFightGameRefHttpRspBody_1<::Class_1_47EB23CB5C4B2615_36*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::GridFightGameRefHttpRspBody_1<::Class_1_47EB23CB5C4B2615_36*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SENDGETGRIDFIGHTGAMEREFSHARECODEREQ_OFFSET))(this, shareCode, callback);
		}

		::System::Void _SetHttpReqDebugParams(::Class_1_92B1BD6FC8375724* req)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__SETHTTPREQDEBUGPARAMS_OFFSET))(this, req);
		}

		::System::Void _SetHttpReqParams(::Class_1_92B1BD6FC8375724* req)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__SETHTTPREQPARAMS_OFFSET))(this, req);
		}

		::System::Void _LogHttpRsp(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__LOGHTTPRSP_OFFSET))(this, rsp);
		}

		::System::Void _OnHttpError(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__ONHTTPERROR_OFFSET))(this, ex);
		}

		::System::Void _SendGameRefHttpReq(::Class_1_92B1BD6FC8375724* req, ::System::Func_2<::System::String*, ::System::Object*>* getJsonBody, ::Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D* sendParams, ::System::Action_1<::Class_1_DDB796240B07BA45*>* onResponce)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_92B1BD6FC8375724*, ::System::Func_2<::System::String*, ::System::Object*>*, ::Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D*, ::System::Action_1<::Class_1_DDB796240B07BA45*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__SENDGAMEREFHTTPREQ_OFFSET))(this, req, getJsonBody, sendParams, onResponce);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>* get_FavourSortedRefs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GET_FAVOURSORTEDREFS_OFFSET))(this);
		}

		::System::Boolean get_HasSavedAppliedGameRefID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GET_HASSAVEDAPPLIEDGAMEREFID_OFFSET))(this);
		}

		::System::Boolean get_HasRefs()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GET_HASREFS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>* get_AllRelativeRefs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GET_ALLRELATIVEREFS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>* get_AllRelativeRefsByPortal()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GET_ALLRELATIVEREFSBYPORTAL_OFFSET))(this);
		}

		::System::UInt32 get_FavourMaxCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GET_FAVOURMAXCNT_OFFSET))(this);
		}

		::System::UInt32 get_FavourCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GET_FAVOURCNT_OFFSET))(this);
		}

		::System::IO::MemoryMappedFiles::MemoryMappedFile* get_MMF()
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedFile*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GET_MMF_OFFSET))(this);
		}

		::System::Void set_MMF(::System::IO::MemoryMappedFiles::MemoryMappedFile* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::MemoryMappedFiles::MemoryMappedFile*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SET_MMF_OFFSET))(this, value);
		}

		::System::Void Sync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SYNC_OFFSET))(this);
		}

		::System::Boolean SyncFromFile(::System::String* path)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SYNCFROMFILE_OFFSET))(this, path);
		}

		::System::Void SwitchLang()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SWITCHLANG_OFFSET))(this);
		}

		::System::Void _ReadNecessaryData(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__READNECESSARYDATA_OFFSET))(this, path);
		}

		::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>* _ReadOffset(::System::String* filePath)
		{
			return ((::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__READOFFSET_OFFSET))(this, filePath);
		}

		::System::Void Sync_1(::Class_1_F22B920916A3710A* httpData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F22B920916A3710A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SYNC_1_OFFSET))(this, httpData);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncFavourList(::Il2CppArray<::Class_1_F22B920916A3710A_Class_1_93CDA5C33880619D*>* datas)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_F22B920916A3710A_Class_1_93CDA5C33880619D*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_SYNCFAVOURLIST_OFFSET))(this, datas);
		}

		::System::Void RestoreAppliedGameRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_RESTOREAPPLIEDGAMEREF_OFFSET))(this);
		}

		::System::Void ApplyRef(::System::String* refID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_APPLYREF_OFFSET))(this, refID);
		}

		::System::Void ApplyRef_1(::RPG::Client::GridFightGameRefData* refData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_APPLYREF_1_OFFSET))(this, refData);
		}

		::System::Void CountAppliedGameRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_COUNTAPPLIEDGAMEREF_OFFSET))(this);
		}

		::System::Void ClearAppliedGameRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_CLEARAPPLIEDGAMEREF_OFFSET))(this);
		}

		::System::Void ReportAppliedGameRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_REPORTAPPLIEDGAMEREF_OFFSET))(this);
		}

		::System::Void UnApplyRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_UNAPPLYREF_OFFSET))(this);
		}

		::System::Boolean IsCompliant(::System::String* id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_ISCOMPLIANT_OFFSET))(this, id);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>* _GetAllRecommendData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__GETALLRECOMMENDDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>* _GetAllPortalRecommendData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__GETALLPORTALRECOMMENDDATA_OFFSET))(this);
		}

		::System::Boolean IsReferenced(::System::UInt32 ID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_ISREFERENCED_OFFSET))(this, ID);
		}

		::System::Void GetFavourList(::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GETFAVOURLIST_OFFSET))(this, callback);
		}

		::System::Void Like(::System::String* id, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_LIKE_OFFSET))(this, id, callback);
		}

		::System::Void Unlike(::System::String* id, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_UNLIKE_OFFSET))(this, id, callback);
		}

		::System::Void Favour(::System::String* id, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_FAVOUR_OFFSET))(this, id, callback);
		}

		::System::Void ReadUpdate(::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_READUPDATE_OFFSET))(this, id);
		}

		::System::Void PendingReadUpdate(::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_PENDINGREADUPDATE_OFFSET))(this, id);
		}

		::System::Void ReqAllPendingReadUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_REQALLPENDINGREADUPDATE_OFFSET))(this);
		}

		::System::Void Unfavour(::System::String* id, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_UNFAVOUR_OFFSET))(this, id, callback);
		}

		::System::Int32 GetRefRealLikeCnt(::System::String* id)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GETREFREALLIKECNT_OFFSET))(this, id);
		}

		::System::Void ReqGameRefDataByShareCodeInfo(::System::String* shareCodeInfo, ::System::Action_1<::RPG::Client::GridFightGameRefData*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::GridFightGameRefData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_REQGAMEREFDATABYSHARECODEINFO_OFFSET))(this, shareCodeInfo, callback);
		}

		::System::String* GetGameRefH5URL(::System::String* id)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_GETGAMEREFH5URL_OFFSET))(this, id);
		}

		::System::Void ReqShareCodeInfo(::System::String* shareCode, ::System::Action_1<::RPG::Client::GridFightGameRefData*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::GridFightGameRefData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_REQSHARECODEINFO_OFFSET))(this, shareCode, callback);
		}

		::System::Void PendingReqInterectData(::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_PENDINGREQINTERECTDATA_OFFSET))(this, id);
		}

		::System::Void ReqCurPendingIDsInterectData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_REQCURPENDINGIDSINTERECTDATA_OFFSET))(this);
		}

		::System::Void ReqInterectData(::Il2CppArray<::System::String*>* ids, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_REQINTERECTDATA_OFFSET))(this, ids, callback);
		}

		::System::Void _SyncGameRefDataInterect(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Class_1_B1050BB558D637BF*> data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Class_1_B1050BB558D637BF*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__SYNCGAMEREFDATAINTERECT_OFFSET))(this, data);
		}

		::System::Boolean IsLike(::System::String* id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_ISLIKE_OFFSET))(this, id);
		}

		::System::Boolean IsFavour(::System::String* id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_ISFAVOUR_OFFSET))(this, id);
		}

		::System::Boolean IsNew(::System::String* id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF_ISNEW_OFFSET))(this, id);
		}

		::System::Void _RestoreAppliedGameRef_b__59_0(::RPG::Client::GridFightGameRefHttpRspBody_1<::Class_1_47EB23CB5C4B2615_36*>* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefHttpRspBody_1<::Class_1_47EB23CB5C4B2615_36*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__RESTOREAPPLIEDGAMEREF_B__59_0_OFFSET))(this, rsp);
		}

		::System::Void _ReqCurPendingIDsInterectData_b__83_0(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B1050BB558D637BF*>* datas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B1050BB558D637BF*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF__REQCURPENDINGIDSINTERECTDATA_B__83_0_OFFSET))(this, datas);
		}
	};
}
