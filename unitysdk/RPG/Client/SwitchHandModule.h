#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_78.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/ESwitchHandGestureType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1CBA230307F9C289_97;
class Class_1_3497D086B05ACE3A;
class Class_1_63BD26701645323A;
class Class_1_963E317C37FB5E9A_102;
class Class_1_BEB73AACF0CDA957;
namespace Proto { class SwitchHandSnapshot; }
namespace RPG::Client { class SwitchHandMazePuzzleDataManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_SWITCHHANDMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B46B6C0)
#define RPG_CLIENT_SWITCHHANDMODULE_GETSAVECUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x1B46C8B0)
#define RPG_CLIENT_SWITCHHANDMODULE_GET_SAVECUSTOMDATAMAP_OFFSET UNITYSDK_OFFSET(0x1B46FED0)
#define RPG_CLIENT_SWITCHHANDMODULE_GET_SAVEDATAMAP_OFFSET UNITYSDK_OFFSET(0x1B46FE90)
#define RPG_CLIENT_SWITCHHANDMODULE_INITSWITCHHANDBYPERFORMANCESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1B46D960)
#define RPG_CLIENT_SWITCHHANDMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1B46B620)
#define RPG_CLIENT_SWITCHHANDMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1B46E630)
#define RPG_CLIENT_SWITCHHANDMODULE_REGISTERSAVEDATAUPDATEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B46C0B0)
#define RPG_CLIENT_SWITCHHANDMODULE_REQUESTPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x1B46BEA0)
#define RPG_CLIENT_SWITCHHANDMODULE_REQUESTPLAYSTART_OFFSET UNITYSDK_OFFSET(0x1B46B9C0)
#define RPG_CLIENT_SWITCHHANDMODULE_RESETGAME_OFFSET UNITYSDK_OFFSET(0x1B46C6C0)
#define RPG_CLIENT_SWITCHHANDMODULE_RESETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B46C4E0)
#define RPG_CLIENT_SWITCHHANDMODULE_SENDCANCELLIFTREQ_OFFSET UNITYSDK_OFFSET(0x1B46D340)
#define RPG_CLIENT_SWITCHHANDMODULE_SENDCATCHITEMREQ_OFFSET UNITYSDK_OFFSET(0x1B46D440)
#define RPG_CLIENT_SWITCHHANDMODULE_SENDGETDATAREQ_OFFSET UNITYSDK_OFFSET(0x1B46B720)
#define RPG_CLIENT_SWITCHHANDMODULE_SENDLAYITEMREQ_OFFSET UNITYSDK_OFFSET(0x1B46D870)
#define RPG_CLIENT_SWITCHHANDMODULE_SENDLIFTREQ_OFFSET UNITYSDK_OFFSET(0x1B46CD20)
#define RPG_CLIENT_SWITCHHANDMODULE_SYNCSTATETOSERVER_OFFSET UNITYSDK_OFFSET(0x1B46C950)
#define RPG_CLIENT_SWITCHHANDMODULE_UNREGISTERSAVEDATAUPDATEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B46C360)
#define RPG_CLIENT_SWITCHHANDMODULE_UPDATECUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x1B46CE20)
#define RPG_CLIENT_SWITCHHANDMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B46E560)
#define RPG_CLIENT_SWITCHHANDMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B46E7E0)
#define RPG_CLIENT_SWITCHHANDMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B470100)
#define RPG_CLIENT_SWITCHHANDMODULE__CONVERTHANDSTATETOGESTURETYPE_OFFSET UNITYSDK_OFFSET(0x1B46FD90)
#define RPG_CLIENT_SWITCHHANDMODULE__CONVERTOPTYPETOGESTURETYPE_OFFSET UNITYSDK_OFFSET(0x1B46FDE0)
#define RPG_CLIENT_SWITCHHANDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B46FF10)
#define RPG_CLIENT_SWITCHHANDMODULE__GETCUSTOMDATAGESTURETYPE_OFFSET UNITYSDK_OFFSET(0x1B46FCE0)
#define RPG_CLIENT_SWITCHHANDMODULE__INITDATA_OFFSET UNITYSDK_OFFSET(0x1B46EBC0)
#define RPG_CLIENT_SWITCHHANDMODULE__NOTIFYOP_OFFSET UNITYSDK_OFFSET(0x1B46F870)
#define RPG_CLIENT_SWITCHHANDMODULE__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0x1B46E730)
#define RPG_CLIENT_SWITCHHANDMODULE__ONGETSWITCHHANDDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1B46F100)
#define RPG_CLIENT_SWITCHHANDMODULE__ONGETSWITCHHANDRESETGAMESCRSP_OFFSET UNITYSDK_OFFSET(0x1B46FB80)
#define RPG_CLIENT_SWITCHHANDMODULE__ONGETSWITCHHANDRESETHANDPOSSCRSP_OFFSET UNITYSDK_OFFSET(0x1B46FA20)
#define RPG_CLIENT_SWITCHHANDMODULE__ONGETSWITCHHANDUPDATESCRSP_OFFSET UNITYSDK_OFFSET(0x1B46F700)
#define RPG_CLIENT_SWITCHHANDMODULE__ONSWITCHHANDFINISHSCRSP_OFFSET UNITYSDK_OFFSET(0x1B46EFA0)
#define RPG_CLIENT_SWITCHHANDMODULE__ONSWITCHHANDSTARTSCRSP_OFFSET UNITYSDK_OFFSET(0x1B46ED30)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDCATCHITEMCSREQ_OFFSET UNITYSDK_OFFSET(0x1B46D540)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDDATACSREQ_OFFSET UNITYSDK_OFFSET(0x1B46B890)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDFINISHCSREQ_OFFSET UNITYSDK_OFFSET(0x1B46BC60)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDLIFTCSREQ_OFFSET UNITYSDK_OFFSET(0x1B46D010)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDRESETGAMECSREQ_OFFSET UNITYSDK_OFFSET(0x1B46C760)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDRESETTRANSFORMCSREQ_OFFSET UNITYSDK_OFFSET(0x1B46C580)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDSTARTCSREQ_OFFSET UNITYSDK_OFFSET(0x1B46BD70)
#define RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDUPDATECSREQ_OFFSET UNITYSDK_OFFSET(0x1B46CA10)
#define RPG_CLIENT_SWITCHHANDMODULE__UPDATESAVECUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x1B46E000)
#define RPG_CLIENT_SWITCHHANDMODULE__UPDATESAVEDATA_OFFSET UNITYSDK_OFFSET(0x1B46E250)

