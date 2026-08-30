#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A62CB52E907FFCCE_Struct_2_95931608322B6C4F.h"
#include "unitysdk/RPG/Client/FiveDimManager_DOFContext.h"
#include "unitysdk/RPG/Client/FiveDimManager_IsolatedGameInstanceInfo.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimCustomScreenTransferReason.h"
#include "unitysdk/RPG/GameCore/FiveDimCustomScreenTransferStyle.h"
#include "unitysdk/Struct_2_5674E7B417F2830A_1.h"
#include "unitysdk/Struct_2_9195B4006FDD1545.h"
#include "unitysdk/Struct_2_96E994F01ABB802D.h"
#include "unitysdk/Struct_2_B7F6733609A5D9EA.h"
#include "unitysdk/Struct_2_B82597A91E4CD455.h"
#include "unitysdk/Struct_2_EC98B14B1B23001B.h"
#include "unitysdk/Struct_2_F01DF3CDCF3FD7AC.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_188DB9F506845D56;
class Class_1_446771371137EDD3;
class Class_1_5A73DBEF56638408;
class Class_1_A62CB52E907FFCCE;
class Class_1_B4357A1C72BABC6B;
class Class_2_961AF441B82A290C_1;
class Class_2_AD85F183D36B3AFD;
class Class_3_1E4F9B0ED3BF21DE;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class FiveDimManager_AsyncCreateContext; }
namespace RPG::Client { class FiveDimManager_CameraContext; }
namespace RPG::Client { class FiveDimManager_PendingDestroyContext; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }
namespace RPG::GameCore { class FiveDimCameraDOFConfig; }
namespace RPG::GameCore { class FiveDimVCameraBlendConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityRef; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_FIVEDIMMANAGER_APPLYCAMERABLENDOUTCONFIG_OFFSET UNITYSDK_OFFSET(0x190C13C0)
#define RPG_CLIENT_FIVEDIMMANAGER_APPLYCAMERADOFCONFIG_OFFSET UNITYSDK_OFFSET(0x190C1640)
#define RPG_CLIENT_FIVEDIMMANAGER_APPLYLEAVEFROM_1_OFFSET UNITYSDK_OFFSET(0x190C2790)
#define RPG_CLIENT_FIVEDIMMANAGER_APPLYLEAVEFROM_OFFSET UNITYSDK_OFFSET(0x190C2640)
#define RPG_CLIENT_FIVEDIMMANAGER_APPLYTELEPORTTO_OFFSET UNITYSDK_OFFSET(0x190C24D0)
#define RPG_CLIENT_FIVEDIMMANAGER_BEGINEXTERNALOBJECTHIDDEN_OFFSET UNITYSDK_OFFSET(0x190BA5A0)
#define RPG_CLIENT_FIVEDIMMANAGER_CANCELCREATEFIVEDIMENTITYASYNC_OFFSET UNITYSDK_OFFSET(0x190B7280)
#define RPG_CLIENT_FIVEDIMMANAGER_CLEARISOLATEDINSTANCE_OFFSET UNITYSDK_OFFSET(0x190BAB50)
#define RPG_CLIENT_FIVEDIMMANAGER_CLEARLEAVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x190C2470)
#define RPG_CLIENT_FIVEDIMMANAGER_CLEARTELEPORTINSTANCE_OFFSET UNITYSDK_OFFSET(0x190C2410)
#define RPG_CLIENT_FIVEDIMMANAGER_CLOSECUSTOMSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0x190C30A0)
#define RPG_CLIENT_FIVEDIMMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x190BF1B0)
#define RPG_CLIENT_FIVEDIMMANAGER_ENABLETHREADTASK_OFFSET UNITYSDK_OFFSET(0x190BE960)
#define RPG_CLIENT_FIVEDIMMANAGER_ENDOFLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x190C2040)
#define RPG_CLIENT_FIVEDIMMANAGER_FINISHCREATEFIVEDIMENTITYIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x190BDB60)
#define RPG_CLIENT_FIVEDIMMANAGER_FINISHPENDINGDESTROYFIVEDIMCONTEXTIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x190BE3D0)
#define RPG_CLIENT_FIVEDIMMANAGER_FLUSHENTITYCALCLODRESULT_OFFSET UNITYSDK_OFFSET(0x190BEBE0)
#define RPG_CLIENT_FIVEDIMMANAGER_GETCAMERAACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x190C1360)
#define RPG_CLIENT_FIVEDIMMANAGER_GETFIVEDIMGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x190BECB0)
#define RPG_CLIENT_FIVEDIMMANAGER_GETTELEPORTFIVEDIMINFO_OFFSET UNITYSDK_OFFSET(0x190C2890)
#define RPG_CLIENT_FIVEDIMMANAGER_GET_ENABLESYNCLOADINGINSTANCE_OFFSET UNITYSDK_OFFSET(0x190C51C0)
#define RPG_CLIENT_FIVEDIMMANAGER_GET_FIVEDIMAUDIOMANAGER_OFFSET UNITYSDK_OFFSET(0x190C51A0)
#define RPG_CLIENT_FIVEDIMMANAGER_GET_ISLEAVINGINSTANCE_OFFSET UNITYSDK_OFFSET(0x190C5170)
#define RPG_CLIENT_FIVEDIMMANAGER_GET_ISOLATEDGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x190C5180)
#define RPG_CLIENT_FIVEDIMMANAGER_GET_ISTELEPORTINGORLEAVING_OFFSET UNITYSDK_OFFSET(0x190BFF60)
#define RPG_CLIENT_FIVEDIMMANAGER_HASCAMERALIVE_OFFSET UNITYSDK_OFFSET(0x190C1560)
#define RPG_CLIENT_FIVEDIMMANAGER_HASISOLATEDINSTANCE_OFFSET UNITYSDK_OFFSET(0x190B7C90)
#define RPG_CLIENT_FIVEDIMMANAGER_HIDEALLFIVEDIM_OFFSET UNITYSDK_OFFSET(0x190C5060)
#define RPG_CLIENT_FIVEDIMMANAGER_HIDEEXTERNALOBJECT_OFFSET UNITYSDK_OFFSET(0x190BD5F0)
#define RPG_CLIENT_FIVEDIMMANAGER_INITONFINALSTEP_OFFSET UNITYSDK_OFFSET(0x190BF7D0)
#define RPG_CLIENT_FIVEDIMMANAGER_ISCUSTOMSCREENTRANSFERFULLOPENED_OFFSET UNITYSDK_OFFSET(0x190C3390)
#define RPG_CLIENT_FIVEDIMMANAGER_ISCUSTOMSCREENTRANSFEROPENED_OFFSET UNITYSDK_OFFSET(0x190C3340)
#define RPG_CLIENT_FIVEDIMMANAGER_ISISOLATEDSHOWINSTANCE_OFFSET UNITYSDK_OFFSET(0x190B7CE0)
#define RPG_CLIENT_FIVEDIMMANAGER_ISLEAVENEEDMAPROTATIONSWITCHPOSE_OFFSET UNITYSDK_OFFSET(0x190C2C70)
#define RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_1_OFFSET UNITYSDK_OFFSET(0x190C08E0)
#define RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_2_OFFSET UNITYSDK_OFFSET(0x190B9530)
#define RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_OFFSET UNITYSDK_OFFSET(0x190B9890)
#define RPG_CLIENT_FIVEDIMMANAGER_OPENCUSTOMSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0x190C2E10)
#define RPG_CLIENT_FIVEDIMMANAGER_REGISTERGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x190B22C0)
#define RPG_CLIENT_FIVEDIMMANAGER_REMOVEPENDINGUNLOADINSTANCECONTAINER_OFFSET UNITYSDK_OFFSET(0x190C38F0)
#define RPG_CLIENT_FIVEDIMMANAGER_REQUESTCREATEFIVEDIMENTITYASYNC_OFFSET UNITYSDK_OFFSET(0x190BD970)
#define RPG_CLIENT_FIVEDIMMANAGER_REQUESTDESTROYFIVEDIMCONTEXT_OFFSET UNITYSDK_OFFSET(0x190B73C0)
#define RPG_CLIENT_FIVEDIMMANAGER_REQUESTUNLOADINSTANCECONTAINER_OFFSET UNITYSDK_OFFSET(0x190C3A40)
#define RPG_CLIENT_FIVEDIMMANAGER_RESTOREALLHIDDENEXTERNALOBJECTS_OFFSET UNITYSDK_OFFSET(0x190BBCA0)
#define RPG_CLIENT_FIVEDIMMANAGER_SETACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x190C0ED0)
#define RPG_CLIENT_FIVEDIMMANAGER_SETCAMERAFOCUS_OFFSET UNITYSDK_OFFSET(0x190BB420)
#define RPG_CLIENT_FIVEDIMMANAGER_SETISOLATEDINSTANCE_OFFSET UNITYSDK_OFFSET(0x190BA8E0)
#define RPG_CLIENT_FIVEDIMMANAGER_SETNEEDCHENLINGFRAMECAPTURE_OFFSET UNITYSDK_OFFSET(0x190C3440)
#define RPG_CLIENT_FIVEDIMMANAGER_SET_ENABLESYNCLOADINGINSTANCE_OFFSET UNITYSDK_OFFSET(0x190C51D0)
#define RPG_CLIENT_FIVEDIMMANAGER_SET_FIVEDIMAUDIOMANAGER_OFFSET UNITYSDK_OFFSET(0x190C51B0)
#define RPG_CLIENT_FIVEDIMMANAGER_SET_ISOLATEDGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x190C5190)
#define RPG_CLIENT_FIVEDIMMANAGER_SYNCCUSTOMSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0x190C3200)
#define RPG_CLIENT_FIVEDIMMANAGER_SYNCTRANSFORMBEFOREFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x190C1B70)
#define RPG_CLIENT_FIVEDIMMANAGER_TASKFORCESETFIVEDIMLOADMODE_OFFSET UNITYSDK_OFFSET(0x190C4F10)
#define RPG_CLIENT_FIVEDIMMANAGER_TELEPORTTO_1_OFFSET UNITYSDK_OFFSET(0x190C0630)
#define RPG_CLIENT_FIVEDIMMANAGER_TELEPORTTO_OFFSET UNITYSDK_OFFSET(0x190B9110)
#define RPG_CLIENT_FIVEDIMMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x190C1BD0)
#define RPG_CLIENT_FIVEDIMMANAGER_TRIGGERFIVEDIMPRELOAD_OFFSET UNITYSDK_OFFSET(0x190C4FD0)
#define RPG_CLIENT_FIVEDIMMANAGER_TRYREQUESTLEAVEGAMEWHENINSTANCEDESTROY_OFFSET UNITYSDK_OFFSET(0x190B3940)
#define RPG_CLIENT_FIVEDIMMANAGER_UNREGISTERGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x190B3830)
#define RPG_CLIENT_FIVEDIMMANAGER__APPLYDOF_OFFSET UNITYSDK_OFFSET(0x190C3D70)
#define RPG_CLIENT_FIVEDIMMANAGER__APPLYINITIALGAME_OFFSET UNITYSDK_OFFSET(0x190BF880)
#define RPG_CLIENT_FIVEDIMMANAGER__APPLYISOLATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x190C1710)
#define RPG_CLIENT_FIVEDIMMANAGER__CALCFIVEDIMINSTANCEISINCAMERAFRUSTUM_OFFSET UNITYSDK_OFFSET(0x190C4CC0)
#define RPG_CLIENT_FIVEDIMMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x190C51E0)
#define RPG_CLIENT_FIVEDIMMANAGER__CLEARCREATECONTEXT_OFFSET UNITYSDK_OFFSET(0x190BE190)
#define RPG_CLIENT_FIVEDIMMANAGER__CLEARDESTROYCONTEXT_OFFSET UNITYSDK_OFFSET(0x190BE900)
#define RPG_CLIENT_FIVEDIMMANAGER__CLEARHIDDENEXTERNALOBJECTS_OFFSET UNITYSDK_OFFSET(0x190BD920)
#define RPG_CLIENT_FIVEDIMMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x190BEE30)
#define RPG_CLIENT_FIVEDIMMANAGER__DISPOSETHREADTASK_OFFSET UNITYSDK_OFFSET(0x190BEA70)
#define RPG_CLIENT_FIVEDIMMANAGER__GETDOFFOCUSLENGTH_OFFSET UNITYSDK_OFFSET(0x190C4580)
#define RPG_CLIENT_FIVEDIMMANAGER__GETPLAYER3DTRANSFORM_OFFSET UNITYSDK_OFFSET(0x190C07A0)
#define RPG_CLIENT_FIVEDIMMANAGER__INITTHREADTASK_OFFSET UNITYSDK_OFFSET(0x190BE9D0)
#define RPG_CLIENT_FIVEDIMMANAGER__ISINITIALGAMELOADFINISH_OFFSET UNITYSDK_OFFSET(0x190C3620)
#define RPG_CLIENT_FIVEDIMMANAGER__ONFIVEDIMINSTANCECHANGED_OFFSET UNITYSDK_OFFSET(0x190C3490)
#define RPG_CLIENT_FIVEDIMMANAGER__ONPIPELINECAMERADEACTIVATE_OFFSET UNITYSDK_OFFSET(0x190BEF90)
#define RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLECREATECONTEXT_OFFSET UNITYSDK_OFFSET(0x190BDCC0)
#define RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLEDESTROYCONTEXTFINISH_OFFSET UNITYSDK_OFFSET(0x190BE840)
#define RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLEDESTROYCONTEXT_OFFSET UNITYSDK_OFFSET(0x190BE550)
#define RPG_CLIENT_FIVEDIMMANAGER__RESETDOF_OFFSET UNITYSDK_OFFSET(0x190BF5F0)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKCHENLINGFRAMECAPTURE_OFFSET UNITYSDK_OFFSET(0x190C2330)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKDOF_OFFSET UNITYSDK_OFFSET(0x190C1EE0)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKFRAMESLICECREATEENTITIES_OFFSET UNITYSDK_OFFSET(0x190BDDD0)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKFRAMESLICEDESTROYENTITIES_OFFSET UNITYSDK_OFFSET(0x190BE650)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKLEAVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x190C1D80)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKPENDINGUNLOADINSTANCECONTAINERS_OFFSET UNITYSDK_OFFSET(0x190C3B90)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKTELEPORTINSTANCE_OFFSET UNITYSDK_OFFSET(0x190C1CC0)
#define RPG_CLIENT_FIVEDIMMANAGER__TRYGETITEMOVERRIDESYSTEM_OFFSET UNITYSDK_OFFSET(0x190BD820)
#define RPG_CLIENT_FIVEDIMMANAGER__TRYREFRESHGROUPLOADSTATE_OFFSET UNITYSDK_OFFSET(0x190C1E70)
#define RPG_CLIENT_FIVEDIMMANAGER__TRYUNLOADINSTANCECONTAINER_OFFSET UNITYSDK_OFFSET(0x190C26B0)
#define RPG_CLIENT_FIVEDIMMANAGER__UPDATEACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x190C1080)
#define RPG_CLIENT_FIVEDIMMANAGER__UPDATEDOFCONTEXT_OFFSET UNITYSDK_OFFSET(0x190C4370)
#define RPG_CLIENT_FIVEDIMMANAGER__UPDATEFIVEDIMINSTANCERENDER_OFFSET UNITYSDK_OFFSET(0x190C20A0)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimManager_TypeDefinitionIndex = 60637;

