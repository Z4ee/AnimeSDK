#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87ACBF6FE3D55AF4_Struct_2_95931608322B6C4F.h"
#include "unitysdk/RPG/Client/FiveDimCustomScreenTransferReason.h"
#include "unitysdk/RPG/Client/FiveDimManager_DOFContext.h"
#include "unitysdk/RPG/Client/FiveDimManager_IsolatedGameInstanceInfo.h"
#include "unitysdk/Struct_2_5674E7B417F2830A_1.h"
#include "unitysdk/Struct_2_8EA636D1EE0F0A0F.h"
#include "unitysdk/Struct_2_9195B4006FDD1545.h"
#include "unitysdk/Struct_2_B7F6733609A5D9EA.h"
#include "unitysdk/Struct_2_B82597A91E4CD455.h"
#include "unitysdk/Struct_2_EC98B14B1B23001B.h"
#include "unitysdk/Struct_2_F01DF3CDCF3FD7AC.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_24C2E7EF22229C6A;
class Class_1_3F6460165989C3EF;
class Class_1_5A73DBEF56638408;
class Class_1_87ACBF6FE3D55AF4;
class Class_1_95F843019E01BB5E;
class Class_2_54A5646FB63D2B4F;
class Class_2_81A4CCAF8860A4C5_1;
class Class_3_1A92845FAFA5EC77;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
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
namespace RPG::GameCore { class LevelGraphConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_FIVEDIMMANAGER_APPLYCAMERABLENDOUTCONFIG_OFFSET UNITYSDK_OFFSET(0xA3A83A0)
#define RPG_CLIENT_FIVEDIMMANAGER_APPLYCAMERADOFCONFIG_OFFSET UNITYSDK_OFFSET(0xA3A8640)
#define RPG_CLIENT_FIVEDIMMANAGER_APPLYLEAVEFROM_1_OFFSET UNITYSDK_OFFSET(0xA3A99B0)
#define RPG_CLIENT_FIVEDIMMANAGER_APPLYLEAVEFROM_OFFSET UNITYSDK_OFFSET(0xA3A9860)
#define RPG_CLIENT_FIVEDIMMANAGER_APPLYTELEPORTTO_OFFSET UNITYSDK_OFFSET(0xA3A96F0)
#define RPG_CLIENT_FIVEDIMMANAGER_BEGINEXTERNALOBJECTHIDDEN_OFFSET UNITYSDK_OFFSET(0xA3A09A0)
#define RPG_CLIENT_FIVEDIMMANAGER_CANCELCREATEFIVEDIMENTITYASYNC_OFFSET UNITYSDK_OFFSET(0xA3A4FC0)
#define RPG_CLIENT_FIVEDIMMANAGER_CLEARISOLATEDINSTANCE_OFFSET UNITYSDK_OFFSET(0xA3A0F60)
#define RPG_CLIENT_FIVEDIMMANAGER_CLEARLEAVEINSTANCE_OFFSET UNITYSDK_OFFSET(0xA3A9690)
#define RPG_CLIENT_FIVEDIMMANAGER_CLEARTELEPORTINSTANCE_OFFSET UNITYSDK_OFFSET(0xA3A9630)
#define RPG_CLIENT_FIVEDIMMANAGER_CLOSECUSTOMSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xA3A9E70)
#define RPG_CLIENT_FIVEDIMMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3A6680)
#define RPG_CLIENT_FIVEDIMMANAGER_ENABLETHREADTASK_OFFSET UNITYSDK_OFFSET(0xA3A5EA0)
#define RPG_CLIENT_FIVEDIMMANAGER_ENDOFLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA3A9370)
#define RPG_CLIENT_FIVEDIMMANAGER_FINISHCREATEFIVEDIMENTITYIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xA3A5100)
#define RPG_CLIENT_FIVEDIMMANAGER_FINISHPENDINGDESTROYFIVEDIMCONTEXTIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xA3A5960)
#define RPG_CLIENT_FIVEDIMMANAGER_FLUSHENTITYCALCLODRESULT_OFFSET UNITYSDK_OFFSET(0xA3A60D0)
#define RPG_CLIENT_FIVEDIMMANAGER_GETCAMERAACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0xA3A8340)
#define RPG_CLIENT_FIVEDIMMANAGER_GETFIVEDIMGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xA3A61A0)
#define RPG_CLIENT_FIVEDIMMANAGER_GETLEVELGRAPHCONFIG_OFFSET UNITYSDK_OFFSET(0xA3ABAB0)
#define RPG_CLIENT_FIVEDIMMANAGER_GETTELEPORTFIVEDIMINFO_OFFSET UNITYSDK_OFFSET(0xA3A9AB0)
#define RPG_CLIENT_FIVEDIMMANAGER_GET_ENABLESYNCLOADINGINSTANCE_OFFSET UNITYSDK_OFFSET(0xA3ABC90)
#define RPG_CLIENT_FIVEDIMMANAGER_GET_FIVEDIMAUDIOMANAGER_OFFSET UNITYSDK_OFFSET(0xA3ABC70)
#define RPG_CLIENT_FIVEDIMMANAGER_GET_ISOLATEDGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xA3ABC50)
#define RPG_CLIENT_FIVEDIMMANAGER_GET_ISTELEPORTINGORLEAVING_OFFSET UNITYSDK_OFFSET(0xA3A6FF0)
#define RPG_CLIENT_FIVEDIMMANAGER_HASCAMERALIVE_OFFSET UNITYSDK_OFFSET(0xA3A8550)
#define RPG_CLIENT_FIVEDIMMANAGER_HASISOLATEDINSTANCE_OFFSET UNITYSDK_OFFSET(0xA3A8B50)
#define RPG_CLIENT_FIVEDIMMANAGER_HIDEALLFIVEDIM_OFFSET UNITYSDK_OFFSET(0xA3AB9B0)
#define RPG_CLIENT_FIVEDIMMANAGER_HIDEEXTERNALOBJECT_OFFSET UNITYSDK_OFFSET(0xA3A4B90)
#define RPG_CLIENT_FIVEDIMMANAGER_INITONFINALSTEP_OFFSET UNITYSDK_OFFSET(0xA3A6A20)
#define RPG_CLIENT_FIVEDIMMANAGER_ISCUSTOMSCREENTRANSFERFULLOPENED_OFFSET UNITYSDK_OFFSET(0xA3AA130)
#define RPG_CLIENT_FIVEDIMMANAGER_ISCUSTOMSCREENTRANSFEROPENED_OFFSET UNITYSDK_OFFSET(0xA3AA0E0)
#define RPG_CLIENT_FIVEDIMMANAGER_ISISOLATEDSHOWINSTANCE_OFFSET UNITYSDK_OFFSET(0xA3A8BA0)
#define RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_1_OFFSET UNITYSDK_OFFSET(0xA3A76F0)
#define RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_2_OFFSET UNITYSDK_OFFSET(0xA39ECA0)
#define RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_OFFSET UNITYSDK_OFFSET(0xA39EF90)
#define RPG_CLIENT_FIVEDIMMANAGER_OPENCUSTOMSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xA3A9D30)
#define RPG_CLIENT_FIVEDIMMANAGER_REGISTERGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xA3A7E00)
#define RPG_CLIENT_FIVEDIMMANAGER_REMOVEPENDINGUNLOADINSTANCECONTAINER_OFFSET UNITYSDK_OFFSET(0xA3AA640)
#define RPG_CLIENT_FIVEDIMMANAGER_REQUESTCREATEFIVEDIMENTITYASYNC_OFFSET UNITYSDK_OFFSET(0xA3A4E60)
#define RPG_CLIENT_FIVEDIMMANAGER_REQUESTDESTROYFIVEDIMCONTEXT_OFFSET UNITYSDK_OFFSET(0xA3A5750)
#define RPG_CLIENT_FIVEDIMMANAGER_REQUESTUNLOADINSTANCECONTAINER_OFFSET UNITYSDK_OFFSET(0xA3AA750)
#define RPG_CLIENT_FIVEDIMMANAGER_RESTOREALLHIDDENEXTERNALOBJECTS_OFFSET UNITYSDK_OFFSET(0xA3A1F70)
#define RPG_CLIENT_FIVEDIMMANAGER_SETACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xA3A7ED0)
#define RPG_CLIENT_FIVEDIMMANAGER_SETCAMERAFOCUS_OFFSET UNITYSDK_OFFSET(0xA3A1820)
#define RPG_CLIENT_FIVEDIMMANAGER_SETISOLATEDINSTANCE_OFFSET UNITYSDK_OFFSET(0xA3A0CE0)
#define RPG_CLIENT_FIVEDIMMANAGER_SETNEEDCHENLINGFRAMECAPTURE_OFFSET UNITYSDK_OFFSET(0xA3AA1E0)
#define RPG_CLIENT_FIVEDIMMANAGER_SET_ENABLESYNCLOADINGINSTANCE_OFFSET UNITYSDK_OFFSET(0xA3ABCA0)
#define RPG_CLIENT_FIVEDIMMANAGER_SET_FIVEDIMAUDIOMANAGER_OFFSET UNITYSDK_OFFSET(0xA3ABC80)
#define RPG_CLIENT_FIVEDIMMANAGER_SET_ISOLATEDGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xA3ABC60)
#define RPG_CLIENT_FIVEDIMMANAGER_SYNCCUSTOMSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xA3A9FB0)
#define RPG_CLIENT_FIVEDIMMANAGER_SYNCTRANSFORMBEFOREFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xA3A8EA0)
#define RPG_CLIENT_FIVEDIMMANAGER_TASKFORCESETFIVEDIMLOADMODE_OFFSET UNITYSDK_OFFSET(0xA3AB860)
#define RPG_CLIENT_FIVEDIMMANAGER_TELEPORTTO_1_OFFSET UNITYSDK_OFFSET(0xA3A7480)
#define RPG_CLIENT_FIVEDIMMANAGER_TELEPORTTO_OFFSET UNITYSDK_OFFSET(0xA39E940)
#define RPG_CLIENT_FIVEDIMMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xA3A8F00)
#define RPG_CLIENT_FIVEDIMMANAGER_TRIGGERFIVEDIMPRELOAD_OFFSET UNITYSDK_OFFSET(0xA3AB920)
#define RPG_CLIENT_FIVEDIMMANAGER_TRYREQUESTLEAVEGAMEWHENINSTANCEDESTROY_OFFSET UNITYSDK_OFFSET(0xA3A79F0)
#define RPG_CLIENT_FIVEDIMMANAGER_UNREGISTERGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xA3A7E60)
#define RPG_CLIENT_FIVEDIMMANAGER__APPLYDOF_OFFSET UNITYSDK_OFFSET(0xA3AABF0)
#define RPG_CLIENT_FIVEDIMMANAGER__APPLYINITIALGAME_OFFSET UNITYSDK_OFFSET(0xA3A6AC0)
#define RPG_CLIENT_FIVEDIMMANAGER__APPLYISOLATEINSTANCE_OFFSET UNITYSDK_OFFSET(0xA3A8710)
#define RPG_CLIENT_FIVEDIMMANAGER__CALCFIVEDIMINSTANCEISINCAMERAFRUSTUM_OFFSET UNITYSDK_OFFSET(0xA3AB610)
#define RPG_CLIENT_FIVEDIMMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3ABCB0)
#define RPG_CLIENT_FIVEDIMMANAGER__CLEARCREATECONTEXT_OFFSET UNITYSDK_OFFSET(0xA3A56A0)
#define RPG_CLIENT_FIVEDIMMANAGER__CLEARDESTROYCONTEXT_OFFSET UNITYSDK_OFFSET(0xA3A5E40)
#define RPG_CLIENT_FIVEDIMMANAGER__CLEARHIDDENEXTERNALOBJECTS_OFFSET UNITYSDK_OFFSET(0xA3A4E10)
#define RPG_CLIENT_FIVEDIMMANAGER__CLEARLEVELGRAPHCONFIGS_OFFSET UNITYSDK_OFFSET(0xA3A69C0)
#define RPG_CLIENT_FIVEDIMMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA3A6310)
#define RPG_CLIENT_FIVEDIMMANAGER__DISPOSETHREADTASK_OFFSET UNITYSDK_OFFSET(0xA3A5FC0)
#define RPG_CLIENT_FIVEDIMMANAGER__GETDOFFOCUSLENGTH_OFFSET UNITYSDK_OFFSET(0xA3AAEA0)
#define RPG_CLIENT_FIVEDIMMANAGER__GETPLAYER3DTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA3A75B0)
#define RPG_CLIENT_FIVEDIMMANAGER__INITTHREADTASK_OFFSET UNITYSDK_OFFSET(0xA3A5F20)
#define RPG_CLIENT_FIVEDIMMANAGER__ISINITIALGAMELOADFINISH_OFFSET UNITYSDK_OFFSET(0xA3AA3C0)
#define RPG_CLIENT_FIVEDIMMANAGER__ONFIVEDIMINSTANCECHANGED_OFFSET UNITYSDK_OFFSET(0xA3AA230)
#define RPG_CLIENT_FIVEDIMMANAGER__ONPIPELINECAMERADEACTIVATE_OFFSET UNITYSDK_OFFSET(0xA3A6460)
#define RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLECREATECONTEXT_OFFSET UNITYSDK_OFFSET(0xA3A5250)
#define RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLEDESTROYCONTEXTFINISH_OFFSET UNITYSDK_OFFSET(0xA3A5D80)
#define RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLEDESTROYCONTEXT_OFFSET UNITYSDK_OFFSET(0xA3A5AD0)
#define RPG_CLIENT_FIVEDIMMANAGER__RESETDOF_OFFSET UNITYSDK_OFFSET(0xA3A68F0)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKCHENLINGFRAMECAPTURE_OFFSET UNITYSDK_OFFSET(0xA3A9580)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKDOF_OFFSET UNITYSDK_OFFSET(0xA3A92A0)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKFRAMESLICECREATEENTITIES_OFFSET UNITYSDK_OFFSET(0xA3A5350)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKFRAMESLICEDESTROYENTITIES_OFFSET UNITYSDK_OFFSET(0xA3A5BC0)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKLEAVEINSTANCE_OFFSET UNITYSDK_OFFSET(0xA3A9140)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKPENDINGUNLOADINSTANCECONTAINERS_OFFSET UNITYSDK_OFFSET(0xA3AA850)
#define RPG_CLIENT_FIVEDIMMANAGER__TICKTELEPORTINSTANCE_OFFSET UNITYSDK_OFFSET(0xA3A8FF0)
#define RPG_CLIENT_FIVEDIMMANAGER__TRYGETITEMOVERRIDESYSTEM_OFFSET UNITYSDK_OFFSET(0xA3A4D80)
#define RPG_CLIENT_FIVEDIMMANAGER__TRYREFRESHGROUPLOADSTATE_OFFSET UNITYSDK_OFFSET(0xA3A9230)
#define RPG_CLIENT_FIVEDIMMANAGER__TRYUNLOADINSTANCECONTAINER_OFFSET UNITYSDK_OFFSET(0xA3A98D0)
#define RPG_CLIENT_FIVEDIMMANAGER__UPDATEACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xA3A8090)
#define RPG_CLIENT_FIVEDIMMANAGER__UPDATEDOFCONTEXT_OFFSET UNITYSDK_OFFSET(0xA3AA9E0)
#define RPG_CLIENT_FIVEDIMMANAGER__UPDATEFIVEDIMINSTANCERENDER_OFFSET UNITYSDK_OFFSET(0xA3A93D0)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimManager_TypeDefinitionIndex = 55822;