namespace RPG::Client
{
	inline static constexpr unsigned int SwitchHandModule_TypeDefinitionIndex = 68001;

	class SwitchHandModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet_HandPropID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SwitchHandModule_TypeDefinitionIndex)->GetStaticField(0xE7D0);
		}
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Action_2<::Class_1_3497D086B05ACE3A*, ::Class_1_BEB73AACF0CDA957*>*>* _CallbackMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_3497D086B05ACE3A*>* _SaveDataMap; // 0x18
		::RPG::Client::SwitchHandMazePuzzleDataManager* MazePuzzleDataManager; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_BEB73AACF0CDA957*>* _SaveCustomDataMap; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_BEB73AACF0CDA957*>* _CustomDataMap; // 0x30
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

		::System::Void RequestPlayStart(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_REQUESTPLAYSTART_OFFSET))(this, a1);
		}

		::System::Void RequestPlayFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_REQUESTPLAYFINISH_OFFSET))(this);
		}

		::System::Void RegisterSaveDataUpdatedCallback(::System::UInt32 a1, ::System::Action_2<::Class_1_3497D086B05ACE3A*, ::Class_1_BEB73AACF0CDA957*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_2<::Class_1_3497D086B05ACE3A*, ::Class_1_BEB73AACF0CDA957*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_REGISTERSAVEDATAUPDATEDCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void UnregisterSaveDataUpdatedCallback(::System::UInt32 a1, ::System::Action_2<::Class_1_3497D086B05ACE3A*, ::Class_1_BEB73AACF0CDA957*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_2<::Class_1_3497D086B05ACE3A*, ::Class_1_BEB73AACF0CDA957*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_UNREGISTERSAVEDATAUPDATEDCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void ResetTransform(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_RESETTRANSFORM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetGame(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_RESETGAME_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GetSaveCustomData(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_GETSAVECUSTOMDATA_OFFSET))(this, a1);
		}

		::System::Void SyncStateToServer(::System::UInt32 a1, ::RPG::GameCore::ESwitchHandGestureType a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ESwitchHandGestureType, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_SYNCSTATETOSERVER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SendLiftReq(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Object* a4, ::RPG::GameCore::GameEntity* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Object*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_SENDLIFTREQ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SendCancelLiftReq(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Object* a4, ::RPG::GameCore::GameEntity* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Object*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_SENDCANCELLIFTREQ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SendCatchItemReq(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Object* a4, ::RPG::GameCore::GameEntity* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Object*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_SENDCATCHITEMREQ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SendLayItemReq(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::RPG::GameCore::GameEntity* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_SENDLAYITEMREQ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void UpdateCustomData(::System::UInt32 a1, ::RPG::GameCore::ESwitchHandGestureType a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ESwitchHandGestureType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_UPDATECUSTOMDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InitSwitchHandByPerformanceSnapshot(::Proto::SwitchHandSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SwitchHandSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_INITSWITCHHANDBYPERFORMANCESNAPSHOT_OFFSET))(this, a1);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__ONADVENTUREPHASEEND_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__INITDATA_OFFSET))(this);
		}

		::System::Void _SendSwitchHandResetTransformCsReq(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDRESETTRANSFORMCSREQ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SendSwitchHandResetGameCsReq(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDRESETGAMECSREQ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SendSwitchHandStartCsReq(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDSTARTCSREQ_OFFSET))(this, a1);
		}

		::System::Void _SendSwitchHandFinishCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDFINISHCSREQ_OFFSET))(this);
		}

		::System::Void _SendSwitchHandDataCsReq(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDDATACSREQ_OFFSET))(this, a1);
		}

		::System::Void _SendSwitchHandUpdateCsReq(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDUPDATECSREQ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _SendSwitchHandLiftCsReq(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::System::UInt32 a5, ::RPG::GameCore::GameEntity* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDLIFTCSREQ_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _SendSwitchHandCatchItemCsReq(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::System::UInt32 a5, ::RPG::GameCore::GameEntity* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__SENDSWITCHHANDCATCHITEMCSREQ_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _OnSwitchHandStartScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__ONSWITCHHANDSTARTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSwitchHandFinishScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__ONSWITCHHANDFINISHSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetSwitchHandDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__ONGETSWITCHHANDDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetSwitchHandUpdateScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__ONGETSWITCHHANDUPDATESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetSwitchHandResetHandPosScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__ONGETSWITCHHANDRESETHANDPOSSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetSwitchHandResetGameScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__ONGETSWITCHHANDRESETGAMESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateSaveData(::Class_1_63BD26701645323A* a1, ::Class_1_1CBA230307F9C289_97* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_63BD26701645323A*, ::Class_1_1CBA230307F9C289_97*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__UPDATESAVEDATA_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ESwitchHandGestureType _GetCustomDataGestureType(::Class_1_63BD26701645323A* a1, ::Class_1_1CBA230307F9C289_97* a2)
		{
			return ((::RPG::GameCore::ESwitchHandGestureType(*)(::PVOID, ::Class_1_63BD26701645323A*, ::Class_1_1CBA230307F9C289_97*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__GETCUSTOMDATAGESTURETYPE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ESwitchHandGestureType _ConvertHandStateToGestureType(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ESwitchHandGestureType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__CONVERTHANDSTATETOGESTURETYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ESwitchHandGestureType _ConvertOpTypeToGestureType(::Enum_3_0A3761FE34514D6C_78 a1)
		{
			return ((::RPG::GameCore::ESwitchHandGestureType(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_78))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__CONVERTOPTYPETOGESTURETYPE_OFFSET))(this, a1);
		}

		::System::Void _UpdateSaveCustomData(::Class_1_63BD26701645323A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_63BD26701645323A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__UPDATESAVECUSTOMDATA_OFFSET))(this, a1);
		}

		::System::Void _NotifyOp(::Class_1_963E317C37FB5E9A_102* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_102*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE__NOTIFYOP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_3497D086B05ACE3A*>* get_SaveDataMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_3497D086B05ACE3A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_GET_SAVEDATAMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_BEB73AACF0CDA957*>* get_SaveCustomDataMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_BEB73AACF0CDA957*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMODULE_GET_SAVECUSTOMDATAMAP_OFFSET))(this);
		}
	};
}