	class FiveDimManager : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FiveDimVCameraBlendConfig** StaticGet_s_CutBlendConfig()
		{
			return (::RPG::GameCore::FiveDimVCameraBlendConfig**)Il2CppClass::FromTypeDefinitionIndex(FiveDimManager_TypeDefinitionIndex)->GetStaticField(0x13450);
		}
		// static const ::System::Int32 s_MaxProcessEntityCount = 0x14; // 0x0
		::RPG::PoolList_1<::Struct_2_5674E7B417F2830A_1>* _HiddenExternalHandles; // 0x10
		::Class_2_961AF441B82A290C_1* _LodThreadTask; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::FiveDimGameInstance*, ::RPG::Client::FiveDimManager_CameraContext*>* _ActiveCameras; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::FiveDimManager_AsyncCreateContext*>* _CreateContext; // 0x28
		::Class_1_446771371137EDD3* _LeaveInstance; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::FiveDimGameInstance*>* _AllGameInstances; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::FiveDimManager_PendingDestroyContext*>* _PendingDestroyContextPool; // 0x40
		::Class_1_A62CB52E907FFCCE* _PipelineCameraController; // 0x48
		::Class_1_188DB9F506845D56* _TeleportInstance; // 0x50
		::Class_1_5A73DBEF56638408* _FiveDimAudioManager_k__BackingField; // 0x58
		::RPG::PoolHashSet_1<::UnityEngine::GameObject*>* _HiddenExternalGOs; // 0x60
		::RPG::Client::FiveDimManager_CameraContext* _LastCameraContext; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::FiveDimGameInstance*>* _PendingUnloadGameInstances; // 0x70
		::RPG::Client::FiveDimGameInstance* _CameraFocusInstance; // 0x78
		::RPG::Client::FiveDimManager_DOFContext _DOFContext; // 0x80
		::RPG::GameCore::FiveDimCustomScreenTransferStyle _LastCustomScreenTransferStyle; // 0x98
		::System::Nullable_1<::RPG::Client::FiveDimManager_IsolatedGameInstanceInfo> _IsolatedGameInstance_k__BackingField; // 0x9C
		::RPG::GameCore::FiveDimCustomScreenTransferStyle _CurrentCustomScreenTransferStyle; // 0xAC
		::System::Boolean _NeedChenLingFrameCapture; // 0xB0
		::System::Boolean _EnableSyncLoadingInstance_k__BackingField; // 0xB1
		::System::Boolean _ShouldRefreshGroupLoadState; // 0xB2
		::System::Boolean _IsBeginExternalObjectHidden; // 0xB3
		::System::Int32 _LastSyncTransformFrameCount; // 0xB4
		::RPG::Client::LittleGame::FiveDim::FiveDimCustomScreenTransferReason _CustomScreenTransferReason; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__CCTOR_OFFSET))();
		}

		::System::Void BeginExternalObjectHidden()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_BEGINEXTERNALOBJECTHIDDEN_OFFSET))(this);
		}

		::System::Boolean HideExternalObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_HIDEEXTERNALOBJECT_OFFSET))(this, a1);
		}

		::System::Void RestoreAllHiddenExternalObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_RESTOREALLHIDDENEXTERNALOBJECTS_OFFSET))(this);
		}

		::System::Boolean _TryGetItemOverrideSystem(::Class_2_AD85F183D36B3AFD*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_AD85F183D36B3AFD*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TRYGETITEMOVERRIDESYSTEM_OFFSET))(this, a1);
		}

		::System::Void _ClearHiddenExternalObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__CLEARHIDDENEXTERNALOBJECTS_OFFSET))(this);
		}

		::System::Void RequestCreateFiveDimEntityAsync(::RPG::Client::FiveDimGameInstance* a1, ::Class_3_1E4F9B0ED3BF21DE* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::Class_3_1E4F9B0ED3BF21DE*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_REQUESTCREATEFIVEDIMENTITYASYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CancelCreateFiveDimEntityAsync(::RPG::Client::FiveDimGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CANCELCREATEFIVEDIMENTITYASYNC_OFFSET))(this, a1);
		}

		::System::Void FinishCreateFiveDimEntityImmediately(::RPG::Client::FiveDimGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_FINISHCREATEFIVEDIMENTITYIMMEDIATELY_OFFSET))(this, a1);
		}

		::System::Void _TickFrameSliceCreateEntities(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKFRAMESLICECREATEENTITIES_OFFSET))(this, a1);
		}

		::System::Void _ProcessSingleCreateContext(::RPG::Client::FiveDimManager_AsyncCreateContext* a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimManager_AsyncCreateContext*, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLECREATECONTEXT_OFFSET))(this, a1, a2);
		}

		::System::Void _ClearCreateContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__CLEARCREATECONTEXT_OFFSET))(this);
		}

		::System::Void RequestDestroyFiveDimContext(::Class_3_1E4F9B0ED3BF21DE* a1, ::Class_1_B4357A1C72BABC6B* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_1E4F9B0ED3BF21DE*, ::Class_1_B4357A1C72BABC6B*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_REQUESTDESTROYFIVEDIMCONTEXT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FinishPendingDestroyFiveDimContextImmediate(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_FINISHPENDINGDESTROYFIVEDIMCONTEXTIMMEDIATE_OFFSET))(this, a1, a2);
		}

		::System::Void _TickFrameSliceDestroyEntities(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKFRAMESLICEDESTROYENTITIES_OFFSET))(this, a1);
		}

		::System::Void _ProcessSingleDestroyContext(::RPG::Client::FiveDimManager_PendingDestroyContext* a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimManager_PendingDestroyContext*, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLEDESTROYCONTEXT_OFFSET))(this, a1, a2);
		}

		::System::Void _ProcessSingleDestroyContextFinish(::RPG::Client::FiveDimManager_PendingDestroyContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimManager_PendingDestroyContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLEDESTROYCONTEXTFINISH_OFFSET))(this, a1);
		}

		::System::Void _ClearDestroyContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__CLEARDESTROYCONTEXT_OFFSET))(this);
		}

		::System::Void EnableThreadTask(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ENABLETHREADTASK_OFFSET))(this, a1);
		}

		::System::Void _InitThreadTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__INITTHREADTASK_OFFSET))(this);
		}

		::System::Void _DisposeThreadTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__DISPOSETHREADTASK_OFFSET))(this);
		}

		::System::Void FlushEntityCalcLodResult(::Struct_2_EC98B14B1B23001B a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_EC98B14B1B23001B))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_FLUSHENTITYCALCLODRESULT_OFFSET))(this, a1);
		}

		::System::Void _OnPipelineCameraDeactivate(::Class_1_A62CB52E907FFCCE_Struct_2_95931608322B6C4F a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A62CB52E907FFCCE_Struct_2_95931608322B6C4F))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__ONPIPELINECAMERADEACTIVATE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void InitOnFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_INITONFINALSTEP_OFFSET))(this);
		}

		::System::Void TeleportTo(::Struct_2_F01DF3CDCF3FD7AC a1, ::Struct_2_B82597A91E4CD455 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_F01DF3CDCF3FD7AC, ::Struct_2_B82597A91E4CD455))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TELEPORTTO_OFFSET))(this, a1, a2);
		}

		::System::Void TeleportTo_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TELEPORTTO_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LeaveCurrentGame(::Struct_2_B7F6733609A5D9EA a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_B7F6733609A5D9EA))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_OFFSET))(this, a1);
		}

		::System::Void LeaveCurrentGame_1(::RPG::GameCore::LevelEntityRef* a1, ::Struct_2_B7F6733609A5D9EA a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityRef*, ::Struct_2_B7F6733609A5D9EA))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_1_OFFSET))(this, a1, a2);
		}

		::System::Void LeaveCurrentGame_2(::Struct_2_96E994F01ABB802D a1, ::Struct_2_B7F6733609A5D9EA a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_96E994F01ABB802D, ::Struct_2_B7F6733609A5D9EA))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_2_OFFSET))(this, a1, a2);
		}

		::System::Void TryRequestLeaveGameWhenInstanceDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TRYREQUESTLEAVEGAMEWHENINSTANCEDESTROY_OFFSET))(this);
		}

		::System::Void RegisterGameInstance(::RPG::Client::FiveDimGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_REGISTERGAMEINSTANCE_OFFSET))(this, a1);
		}

		::System::Void UnRegisterGameInstance(::RPG::Client::FiveDimGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_UNREGISTERGAMEINSTANCE_OFFSET))(this, a1);
		}

		::System::Void SetActiveCamera(::RPG::Client::FiveDimGameInstance* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2, ::RPG::GameCore::FiveDimVCameraBlendConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::RPG::GameCore::FiveDimVCameraBlendConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SETACTIVECAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetCameraFocus(::RPG::Client::FiveDimGameInstance* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SETCAMERAFOCUS_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FiveDimGameInstance* GetCameraActiveInstance()
		{
			return ((::RPG::Client::FiveDimGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GETCAMERAACTIVEINSTANCE_OFFSET))(this);
		}

		::System::Void ApplyCameraBlendOutConfig(::RPG::Client::FiveDimGameInstance* a1, ::RPG::GameCore::FiveDimVCameraBlendConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::RPG::GameCore::FiveDimVCameraBlendConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_APPLYCAMERABLENDOUTCONFIG_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasCameraLive(::RPG::Client::FiveDimGameInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_HASCAMERALIVE_OFFSET))(this, a1);
		}

		::System::Void ApplyCameraDOFConfig(::RPG::Client::FiveDimGameInstance* a1, ::RPG::GameCore::FiveDimCameraDOFConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::RPG::GameCore::FiveDimCameraDOFConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_APPLYCAMERADOFCONFIG_OFFSET))(this, a1, a2);
		}

		::System::Void SetIsolatedInstance(::RPG::Client::FiveDimGameInstance* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SETISOLATEDINSTANCE_OFFSET))(this, a1, a2);
		}

		::System::Void ClearIsolatedInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CLEARISOLATEDINSTANCE_OFFSET))(this);
		}

		::System::Boolean HasIsolatedInstance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_HASISOLATEDINSTANCE_OFFSET))(this);
		}

		::System::Boolean IsIsolatedShowInstance(::RPG::Client::FiveDimGameInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ISISOLATEDSHOWINSTANCE_OFFSET))(this, a1);
		}

		::System::Void SyncTransformBeforeFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SYNCTRANSFORMBEFOREFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void EndOfLateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ENDOFLATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void ClearTeleportInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CLEARTELEPORTINSTANCE_OFFSET))(this);
		}

		::System::Void ClearLeaveInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CLEARLEAVEINSTANCE_OFFSET))(this);
		}

		::System::Void ApplyTeleportTo(::RPG::Client::FiveDimGameInstance* a1, ::Struct_2_9195B4006FDD1545 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::Struct_2_9195B4006FDD1545, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_APPLYTELEPORTTO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ApplyLeaveFrom(::RPG::Client::FiveDimGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_APPLYLEAVEFROM_OFFSET))(this, a1);
		}

		::System::Void ApplyLeaveFrom_1(::RPG::Client::FiveDimGameInstance* a1, ::Struct_2_FC595D1A561D8C6F a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::Struct_2_FC595D1A561D8C6F))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_APPLYLEAVEFROM_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetTeleportFiveDimInfo(::System::UInt32& a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GETTELEPORTFIVEDIMINFO_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsLeaveNeedMapRotationSwitchPose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ISLEAVENEEDMAPROTATIONSWITCHPOSE_OFFSET))(this);
		}

		::System::Void OpenCustomScreenTransfer(::RPG::Client::LittleGame::FiveDim::FiveDimCustomScreenTransferReason a1, ::RPG::GameCore::FiveDimCustomScreenTransferStyle a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimCustomScreenTransferReason, ::RPG::GameCore::FiveDimCustomScreenTransferStyle))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_OPENCUSTOMSCREENTRANSFER_OFFSET))(this, a1, a2);
		}

		::System::Void CloseCustomScreenTransfer(::RPG::Client::LittleGame::FiveDim::FiveDimCustomScreenTransferReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimCustomScreenTransferReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CLOSECUSTOMSCREENTRANSFER_OFFSET))(this, a1);
		}

		::System::Void SyncCustomScreenTransfer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SYNCCUSTOMSCREENTRANSFER_OFFSET))(this);
		}

		::System::Boolean IsCustomScreenTransferOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ISCUSTOMSCREENTRANSFEROPENED_OFFSET))(this);
		}

		::System::Boolean IsCustomScreenTransferFullOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ISCUSTOMSCREENTRANSFERFULLOPENED_OFFSET))(this);
		}

		::System::Void SetNeedChenLingFrameCapture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SETNEEDCHENLINGFRAMECAPTURE_OFFSET))(this);
		}

		::System::Void _OnFiveDimInstanceChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__ONFIVEDIMINSTANCECHANGED_OFFSET))(this, a1);
		}

		::System::Void _TryRefreshGroupLoadState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TRYREFRESHGROUPLOADSTATE_OFFSET))(this);
		}

		::System::Void _ApplyInitialGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__APPLYINITIALGAME_OFFSET))(this);
		}

		::System::Boolean _IsInitialGameLoadFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__ISINITIALGAMELOADFINISH_OFFSET))(this);
		}

		::System::Void _TickTeleportInstance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKTELEPORTINSTANCE_OFFSET))(this, a1);
		}

		::System::Void _TickLeaveInstance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKLEAVEINSTANCE_OFFSET))(this, a1);
		}

		::System::Void _TryUnloadInstanceContainer(::RPG::Client::FiveDimGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TRYUNLOADINSTANCECONTAINER_OFFSET))(this, a1);
		}

		::System::Void RemovePendingUnloadInstanceContainer(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_REMOVEPENDINGUNLOADINSTANCECONTAINER_OFFSET))(this, a1, a2);
		}

		::System::Void RequestUnloadInstanceContainer(::RPG::Client::FiveDimGameInstance* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_REQUESTUNLOADINSTANCECONTAINER_OFFSET))(this, a1, a2);
		}

		::System::Void _TickPendingUnloadInstanceContainers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKPENDINGUNLOADINSTANCECONTAINERS_OFFSET))(this);
		}

		::System::Void _ApplyIsolateInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__APPLYISOLATEINSTANCE_OFFSET))(this);
		}

		::System::Void _UpdateActiveCamera(::RPG::Client::FiveDimGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__UPDATEACTIVECAMERA_OFFSET))(this, a1);
		}

		::System::Void _TickDOF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKDOF_OFFSET))(this, a1);
		}

		::System::Void _UpdateDOFContext(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__UPDATEDOFCONTEXT_OFFSET))(this, a1);
		}

		::System::Boolean _GetDOFFocusLength(::System::Single& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__GETDOFFOCUSLENGTH_OFFSET))(this, a1);
		}

		::System::Void _ApplyDOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__APPLYDOF_OFFSET))(this);
		}

		::System::Void _ResetDOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__RESETDOF_OFFSET))(this);
		}

		::System::Boolean _GetPlayer3DTransform(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__GETPLAYER3DTRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Void _TickChenLingFrameCapture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKCHENLINGFRAMECAPTURE_OFFSET))(this);
		}

		::System::Void _UpdateFiveDimInstanceRender()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__UPDATEFIVEDIMINSTANCERENDER_OFFSET))(this);
		}

		::System::Boolean _CalcFiveDimInstanceIsInCameraFrustum(::RPG::Client::FiveDimGameInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__CALCFIVEDIMINSTANCEISINCAMERAFRUSTUM_OFFSET))(this, a1);
		}

		::RPG::Client::FiveDimGameInstance* GetFiveDimGameInstance(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::FiveDimGameInstance*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GETFIVEDIMGAMEINSTANCE_OFFSET))(this, a1, a2);
		}

		::System::Void TaskForceSetFiveDimLoadMode(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TASKFORCESETFIVEDIMLOADMODE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TriggerFiveDimPreload(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TRIGGERFIVEDIMPRELOAD_OFFSET))(this, a1, a2);
		}

		::System::Void HideAllFiveDim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_HIDEALLFIVEDIM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTeleportingOrLeaving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GET_ISTELEPORTINGORLEAVING_OFFSET))(this);
		}

		::System::Boolean get_IsLeavingInstance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GET_ISLEAVINGINSTANCE_OFFSET))(this);
		}

		::System::Nullable_1<::RPG::Client::FiveDimManager_IsolatedGameInstanceInfo> get_IsolatedGameInstance()
		{
			return ((::System::Nullable_1<::RPG::Client::FiveDimManager_IsolatedGameInstanceInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GET_ISOLATEDGAMEINSTANCE_OFFSET))(this);
		}

		::System::Void set_IsolatedGameInstance(::System::Nullable_1<::RPG::Client::FiveDimManager_IsolatedGameInstanceInfo> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::FiveDimManager_IsolatedGameInstanceInfo>))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SET_ISOLATEDGAMEINSTANCE_OFFSET))(this, a1);
		}

		::Class_1_5A73DBEF56638408* get_FiveDimAudioManager()
		{
			return ((::Class_1_5A73DBEF56638408*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GET_FIVEDIMAUDIOMANAGER_OFFSET))(this);
		}

		::System::Void set_FiveDimAudioManager(::Class_1_5A73DBEF56638408* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A73DBEF56638408*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SET_FIVEDIMAUDIOMANAGER_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableSyncLoadingInstance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GET_ENABLESYNCLOADINGINSTANCE_OFFSET))(this);
		}

		::System::Void set_EnableSyncLoadingInstance(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SET_ENABLESYNCLOADINGINSTANCE_OFFSET))(this, a1);
		}
	};
}
