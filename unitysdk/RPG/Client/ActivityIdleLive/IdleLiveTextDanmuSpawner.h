#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1091;
class Class_1_B18A907A8E4C5C9C;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveChatService; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDanmuBase; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDanmuContentData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveImgDanmuService; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_AWAKE_OFFSET UNITYSDK_OFFSET(0x9BD7470)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_HIDEDANMU_OFFSET UNITYSDK_OFFSET(0x9BD73B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9BD79F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9BD7F70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_PAUSEDANMU_OFFSET UNITYSDK_OFFSET(0x9BD7310)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_RESUMEDANMU_OFFSET UNITYSDK_OFFSET(0x9BD7360)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_SETCHATSERVICE_OFFSET UNITYSDK_OFFSET(0x9BD70A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_SETIMGDANMUSERVICE_OFFSET UNITYSDK_OFFSET(0x9BD72B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_SHOWDANMU_OFFSET UNITYSDK_OFFSET(0x9BD7410)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_UPDATEPHASE_OFFSET UNITYSDK_OFFSET(0x9BD7100)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9BD76E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__CLEANENDEDDANMUS_OFFSET UNITYSDK_OFFSET(0x9BD7D40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x9BD9260)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__GETLINEOCCUPANTS_OFFSET UNITYSDK_OFFSET(0x9BD81A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__GETLINEWORLDYS_OFFSET UNITYSDK_OFFSET(0x9BD8590)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__GETSTARWORLDY_OFFSET UNITYSDK_OFFSET(0x9BD8250)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__GETUID_OFFSET UNITYSDK_OFFSET(0x9BD9210)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__HASEMPTYLINETOPLAY_OFFSET UNITYSDK_OFFSET(0x9BD8080)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__INITIALIZEIMAGELINES_OFFSET UNITYSDK_OFFSET(0x9BD8840)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__INITIALIZETEXTLINES_OFFSET UNITYSDK_OFFSET(0x9BD8640)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__ISPAUSEDBYTIMESCALELOCK_OFFSET UNITYSDK_OFFSET(0x9BD7FE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__ISPAUSED_OFFSET UNITYSDK_OFFSET(0x9BD7930)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__SPAWNDANMU_OFFSET UNITYSDK_OFFSET(0x9BD8F90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__STARSHOWDANMU_OFFSET UNITYSDK_OFFSET(0x9BD8DE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__TRYFETCHDANMUTOSHOW_OFFSET UNITYSDK_OFFSET(0x9BD7CE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__TRYFETCHNEWIMAGEDANMU_OFFSET UNITYSDK_OFFSET(0x9BD8C00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__TRYFETCHNEWTEXTDANMU_OFFSET UNITYSDK_OFFSET(0x9BD8CF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__TRYSHOWPENDINGIMAGEDANMU_OFFSET UNITYSDK_OFFSET(0x9BD8A60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__TRYSHOWPENDINGTEXTDANMU_OFFSET UNITYSDK_OFFSET(0x9BD8B30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__UPDATELINEOCCUPANTS_OFFSET UNITYSDK_OFFSET(0x9BD7B70)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTextDanmuSpawner_TypeDefinitionIndex = 69248;

	class IdleLiveTextDanmuSpawner : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* _TEXT_DANMU_PREFAB_PATH; // 0x0
		// static const ::System::String* _IMAGE_DANMU_PREFAB_PATH; // 0x0
		// static const ::System::String* _IMAGE_EMOJI_DANMU_PREFAB_PATH; // 0x0
		::RPG::Client::ActivityIdleLive::IdleLiveChatService* _ChatService; // 0x18
		::RPG::Client::ActivityIdleLive::IdleLiveImgDanmuService* _ImgDanmuService; // 0x20
		::UnityEngine::RectTransform* _Edge; // 0x28
		::RPG::Client::PrefabLoadMeta* _TextLoader; // 0x30
		::RPG::Client::PrefabLoadMeta* _ImgLoader; // 0x38
		::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_1091*>* _PendingTextDanmus; // 0x40
		::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_1091*>* _PendingImageDanmus; // 0x48
		::Il2CppArray<::UnityEngine::Vector3>* _WorldCorners; // 0x50
		::System::UInt32 _Uid; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDanmuBase*>* _CreatedDanmus; // 0x60
		::UnityEngine::RectTransform* _TextRootRect; // 0x68
		::UnityEngine::RectTransform* _ImgRootRect; // 0x70
		::System::Boolean _TextLinesInitialized; // 0x78
		::System::Boolean _ImageLinesInitialized; // 0x79
		::System::Int32 _TextLineCount; // 0x7C
		::System::Int32 _ImageLineCount; // 0x80
		::System::Single _TextLineSpacing; // 0x84
		::System::Single _ImageLineSpacing; // 0x88
		::System::Collections::Generic::List_1<::System::Single>* _TextLineWorldYs; // 0x90
		::System::Collections::Generic::List_1<::System::Single>* _ImageLineWorldYs; // 0x98
		::Il2CppArray<::Class_0_16E4307DCC419505_1091*>* _TextLineOccupants; // 0xA0
		::Il2CppArray<::Class_0_16E4307DCC419505_1091*>* _ImageLineOccupants; // 0xA8
		::System::Boolean _IsManualPaused; // 0xB0
		::Class_1_B18A907A8E4C5C9C* _PoolMgr; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__CTOR_OFFSET))(this);
		}

		::System::Void SetChatService(::RPG::Client::ActivityIdleLive::IdleLiveChatService* chatService)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveChatService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_SETCHATSERVICE_OFFSET))(this, chatService);
		}

		::System::Void UpdatePhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_UPDATEPHASE_OFFSET))(this);
		}

		::System::Void SetImgDanmuService(::RPG::Client::ActivityIdleLive::IdleLiveImgDanmuService* imgDanmuService)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveImgDanmuService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_SETIMGDANMUSERVICE_OFFSET))(this, imgDanmuService);
		}

		::System::Void PauseDanmu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_PAUSEDANMU_OFFSET))(this);
		}

		::System::Void ResumeDanmu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_RESUMEDANMU_OFFSET))(this);
		}

		::System::Void HideDanmu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_HIDEDANMU_OFFSET))(this);
		}

		::System::Void ShowDanmu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_SHOWDANMU_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER_ONDESTROY_OFFSET))(this);
		}

		::System::Void _CleanEndedDanmus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__CLEANENDEDDANMUS_OFFSET))(this);
		}

		::System::Boolean _IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__ISPAUSED_OFFSET))(this);
		}

		::System::Boolean _IsPausedByTimeScaleLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__ISPAUSEDBYTIMESCALELOCK_OFFSET))(this);
		}

		::System::Void _UpdateLineOccupants()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__UPDATELINEOCCUPANTS_OFFSET))(this);
		}

		::System::Boolean _HasEmptyLineToPlay(::Class_0_16E4307DCC419505_1091* monoDanmu)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_1091*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__HASEMPTYLINETOPLAY_OFFSET))(this, monoDanmu);
		}

		::System::Single _GetStarWorldY(::Class_0_16E4307DCC419505_1091* monoDanmu)
		{
			return ((::System::Single(*)(::PVOID, ::Class_0_16E4307DCC419505_1091*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__GETSTARWORLDY_OFFSET))(this, monoDanmu);
		}

		::Il2CppArray<::Class_0_16E4307DCC419505_1091*>* _GetLineOccupants(::Class_0_16E4307DCC419505_1091* danmu)
		{
			return ((::Il2CppArray<::Class_0_16E4307DCC419505_1091*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1091*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__GETLINEOCCUPANTS_OFFSET))(this, danmu);
		}

		::System::Collections::Generic::List_1<::System::Single>* _GetLineWorldYs(::Class_0_16E4307DCC419505_1091* danmu)
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1091*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__GETLINEWORLDYS_OFFSET))(this, danmu);
		}

		::System::Void _InitializeTextLines(::System::Single itemWorldHeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__INITIALIZETEXTLINES_OFFSET))(this, itemWorldHeight);
		}

		::System::Void _InitializeImageLines(::System::Single itemWorldHeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__INITIALIZEIMAGELINES_OFFSET))(this, itemWorldHeight);
		}

		::System::Void _TryFetchDanmuToShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__TRYFETCHDANMUTOSHOW_OFFSET))(this);
		}

		::System::Void _TryShowPendingImageDanmu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__TRYSHOWPENDINGIMAGEDANMU_OFFSET))(this);
		}

		::System::Void _TryShowPendingTextDanmu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__TRYSHOWPENDINGTEXTDANMU_OFFSET))(this);
		}

		::System::Void _TryFetchNewImageDanmu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__TRYFETCHNEWIMAGEDANMU_OFFSET))(this);
		}

		::System::Void _TryFetchNewTextDanmu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__TRYFETCHNEWTEXTDANMU_OFFSET))(this);
		}

		::System::Void _StarShowDanmu(::Class_0_16E4307DCC419505_1091* monoDanmu)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1091*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__STARSHOWDANMU_OFFSET))(this, monoDanmu);
		}

		::Class_0_16E4307DCC419505_1091* _SpawnDanmu(::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData* contentData)
		{
			return ((::Class_0_16E4307DCC419505_1091*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__SPAWNDANMU_OFFSET))(this, contentData);
		}

		::System::UInt32 _GetUid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEXTDANMUSPAWNER__GETUID_OFFSET))(this);
		}
	};
}
