#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_75.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/ESwitchHandGestureType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_015A32DE380F4196;
class Class_1_1CBA230307F9C289_62;
class Class_1_70D2E0F3216AAE0C_22;
class Class_1_BEB73AACF0CDA957;
class Class_1_EA80EBCE663FE95A;
namespace Proto { class SwitchHandSnapshot; }
namespace RPG::Client { class SwitchHandMazePuzzleDataManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_SWITCHHANDMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1F1360)
#define RPG_CLIENT_SWITCHHANDMODULE_GETSAVECUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xB1F1DD0)
#define RPG_CLIENT_SWITCHHANDMODULE_GET_SAVECUSTOMDATAMAP_OFFSET UNITYSDK_OFFSET(0xB23FF70)
#define RPG_CLIENT_SWITCHHANDMODULE_GET_SAVEDATAMAP_OFFSET UNITYSDK_OFFSET(0xB23FF60)
#define RPG_CLIENT_SWITCHHANDMODULE_INITSWITCHHANDBYPERFORMANCESNAPSHOT_OFFSET UNITYSDK_OFFSET(0xB1F25E0)
#define RPG_CLIENT_SWITCHHANDMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB1F1280)
#define RPG_CLIENT_SWITCHHANDMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB1F2CA0)
#define RPG_CLIENT_SWITCHHANDMODULE_REGISTERSAVEDATAUPDATEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB1F1590)
#define RPG_CLIENT_SWITCHHANDMODULE_REQUESTPLAYFINISH_OFFSET UNITYSDK_OFFSET(0xB1F1480)
#define RPG_CLIENT_SWITCHHANDMODULE_REQUESTPLAYSTART_OFFSET UNITYSDK_OFFSET(0xB1F1410)
#define RPG_CLIENT_SWITCHHANDMODULE_RESETGAME_OFFSET UNITYSDK_OFFSET(0xB1F1BE0)
#define RPG_CLIENT_SWITCHHANDMODULE_RESETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB1F1A00)
#define RPG_CLIENT_SWITCHHANDMODULE_SENDCANCELLIFTREQ_OFFSET UNITYSDK_OFFSET(0xB1F22F0)
#define RPG_CLIENT_SWITCHHANDMODULE_SENDCATCHITEMREQ_OFFSET UNITYSDK_OFFSET(0xB1F23F0)
#define RPG_CLIENT_SWITCHHANDMODULE_SENDGETDATAREQ_OFFSET UNITYSDK_OFFSET(0xB1F13C0)
#define RPG_CLIENT_SWITCHHANDMODULE_SENDLAYITEMREQ_OFFSET UNITYSDK_OFFSET(0xB1F24F0)
#define RPG_CLIENT_SWITCHHANDMODULE_SENDLIFTREQ_OFFSET UNITYSDK_OFFSET(0xB1F1F60)
#define RPG_CLIENT_SWITCHHANDMODULE_SYNCSTATETOSERVER_OFFSET UNITYSDK_OFFSET(0xB1F1EA0)
#define RPG_CLIENT_SWITCHHANDMODULE_UNREGISTERSAVEDATAUPDATEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB1F1850)
#define RPG_CLIENT_SWITCHHANDMODULE_UPDATECUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xB1F2060)
#define RPG_CLIENT_SWITCHHANDMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB1F2BF0)
#define RPG_CLIENT_SWITCHHANDMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB1F2ED0)
#define RPG_CLIENT_SWITCHHANDMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xB240170)
#define RPG_CLIENT_SWITCHHANDMODULE__CONVERTHANDSTATETOGESTURETYPE_OFFSET UNITYSDK_OFFSET(0xB23FE60)
#define RPG_CLIENT_SWITCHHANDMODULE__CONVERTOPTYPETOGESTURETYPE_OFFSET UNITYSDK_OFFSET(0xB23FEB0)
#define RPG_CLIENT_SWITCHHANDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB23FF80)
#define RPG_CLIENT_SWITCHHANDMODULE__GETCUSTOMDATAGESTURETYPE_OFFSET UNITYSDK_OFFSET(0xB23FDB0)
#define RPG_CLIENT_SWITCHHANDMODULE__INITDATA_OFFSET UNITYSDK_OFFSET(0xB1F3050)
#define RPG_CLIENT_SWITCHHANDMODULE__NOTIFYOP_OFFSET UNITYSDK_OFFSET(0xB23F940)
#define RPG_CLIENT_SWITCHHANDMODULE__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0xB1F2DF0)
#define RPG_CLIENT_SWITCHHANDMODULE__ONGETSWITCHHANDDATASCRSP_OFFSET UNITYSDK_OFFSET(0xB23EFE0)
#define RPG_CLIENT_SWITCHHANDMODULE__ONGETSWITCHHANDRESETGAMESCRSP_OFFSET UNITYSDK_OFFSET(0xB23FC50)
#define RPG_CLIENT_SWITCHHANDMODULE__ONGETSWITCHHANDRESETHANDPOSSCRSP_OFFSET UNITYSDK_OFFSET(0xB23FAF0)
#define RPG_CLIENT_SWITCHHANDMODULE__ONGETSWITCHHANDUPDATESCRSP_OFFSET UNITYSDK_OFFSET(0xB23F7D0)
#define RPG_CLIENT_SWITCHHANDMODULE__ONSWITCHHANDFINISHSCRSP_OFFSET UNITYSDK_OFFSET(0xB23EAA0)
#define RPG_CLIENT_SWITCHHANDMODULE__ONSWITCHHANDSTARTSCRSP_OFFSET UNITYSDK_OFFSET(0xB23E800)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDCATCHITEMCSREQ_OFFSET UNITYSDK_OFFSET(0xB23E520)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDDATACSREQ_OFFSET UNITYSDK_OFFSET(0xB23DE50)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDFINISHCSREQ_OFFSET UNITYSDK_OFFSET(0xB23DD10)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDLIFTCSREQ_OFFSET UNITYSDK_OFFSET(0xB23E240)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDRESETGAMECSREQ_OFFSET UNITYSDK_OFFSET(0xB1F1C80)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDRESETTRANSFORMCSREQ_OFFSET UNITYSDK_OFFSET(0xB1F1AA0)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDSTARTCSREQ_OFFSET UNITYSDK_OFFSET(0xB23DC30)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDUPDATECSREQ_OFFSET UNITYSDK_OFFSET(0xB23DF80)
#define RPG_CLIENT_SWITCHHANDMODULE__UPDATESAVECUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xB23F4C0)
#define RPG_CLIENT_SWITCHHANDMODULE__UPDATESAVEDATA_OFFSET UNITYSDK_OFFSET(0xB23EC00)
#define RPG_CLIENT_SWITCHHANDMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB240210)
#define RPG_CLIENT_SWITCHHANDMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB240180)
#define RPG_CLIENT_SWITCHHANDMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB240280)
#define RPG_CLIENT_SWITCHHANDMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB240220)
#define RPG_CLIENT_SWITCHHANDMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB2402E0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwitchHandModule_TypeDefinitionIndex = 62694;

	class SwitchHandModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet_HandPropID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SwitchHandModule_TypeDefinitionIndex)->GetStaticField(0x5D60);
		}
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_BEB73AACF0CDA957*>* _CustomDataMap; // 0x10
		::RPG::Client::SwitchHandMazePuzzleDataManager* MazePuzzleDataManager; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_EA80EBCE663FE95A*>* _SaveDataMap; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_2<::Class_1_EA80EBCE663FE95A*, ::Class_1_BEB73AACF0CDA957*>*>* _CallbackMap; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_BEB73AACF0CDA957*>* _SaveCustomDataMap; // 0x30
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

		::System::Void RegisterSaveDataUpdatedCallback(::System::UInt32 id, ::System::Action_2<::Class_1_EA80EBCE663FE95A*, ::Class_1_BEB73AACF0CDA957*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_2<::Class_1_EA80EBCE663FE95A*, ::Class_1_BEB73AACF0CDA957*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_REGISTERSAVEDATAUPDATEDCALLBACK_OFFSET))(this, id, callback);
		}

		::System::Void UnregisterSaveDataUpdatedCallback(::System::UInt32 id, ::System::Action_2<::Class_1_EA80EBCE663FE95A*, ::Class_1_BEB73AACF0CDA957*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_2<::Class_1_EA80EBCE663FE95A*, ::Class_1_BEB73AACF0CDA957*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_UNREGISTERSAVEDATAUPDATEDCALLBACK_OFFSET))(this, id, callback);
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

		::System::Void _UpdateSaveData(::Class_1_015A32DE380F4196* handData, ::Class_1_1CBA230307F9C289_62* opData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_015A32DE380F4196*, ::Class_1_1CBA230307F9C289_62*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__UPDATESAVEDATA_OFFSET))(this, handData, opData);
		}

		::RPG::GameCore::ESwitchHandGestureType _GetCustomDataGestureType(::Class_1_015A32DE380F4196* handData, ::Class_1_1CBA230307F9C289_62* opData)
		{
			return ((::RPG::GameCore::ESwitchHandGestureType(*)(::PVOID, ::Class_1_015A32DE380F4196*, ::Class_1_1CBA230307F9C289_62*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__GETCUSTOMDATAGESTURETYPE_OFFSET))(this, handData, opData);
		}

		::RPG::GameCore::ESwitchHandGestureType _ConvertHandStateToGestureType(::System::UInt32 handState)
		{
			return ((::RPG::GameCore::ESwitchHandGestureType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__CONVERTHANDSTATETOGESTURETYPE_OFFSET))(this, handState);
		}

		::RPG::GameCore::ESwitchHandGestureType _ConvertOpTypeToGestureType(::Enum_3_0A3761FE34514D6C_75 type)
		{
			return ((::RPG::GameCore::ESwitchHandGestureType(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_75))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__CONVERTOPTYPETOGESTURETYPE_OFFSET))(this, type);
		}

		::System::Void _UpdateSaveCustomData(::Class_1_015A32DE380F4196* handData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_015A32DE380F4196*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__UPDATESAVECUSTOMDATA_OFFSET))(this, handData);
		}

		::System::Void _NotifyOp(::Class_1_70D2E0F3216AAE0C_22* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_70D2E0F3216AAE0C_22*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__NOTIFYOP_OFFSET))(this, data);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_EA80EBCE663FE95A*>* get_SaveDataMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_EA80EBCE663FE95A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_GET_SAVEDATAMAP_OFFSET))(this);
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