	class FiveDimManager : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FiveDimVCameraBlendConfig** StaticGet_s_CutBlendConfig()
		{
			return (::RPG::GameCore::FiveDimVCameraBlendConfig**)Il2CppClass::FromTypeDefinitionIndex(FiveDimManager_TypeDefinitionIndex)->GetStaticField(0x106A0);
		}
		// static const ::System::Int32 s_MaxProcessEntityCount = 0x14; // 0x0
		::RPG::Client::FiveDimManager_CameraContext* _LastCameraContext; // 0x10
		::RPG::PoolDictionary_2<::System::String*, ::RPG::GameCore::LevelGraphConfig*>* _LevelGraphConfigs; // 0x18
		::Class_1_3F6460165989C3EF* _LeaveInstance; // 0x20
		::Class_2_81A4CCAF8860A4C5_1* _LodThreadTask; // 0x28
		::RPG::PoolList_1<::Struct_2_5674E7B417F2830A_1>* _HiddenExternalHandles; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::FiveDimManager_PendingDestroyContext*>* _PendingDestroyContextPool; // 0x38
		::Class_1_5A73DBEF56638408* _FiveDimAudioManager_k__BackingField; // 0x40
		::RPG::PoolHashSet_1<::UnityEngine::GameObject*>* _HiddenExternalGOs; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::FiveDimGameInstance*>* _PendingUnloadGameInstances; // 0x50
		::System::Collections::Generic::Dictionary_2<::RPG::Client::FiveDimGameInstance*, ::RPG::Client::FiveDimManager_CameraContext*>* _ActiveCameras; // 0x58
		::Class_1_95F843019E01BB5E* _TeleportInstance; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::FiveDimGameInstance*>* _AllGameInstances; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::FiveDimManager_AsyncCreateContext*>* _CreateContext; // 0x70
		::Class_1_87ACBF6FE3D55AF4* _PipelineCameraController; // 0x78
		::RPG::Client::FiveDimGameInstance* _CameraFocusInstance; // 0x80
		::System::Boolean _ShouldRefreshGroupLoadState; // 0x88
		::System::Boolean _IsBeginExternalObjectHidden; // 0x89
		::System::Boolean _EnableSyncLoadingInstance_k__BackingField; // 0x8A
		::System::Boolean _NeedChenLingFrameCapture; // 0x8B
		::System::Nullable_1<::RPG::Client::FiveDimManager_IsolatedGameInstanceInfo> _IsolatedGameInstance_k__BackingField; // 0x8C
		::System::Int32 _LastSyncTransformFrameCount; // 0x9C
		::RPG::Client::FiveDimCustomScreenTransferReason _CustomScreenTransferReason; // 0xA0
		::RPG::Client::FiveDimManager_DOFContext _DOFContext; // 0xA4

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

