#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_74.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/ESwitchHandGestureType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3497D086B05ACE3A;
class Class_1_352A8B3482C80E7D_58;
class Class_1_6238D7FF0191672E_20;
class Class_1_BEB73AACF0CDA957;
class Class_1_F8AB4CD8CD203268;
namespace Proto { class SwitchHandSnapshot; }
namespace RPG::Client { class SwitchHandMazePuzzleDataManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_SWITCHHANDMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4FEEB0)
#define RPG_CLIENT_SWITCHHANDMODULE_GETSAVECUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xA5000D0)
#define RPG_CLIENT_SWITCHHANDMODULE_GET_SAVECUSTOMDATAMAP_OFFSET UNITYSDK_OFFSET(0xA503370)
#define RPG_CLIENT_SWITCHHANDMODULE_GET_SAVEDATAMAP_OFFSET UNITYSDK_OFFSET(0xA503360)
#define RPG_CLIENT_SWITCHHANDMODULE_INITSWITCHHANDBYPERFORMANCESNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA501160)
#define RPG_CLIENT_SWITCHHANDMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA4FEDD0)
#define RPG_CLIENT_SWITCHHANDMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA501E90)
#define RPG_CLIENT_SWITCHHANDMODULE_REGISTERSAVEDATAUPDATEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA4FF890)
#define RPG_CLIENT_SWITCHHANDMODULE_REQUESTPLAYFINISH_OFFSET UNITYSDK_OFFSET(0xA4FF640)
#define RPG_CLIENT_SWITCHHANDMODULE_REQUESTPLAYSTART_OFFSET UNITYSDK_OFFSET(0xA4FF1B0)
#define RPG_CLIENT_SWITCHHANDMODULE_RESETGAME_OFFSET UNITYSDK_OFFSET(0xA4FFEE0)
#define RPG_CLIENT_SWITCHHANDMODULE_RESETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA4FFD00)
#define RPG_CLIENT_SWITCHHANDMODULE_SENDCANCELLIFTREQ_OFFSET UNITYSDK_OFFSET(0xA500B90)
#define RPG_CLIENT_SWITCHHANDMODULE_SENDCATCHITEMREQ_OFFSET UNITYSDK_OFFSET(0xA500C90)
#define RPG_CLIENT_SWITCHHANDMODULE_SENDGETDATAREQ_OFFSET UNITYSDK_OFFSET(0xA4FEF10)
#define RPG_CLIENT_SWITCHHANDMODULE_SENDLAYITEMREQ_OFFSET UNITYSDK_OFFSET(0xA501070)
#define RPG_CLIENT_SWITCHHANDMODULE_SENDLIFTREQ_OFFSET UNITYSDK_OFFSET(0xA500520)
#define RPG_CLIENT_SWITCHHANDMODULE_SYNCSTATETOSERVER_OFFSET UNITYSDK_OFFSET(0xA5001A0)
#define RPG_CLIENT_SWITCHHANDMODULE_UNREGISTERSAVEDATAUPDATEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA4FFB50)
#define RPG_CLIENT_SWITCHHANDMODULE_UPDATECUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xA500620)
#define RPG_CLIENT_SWITCHHANDMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA501DE0)
#define RPG_CLIENT_SWITCHHANDMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA502000)
#define RPG_CLIENT_SWITCHHANDMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA503570)
#define RPG_CLIENT_SWITCHHANDMODULE__CONVERTHANDSTATETOGESTURETYPE_OFFSET UNITYSDK_OFFSET(0xA503260)
#define RPG_CLIENT_SWITCHHANDMODULE__CONVERTOPTYPETOGESTURETYPE_OFFSET UNITYSDK_OFFSET(0xA5032B0)
#define RPG_CLIENT_SWITCHHANDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA503380)
#define RPG_CLIENT_SWITCHHANDMODULE__GETCUSTOMDATAGESTURETYPE_OFFSET UNITYSDK_OFFSET(0xA5031B0)
#define RPG_CLIENT_SWITCHHANDMODULE__INITDATA_OFFSET UNITYSDK_OFFSET(0xA502180)
#define RPG_CLIENT_SWITCHHANDMODULE__NOTIFYOP_OFFSET UNITYSDK_OFFSET(0xA502D40)
#define RPG_CLIENT_SWITCHHANDMODULE__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0xA501FB0)
#define RPG_CLIENT_SWITCHHANDMODULE__ONGETSWITCHHANDDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA5026F0)
#define RPG_CLIENT_SWITCHHANDMODULE__ONGETSWITCHHANDRESETGAMESCRSP_OFFSET UNITYSDK_OFFSET(0xA503050)
#define RPG_CLIENT_SWITCHHANDMODULE__ONGETSWITCHHANDRESETHANDPOSSCRSP_OFFSET UNITYSDK_OFFSET(0xA502EF0)
#define RPG_CLIENT_SWITCHHANDMODULE__ONGETSWITCHHANDUPDATESCRSP_OFFSET UNITYSDK_OFFSET(0xA502BD0)
#define RPG_CLIENT_SWITCHHANDMODULE__ONSWITCHHANDFINISHSCRSP_OFFSET UNITYSDK_OFFSET(0xA502590)
#define RPG_CLIENT_SWITCHHANDMODULE__ONSWITCHHANDSTARTSCRSP_OFFSET UNITYSDK_OFFSET(0xA5022F0)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDCATCHITEMCSREQ_OFFSET UNITYSDK_OFFSET(0xA500D90)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDDATACSREQ_OFFSET UNITYSDK_OFFSET(0xA4FF080)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDFINISHCSREQ_OFFSET UNITYSDK_OFFSET(0xA4FF420)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDLIFTCSREQ_OFFSET UNITYSDK_OFFSET(0xA5008B0)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDRESETGAMECSREQ_OFFSET UNITYSDK_OFFSET(0xA4FFF80)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDRESETTRANSFORMCSREQ_OFFSET UNITYSDK_OFFSET(0xA4FFDA0)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDSTARTCSREQ_OFFSET UNITYSDK_OFFSET(0xA4FF560)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDUPDATECSREQ_OFFSET UNITYSDK_OFFSET(0xA500260)
#define RPG_CLIENT_SWITCHHANDMODULE__UPDATESAVECUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xA501780)
#define RPG_CLIENT_SWITCHHANDMODULE__UPDATESAVEDATA_OFFSET UNITYSDK_OFFSET(0xA501A00)
#define RPG_CLIENT_SWITCHHANDMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA503610)
#define RPG_CLIENT_SWITCHHANDMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA503580)
#define RPG_CLIENT_SWITCHHANDMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA503680)
#define RPG_CLIENT_SWITCHHANDMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA503620)
#define RPG_CLIENT_SWITCHHANDMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA5036E0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwitchHandModule_TypeDefinitionIndex = 55500;

	class SwitchHandModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet_HandPropID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SwitchHandModule_TypeDefinitionIndex)->GetStaticField(0xD650);
		}
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_2<::Class_1_3497D086B05ACE3A*, ::Class_1_BEB73AACF0CDA957*>*>* _CallbackMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_BEB73AACF0CDA957*>* _SaveCustomDataMap; // 0x18
		::RPG::Client::SwitchHandMazePuzzleDataManager* MazePuzzleDataManager; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_BEB73AACF0CDA957*>* _CustomDataMap; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_3497D086B05ACE3A*>* _SaveDataMap; // 0x30
		::System::UInt32 _CurrID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void SendGetDataReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_SENDGETDATAREQ_OFFSET))(this);
		}

		::System::Void RequestPlayStart(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_REQUESTPLAYSTART_OFFSET))(this, id);
		}

		::System::Void RequestPlayFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_REQUESTPLAYFINISH_OFFSET))(this);
		}

		::System::Void RegisterSaveDataUpdatedCallback(::System::UInt32 id, ::System::Action_2<::Class_1_3497D086B05ACE3A*, ::Class_1_BEB73AACF0CDA957*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_2<::Class_1_3497D086B05ACE3A*, ::Class_1_BEB73AACF0CDA957*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_REGISTERSAVEDATAUPDATEDCALLBACK_OFFSET))(this, id, callback);
		}

		::System::Void UnregisterSaveDataUpdatedCallback(::System::UInt32 id, ::System::Action_2<::Class_1_3497D086B05ACE3A*, ::Class_1_BEB73AACF0CDA957*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_2<::Class_1_3497D086B05ACE3A*, ::Class_1_BEB73AACF0CDA957*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_UNREGISTERSAVEDATAUPDATEDCALLBACK_OFFSET))(this, id, callback);
		}

		::System::Void ResetTransform(::System::UInt32 id, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_RESETTRANSFORM_OFFSET))(this, id, position, rotation);
		}

		::System::Void ResetGame(::System::UInt32 id, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_RESETGAME_OFFSET))(this, id, position, rotation);
		}

		::System::String* GetSaveCustomData(::System::UInt32 id)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_GETSAVECUSTOMDATA_OFFSET))(this, id);
		}

		::System::Void SyncStateToServer(::System::UInt32 id, ::RPG::GameCore::ESwitchHandGestureType gestureType, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ESwitchHandGestureType, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_SYNCSTATETOSERVER_OFFSET))(this, id, gestureType, position, rotation);
		}

		::System::Void SendLiftReq(::System::UInt32 id, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Object* param, ::RPG::GameCore::GameEntity* liftEntity)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Object*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_SENDLIFTREQ_OFFSET))(this, id, position, rotation, param, liftEntity);
		}

		::System::Void SendCancelLiftReq(::System::UInt32 id, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Object* param, ::RPG::GameCore::GameEntity* liftEntity)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Object*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_SENDCANCELLIFTREQ_OFFSET))(this, id, position, rotation, param, liftEntity);
		}

		::System::Void SendCatchItemReq(::System::UInt32 id, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Object* param, ::RPG::GameCore::GameEntity* catchEntity)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Object*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_SENDCATCHITEMREQ_OFFSET))(this, id, position, rotation, param, catchEntity);
		}

		::System::Void SendLayItemReq(::System::UInt32 id, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::RPG::GameCore::GameEntity* catchEntity)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_SENDLAYITEMREQ_OFFSET))(this, id, position, rotation, catchEntity);
		}

		::System::Void UpdateCustomData(::System::UInt32 id, ::RPG::GameCore::ESwitchHandGestureType gestureType, ::System::Object* customData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ESwitchHandGestureType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_UPDATECUSTOMDATA_OFFSET))(this, id, gestureType, customData);
		}

		::System::Void InitSwitchHandByPerformanceSnapshot(::Proto::SwitchHandSnapshot* snapshot)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SwitchHandSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_INITSWITCHHANDBYPERFORMANCESNAPSHOT_OFFSET))(this, snapshot);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__ONADVENTUREPHASEEND_OFFSET))(this, param);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__INITDATA_OFFSET))(this);
		}

		::System::Void _SendSwitchHandResetTransformCsReq(::System::UInt32 reqID, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDRESETTRANSFORMCSREQ_OFFSET))(this, reqID, position, rotation);
		}

		::System::Void _SendSwitchHandResetGameCsReq(::System::UInt32 reqID, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDRESETGAMECSREQ_OFFSET))(this, reqID, position, rotation);
		}

		::System::Void _SendSwitchHandStartCsReq(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDSTARTCSREQ_OFFSET))(this, id);
		}

		::System::Void _SendSwitchHandFinishCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDFINISHCSREQ_OFFSET))(this);
		}

		::System::Void _SendSwitchHandDataCsReq(::System::UInt32 reqID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDDATACSREQ_OFFSET))(this, reqID);
		}

		::System::Void _SendSwitchHandUpdateCsReq(::System::UInt32 reqID, ::System::UInt32 state, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDUPDATECSREQ_OFFSET))(this, reqID, state, position, rotation);
		}

		::System::Void _SendSwitchHandLiftCsReq(::System::UInt32 reqID, ::System::UInt32 state, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::UInt32 liftState, ::RPG::GameCore::GameEntity* prop)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDLIFTCSREQ_OFFSET))(this, reqID, state, position, rotation, liftState, prop);
		}

		::System::Void _SendSwitchHandCatchItemCsReq(::System::UInt32 reqID, ::System::UInt32 state, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::UInt32 catchState, ::RPG::GameCore::GameEntity* prop)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDCATCHITEMCSREQ_OFFSET))(this, reqID, state, position, rotation, catchState, prop);
		}

		::System::Void _OnSwitchHandStartScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__ONSWITCHHANDSTARTSCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnSwitchHandFinishScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__ONSWITCHHANDFINISHSCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnGetSwitchHandDataScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__ONGETSWITCHHANDDATASCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnGetSwitchHandUpdateScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__ONGETSWITCHHANDUPDATESCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnGetSwitchHandResetHandPosScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__ONGETSWITCHHANDRESETHANDPOSSCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnGetSwitchHandResetGameScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__ONGETSWITCHHANDRESETGAMESCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _UpdateSaveData(::Class_1_F8AB4CD8CD203268* handData, ::Class_1_352A8B3482C80E7D_58* opData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F8AB4CD8CD203268*, ::Class_1_352A8B3482C80E7D_58*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__UPDATESAVEDATA_OFFSET))(this, handData, opData);
		}

		::RPG::GameCore::ESwitchHandGestureType _GetCustomDataGestureType(::Class_1_F8AB4CD8CD203268* handData, ::Class_1_352A8B3482C80E7D_58* opData)
		{
			return ((::RPG::GameCore::ESwitchHandGestureType(*)(::PVOID, ::Class_1_F8AB4CD8CD203268*, ::Class_1_352A8B3482C80E7D_58*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__GETCUSTOMDATAGESTURETYPE_OFFSET))(this, handData, opData);
		}

		::RPG::GameCore::ESwitchHandGestureType _ConvertHandStateToGestureType(::System::UInt32 handState)
		{
			return ((::RPG::GameCore::ESwitchHandGestureType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__CONVERTHANDSTATETOGESTURETYPE_OFFSET))(this, handState);
		}

		::RPG::GameCore::ESwitchHandGestureType _ConvertOpTypeToGestureType(::Enum_3_0A3761FE34514D6C_74 type)
		{
			return ((::RPG::GameCore::ESwitchHandGestureType(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_74))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__CONVERTOPTYPETOGESTURETYPE_OFFSET))(this, type);
		}

		::System::Void _UpdateSaveCustomData(::Class_1_F8AB4CD8CD203268* handData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F8AB4CD8CD203268*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__UPDATESAVECUSTOMDATA_OFFSET))(this, handData);
		}

		::System::Void _NotifyOp(::Class_1_6238D7FF0191672E_20* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6238D7FF0191672E_20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__NOTIFYOP_OFFSET))(this, data);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_3497D086B05ACE3A*>* get_SaveDataMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_3497D086B05ACE3A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_GET_SAVEDATAMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_BEB73AACF0CDA957*>* get_SaveCustomDataMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_BEB73AACF0CDA957*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_GET_SAVECUSTOMDATAMAP_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