		::System::Boolean HideExternalObject(::UnityEngine::GameObject* targetGO)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_HIDEEXTERNALOBJECT_OFFSET))(this, targetGO);
		}

		::System::Void RestoreAllHiddenExternalObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_RESTOREALLHIDDENEXTERNALOBJECTS_OFFSET))(this);
		}

		::System::Boolean _TryGetItemOverrideSystem(::Class_2_54A5646FB63D2B4F*& overrideSystem)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_54A5646FB63D2B4F*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TRYGETITEMOVERRIDESYSTEM_OFFSET))(this, overrideSystem);
		}

		::System::Void _ClearHiddenExternalObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__CLEARHIDDENEXTERNALOBJECTS_OFFSET))(this);
		}

		::System::Void RequestCreateFiveDimEntityAsync(::RPG::Client::FiveDimGameInstance* instance, ::Class_3_1A92845FAFA5EC77* services, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::Class_3_1A92845FAFA5EC77*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_REQUESTCREATEFIVEDIMENTITYASYNC_OFFSET))(this, instance, services, onFinish);
		}

		::System::Void CancelCreateFiveDimEntityAsync(::RPG::Client::FiveDimGameInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CANCELCREATEFIVEDIMENTITYASYNC_OFFSET))(this, instance);
		}

		::System::Void FinishCreateFiveDimEntityImmediately(::RPG::Client::FiveDimGameInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_FINISHCREATEFIVEDIMENTITYIMMEDIATELY_OFFSET))(this, instance);
		}

		::System::Void _TickFrameSliceCreateEntities(::System::Int32 processCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKFRAMESLICECREATEENTITIES_OFFSET))(this, processCount);
		}

		::System::Void _ProcessSingleCreateContext(::RPG::Client::FiveDimManager_AsyncCreateContext* createContext, ::System::Int32& remainProcessCount)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimManager_AsyncCreateContext*, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLECREATECONTEXT_OFFSET))(this, createContext, remainProcessCount);
		}

		::System::Void _ClearCreateContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__CLEARCREATECONTEXT_OFFSET))(this);
		}

		::System::Void RequestDestroyFiveDimContext(::Class_3_1A92845FAFA5EC77* services, ::Class_1_24C2E7EF22229C6A* contexts, ::RPG::GameCore::GameEntity* instanceEntity)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_1A92845FAFA5EC77*, ::Class_1_24C2E7EF22229C6A*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_REQUESTDESTROYFIVEDIMCONTEXT_OFFSET))(this, services, contexts, instanceEntity);
		}

		::System::Void FinishPendingDestroyFiveDimContextImmediate(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_FINISHPENDINGDESTROYFIVEDIMCONTEXTIMMEDIATE_OFFSET))(this, groupID, instanceID);
		}

		::System::Void _TickFrameSliceDestroyEntities(::System::Int32 processEntityCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKFRAMESLICEDESTROYENTITIES_OFFSET))(this, processEntityCount);
		}

		::System::Void _ProcessSingleDestroyContext(::RPG::Client::FiveDimManager_PendingDestroyContext* context, ::System::Int32& remainProcessEntityCount)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimManager_PendingDestroyContext*, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLEDESTROYCONTEXT_OFFSET))(this, context, remainProcessEntityCount);
		}

		::System::Void _ProcessSingleDestroyContextFinish(::RPG::Client::FiveDimManager_PendingDestroyContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimManager_PendingDestroyContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__PROCESSSINGLEDESTROYCONTEXTFINISH_OFFSET))(this, context);
		}

		::System::Void _ClearDestroyContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__CLEARDESTROYCONTEXT_OFFSET))(this);
		}

		::System::Void EnableThreadTask(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ENABLETHREADTASK_OFFSET))(this, enable);
		}

		::System::Void _InitThreadTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__INITTHREADTASK_OFFSET))(this);
		}

		::System::Void _DisposeThreadTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__DISPOSETHREADTASK_OFFSET))(this);
		}

		::System::Void FlushEntityCalcLodResult(::Struct_2_EC98B14B1B23001B calcData)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_EC98B14B1B23001B))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_FLUSHENTITYCALCLODRESULT_OFFSET))(this, calcData);
		}

		::System::Void _OnPipelineCameraDeactivate(::Class_1_87ACBF6FE3D55AF4_Struct_2_95931608322B6C4F ctx)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_87ACBF6FE3D55AF4_Struct_2_95931608322B6C4F))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__ONPIPELINECAMERADEACTIVATE_OFFSET))(this, ctx);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void InitOnFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_INITONFINALSTEP_OFFSET))(this);
		}

		::System::Void TeleportTo(::Struct_2_F01DF3CDCF3FD7AC targetInfo, ::Struct_2_B82597A91E4CD455 options)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_F01DF3CDCF3FD7AC, ::Struct_2_B82597A91E4CD455))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TELEPORTTO_OFFSET))(this, targetInfo, options);
		}

		::System::Void TeleportTo_1(::System::UInt32 groupID, ::System::UInt32 containerID, ::System::UInt32 entityID, ::System::Boolean noCameraBlend, ::System::Boolean isPipeEntry)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TELEPORTTO_1_OFFSET))(this, groupID, containerID, entityID, noCameraBlend, isPipeEntry);
		}

		::System::Void LeaveCurrentGame(::Struct_2_B7F6733609A5D9EA options)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_B7F6733609A5D9EA))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_OFFSET))(this, options);
		}

		::System::Void LeaveCurrentGame_1(::RPG::GameCore::LevelEntityRef* targetInfo, ::Struct_2_B7F6733609A5D9EA options)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityRef*, ::Struct_2_B7F6733609A5D9EA))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_1_OFFSET))(this, targetInfo, options);
		}

		::System::Void LeaveCurrentGame_2(::Struct_2_8EA636D1EE0F0A0F targetInfo, ::Struct_2_B7F6733609A5D9EA options)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_8EA636D1EE0F0A0F, ::Struct_2_B7F6733609A5D9EA))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_LEAVECURRENTGAME_2_OFFSET))(this, targetInfo, options);
		}

		::System::Void TryRequestLeaveGameWhenInstanceDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TRYREQUESTLEAVEGAMEWHENINSTANCEDESTROY_OFFSET))(this);
		}

		::System::Void RegisterGameInstance(::RPG::Client::FiveDimGameInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_REGISTERGAMEINSTANCE_OFFSET))(this, instance);
		}

		::System::Void UnRegisterGameInstance(::RPG::Client::FiveDimGameInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_UNREGISTERGAMEINSTANCE_OFFSET))(this, instance);
		}

		::System::Void SetActiveCamera(::RPG::Client::FiveDimGameInstance* instance, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* camera, ::RPG::GameCore::FiveDimVCameraBlendConfig* inBlend)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::RPG::GameCore::FiveDimVCameraBlendConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SETACTIVECAMERA_OFFSET))(this, instance, camera, inBlend);
		}

		::System::Void SetCameraFocus(::RPG::Client::FiveDimGameInstance* instance, ::System::Boolean focus)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SETCAMERAFOCUS_OFFSET))(this, instance, focus);
		}

		::RPG::Client::FiveDimGameInstance* GetCameraActiveInstance()
		{
			return ((::RPG::Client::FiveDimGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GETCAMERAACTIVEINSTANCE_OFFSET))(this);
		}

		::System::Void ApplyCameraBlendOutConfig(::RPG::Client::FiveDimGameInstance* instance, ::RPG::GameCore::FiveDimVCameraBlendConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::RPG::GameCore::FiveDimVCameraBlendConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_APPLYCAMERABLENDOUTCONFIG_OFFSET))(this, instance, config);
		}

		::System::Boolean HasCameraLive(::RPG::Client::FiveDimGameInstance* instance)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_HASCAMERALIVE_OFFSET))(this, instance);
		}

		::System::Void ApplyCameraDOFConfig(::RPG::Client::FiveDimGameInstance* instance, ::RPG::GameCore::FiveDimCameraDOFConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::RPG::GameCore::FiveDimCameraDOFConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_APPLYCAMERADOFCONFIG_OFFSET))(this, instance, config);
		}

		::System::Void SetIsolatedInstance(::RPG::Client::FiveDimGameInstance* instance, ::System::Boolean keepSameGroupEntitiesVisibility)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SETISOLATEDINSTANCE_OFFSET))(this, instance, keepSameGroupEntitiesVisibility);
		}

		::System::Void ClearIsolatedInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CLEARISOLATEDINSTANCE_OFFSET))(this);
		}

		::System::Boolean HasIsolatedInstance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_HASISOLATEDINSTANCE_OFFSET))(this);
		}

		::System::Boolean IsIsolatedShowInstance(::RPG::Client::FiveDimGameInstance* instance)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ISISOLATEDSHOWINSTANCE_OFFSET))(this, instance);
		}

		::System::Void SyncTransformBeforeFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SYNCTRANSFORMBEFOREFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void EndOfLateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_ENDOFLATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void ClearTeleportInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CLEARTELEPORTINSTANCE_OFFSET))(this);
		}

		::System::Void ClearLeaveInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CLEARLEAVEINSTANCE_OFFSET))(this);
		}

		::System::Void ApplyTeleportTo(::RPG::Client::FiveDimGameInstance* instance, ::Struct_2_9195B4006FDD1545 playerPlacingParams, ::System::Boolean noCameraBlend)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::Struct_2_9195B4006FDD1545, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_APPLYTELEPORTTO_OFFSET))(this, instance, playerPlacingParams, noCameraBlend);
		}

		::System::Void ApplyLeaveFrom(::RPG::Client::FiveDimGameInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_APPLYLEAVEFROM_OFFSET))(this, instance);
		}

		::System::Void ApplyLeaveFrom_1(::RPG::Client::FiveDimGameInstance* instance, ::Struct_2_FC595D1A561D8C6F player3DInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::Struct_2_FC595D1A561D8C6F))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_APPLYLEAVEFROM_1_OFFSET))(this, instance, player3DInfo);
		}

		::System::Boolean GetTeleportFiveDimInfo(::System::UInt32& groupID, ::System::UInt32& instanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GETTELEPORTFIVEDIMINFO_OFFSET))(this, groupID, instanceID);
		}

		::System::Void OpenCustomScreenTransfer(::RPG::Client::FiveDimCustomScreenTransferReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimCustomScreenTransferReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_OPENCUSTOMSCREENTRANSFER_OFFSET))(this, reason);
		}

		::System::Void CloseCustomScreenTransfer(::RPG::Client::FiveDimCustomScreenTransferReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimCustomScreenTransferReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_CLOSECUSTOMSCREENTRANSFER_OFFSET))(this, reason);
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

		::System::Void _OnFiveDimInstanceChanged(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__ONFIVEDIMINSTANCECHANGED_OFFSET))(this, param);
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

		::System::Void _TickTeleportInstance(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKTELEPORTINSTANCE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _TickLeaveInstance(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKLEAVEINSTANCE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _TryUnloadInstanceContainer(::RPG::Client::FiveDimGameInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TRYUNLOADINSTANCECONTAINER_OFFSET))(this, instance);
		}

		::System::Void RemovePendingUnloadInstanceContainer(::System::UInt32 groupID, ::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_REMOVEPENDINGUNLOADINSTANCECONTAINER_OFFSET))(this, groupID, entityID);
		}

		::System::Void RequestUnloadInstanceContainer(::RPG::Client::FiveDimGameInstance* instance, ::System::Boolean immediate)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_REQUESTUNLOADINSTANCECONTAINER_OFFSET))(this, instance, immediate);
		}

		::System::Void _TickPendingUnloadInstanceContainers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKPENDINGUNLOADINSTANCECONTAINERS_OFFSET))(this);
		}

		::System::Void _ApplyIsolateInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__APPLYISOLATEINSTANCE_OFFSET))(this);
		}

		::System::Void _UpdateActiveCamera(::RPG::Client::FiveDimGameInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__UPDATEACTIVECAMERA_OFFSET))(this, instance);
		}

		::System::Void _TickDOF(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKDOF_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _UpdateDOFContext(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__UPDATEDOFCONTEXT_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Boolean _GetDOFFocusLength(::System::Single& distance)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__GETDOFFOCUSLENGTH_OFFSET))(this, distance);
		}

		::System::Void _ApplyDOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__APPLYDOF_OFFSET))(this);
		}

		::System::Void _ResetDOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__RESETDOF_OFFSET))(this);
		}

		::System::Boolean _GetPlayer3DTransform(::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__GETPLAYER3DTRANSFORM_OFFSET))(this, position, rotation);
		}

		::System::Void _TickChenLingFrameCapture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__TICKCHENLINGFRAMECAPTURE_OFFSET))(this);
		}

		::System::Void _UpdateFiveDimInstanceRender()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__UPDATEFIVEDIMINSTANCERENDER_OFFSET))(this);
		}

		::System::Boolean _CalcFiveDimInstanceIsInCameraFrustum(::RPG::Client::FiveDimGameInstance* instance)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__CALCFIVEDIMINSTANCEISINCAMERAFRUSTUM_OFFSET))(this, instance);
		}

		::RPG::Client::FiveDimGameInstance* GetFiveDimGameInstance(::System::UInt32 groupID, ::System::UInt32 entityID)
		{
			return ((::RPG::Client::FiveDimGameInstance*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GETFIVEDIMGAMEINSTANCE_OFFSET))(this, groupID, entityID);
		}

		::System::Void TaskForceSetFiveDimLoadMode(::System::UInt32 groupID, ::System::UInt32 entityID, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TASKFORCESETFIVEDIMLOADMODE_OFFSET))(this, groupID, entityID, enable);
		}

		::System::Void TriggerFiveDimPreload(::System::UInt32 groupID, ::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_TRIGGERFIVEDIMPRELOAD_OFFSET))(this, groupID, entityID);
		}

		::System::Void HideAllFiveDim(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_HIDEALLFIVEDIM_OFFSET))(this, enable);
		}

		::RPG::GameCore::LevelGraphConfig* GetLevelGraphConfig(::System::String* path)
		{
			return ((::RPG::GameCore::LevelGraphConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GETLEVELGRAPHCONFIG_OFFSET))(this, path);
		}

		::System::Void _ClearLevelGraphConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER__CLEARLEVELGRAPHCONFIGS_OFFSET))(this);
		}

		::System::Boolean get_IsTeleportingOrLeaving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GET_ISTELEPORTINGORLEAVING_OFFSET))(this);
		}

		::System::Nullable_1<::RPG::Client::FiveDimManager_IsolatedGameInstanceInfo> get_IsolatedGameInstance()
		{
			return ((::System::Nullable_1<::RPG::Client::FiveDimManager_IsolatedGameInstanceInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GET_ISOLATEDGAMEINSTANCE_OFFSET))(this);
		}

		::System::Void set_IsolatedGameInstance(::System::Nullable_1<::RPG::Client::FiveDimManager_IsolatedGameInstanceInfo> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::FiveDimManager_IsolatedGameInstanceInfo>))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SET_ISOLATEDGAMEINSTANCE_OFFSET))(this, value);
		}

		::Class_1_5A73DBEF56638408* get_FiveDimAudioManager()
		{
			return ((::Class_1_5A73DBEF56638408*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GET_FIVEDIMAUDIOMANAGER_OFFSET))(this);
		}

		::System::Void set_FiveDimAudioManager(::Class_1_5A73DBEF56638408* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A73DBEF56638408*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SET_FIVEDIMAUDIOMANAGER_OFFSET))(this, value);
		}

		::System::Boolean get_EnableSyncLoadingInstance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_GET_ENABLESYNCLOADINGINSTANCE_OFFSET))(this);
		}

		::System::Void set_EnableSyncLoadingInstance(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_SET_ENABLESYNCLOADINGINSTANCE_OFFSET))(this, value);
		}
	};
}
