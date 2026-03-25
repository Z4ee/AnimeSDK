#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PhotoGraphIdentifyState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_23F67DD15593C8D6;
class Class_1_A27BF87A78CEBB28;
class Class_1_DFC115D3A3A89EBD;
namespace RPG::Client { class InverseMask; }
namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace RPG::Client { class PhotoGraphIdentifyStateChangeParam; }
namespace RPG::Client { class PhotoGraphSystem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_CHECKCAMERAATAIMFORWARD_OFFSET UNITYSDK_OFFSET(0x9F3FDA0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_CHECKFIRSTTARGETINPHOTORATIO_OFFSET UNITYSDK_OFFSET(0x9F3F510)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_CLEARALLAIMS_OFFSET UNITYSDK_OFFSET(0x9F3EFF0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_DISPOSEALLAIMS_OFFSET UNITYSDK_OFFSET(0x9F3EDD0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_EXITIDENTIFYMODE_OFFSET UNITYSDK_OFFSET(0x9F3DC90)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_GETIDENTIFYAREA_OFFSET UNITYSDK_OFFSET(0x9F3FF70)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_GETMANUALAIMENTITYINRANGE_OFFSET UNITYSDK_OFFSET(0x9F3DEB0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_GET_IDENTIFYSTATE_OFFSET UNITYSDK_OFFSET(0x9F40B90)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_IDENTIFYMANUALAIMENTITYINRANGE_OFFSET UNITYSDK_OFFSET(0x9F3DE40)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9F3B990)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9F3B780)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_REFRESHPENDINGAIMANISTATE_OFFSET UNITYSDK_OFFSET(0x9F3F3F0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_REFRESH_OFFSET UNITYSDK_OFFSET(0x9F3DF00)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_SELECTIDENTIFYPENDINGTARGET_OFFSET UNITYSDK_OFFSET(0x9F3C510)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_SETIDENTIFYCUSTOMTIP_OFFSET UNITYSDK_OFFSET(0x9F3DB50)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_SETUPOWNERPHOTOGRAPHSYS_OFFSET UNITYSDK_OFFSET(0x9F3DBF0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_SHOWIDENTIFYRESULTSTATUS_OFFSET UNITYSDK_OFFSET(0x9F3F1C0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_STARTIDENTIFYMODE_OFFSET UNITYSDK_OFFSET(0x9F3DC40)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_START_OFFSET UNITYSDK_OFFSET(0x9F3B530)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__ACQUIREAIM_OFFSET UNITYSDK_OFFSET(0x9F3E4D0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__CLEARAIMS_OFFSET UNITYSDK_OFFSET(0x9F3F050)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x9F40BA0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__DESTORYAIM_OFFSET UNITYSDK_OFFSET(0x9F3EF60)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__GETLOCALPOSINIDENTIFYAREA_OFFSET UNITYSDK_OFFSET(0x9F3FFB0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__ISINIDENTIFYAREA_OFFSET UNITYSDK_OFFSET(0x9F3D9A0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__ISLOCALPOSINIDENTIFYAREA_OFFSET UNITYSDK_OFFSET(0x9F40AE0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__RELEASEAIM_OFFSET UNITYSDK_OFFSET(0x9F3DDD0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__RESETAIM_OFFSET UNITYSDK_OFFSET(0x9F3C970)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__RESETTIMER_OFFSET UNITYSDK_OFFSET(0x9F3C820)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SETAIMPOS_OFFSET UNITYSDK_OFFSET(0x9F3CB40)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SETUPCONFIG_OFFSET UNITYSDK_OFFSET(0x9F3B580)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SETUPHINTMASK_OFFSET UNITYSDK_OFFSET(0x9F3B640)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SHOWAIMRESULTSTATUS_OFFSET UNITYSDK_OFFSET(0x9F3D5C0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SHOWHINTMASK_OFFSET UNITYSDK_OFFSET(0x9F3B7E0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SWITCHIDENTIFYSTATE_OFFSET UNITYSDK_OFFSET(0x9F3C790)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__UPDATEAIMINFOBYAIMUNION_OFFSET UNITYSDK_OFFSET(0x9F3ED60)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__UPDATEAIMINFOWORLDPOS_OFFSET UNITYSDK_OFFSET(0x9F3EA90)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphAimContainer_TypeDefinitionIndex = 56731;

	class PhotoGraphAimContainer : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* _PHOTOGRAPH_AIM_ROOT; // 0x0
		// static const ::System::String* _BG_SWITCH_TO_SUCCESS_ANIMATION; // 0x0
		// static const ::System::String* _BG_SWITCH_TO_UNLOCK_ANIMATION; // 0x0
		::UnityEngine::GameObject* _AimPrefab; // 0x18
		::UnityEngine::GameObject* _AimPendingPrefab; // 0x20
		::UnityEngine::RectTransform* _IdentifyArea; // 0x28
		::RPG::Client::InverseMask* _InverseMask; // 0x30
		::RPG::Client::PhotoGraphSystem* _OwnerPhotoGraphSys; // 0x38
		::RPG::Client::PhotoGraphIdentifyStateChangeParam* _StateChangeParam; // 0x40
		::RPG::Client::PhotoGraphIdentifyState _IdentifyState; // 0x48
		::RPG::GameCore::GameEntity* _IdentifyPendingTarget; // 0x50
		::System::Single _AppearDuration; // 0x58
		::System::Single _PendingDurationDefault; // 0x5C
		::System::Single _ShowResultDuration; // 0x60
		::System::Boolean _IsUpdating; // 0x64
		::Class_1_23F67DD15593C8D6* _AppearTimer; // 0x68
		::Class_1_23F67DD15593C8D6* _PendingTimer; // 0x70
		::Class_1_23F67DD15593C8D6* _ShowResultTimer; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* _CachedPhotoGraphAims; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* _ActivePhotoGraphAims; // 0x88
		::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* _ManualAimsInRange; // 0x90
		::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* _ShowResultPhotoGraphAims; // 0x98
		::System::Boolean _IsShowSuccessResult; // 0xA0
		::System::String* _UIMaskPath; // 0xA8
		::System::Int32 _HollowIndex; // 0xB0
		::System::Single _PendingDurationSteal; // 0xB4
		::System::Single _MaxDistanceSteal; // 0xB8
		::System::Single _MinSizeScaleSteal; // 0xBC
		::System::Single _MaxSizeScaleSteal; // 0xC0
		::System::Nullable_1<::UnityEngine::Vector2> _IdentifyAreaInitSize; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_LATEUPDATE_OFFSET))(this);
		}

		::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* SelectIdentifyPendingTarget()
		{
			return ((::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_SELECTIDENTIFYPENDINGTARGET_OFFSET))(this);
		}

		::System::Void SetIdentifyCustomTip(::RPG::Client::TextID customTip, ::System::Int32 priority, ::System::Boolean needNotify)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_SETIDENTIFYCUSTOMTIP_OFFSET))(this, customTip, priority, needNotify);
		}

		::System::Void SetupOwnerPhotoGraphSys(::RPG::Client::PhotoGraphSystem* ownerSys)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_SETUPOWNERPHOTOGRAPHSYS_OFFSET))(this, ownerSys);
		}

		::System::Void StartIdentifyMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_STARTIDENTIFYMODE_OFFSET))(this);
		}

		::System::Void ExitIdentifyMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_EXITIDENTIFYMODE_OFFSET))(this);
		}

		::System::Void IdentifyManualAimEntityInRange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_IDENTIFYMANUALAIMENTITYINRANGE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* GetManualAimEntityInRange()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_GETMANUALAIMENTITYINRANGE_OFFSET))(this);
		}

		::System::Void Refresh(::System::Collections::Generic::List_1<::Class_1_A27BF87A78CEBB28*>* aimTargetEntities)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A27BF87A78CEBB28*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_REFRESH_OFFSET))(this, aimTargetEntities);
		}

		::System::Void DisposeAllAims()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_DISPOSEALLAIMS_OFFSET))(this);
		}

		::System::Void ClearAllAims()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_CLEARALLAIMS_OFFSET))(this);
		}

		::System::Void ShowIdentifyResultStatus(::System::Boolean isSuccess)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_SHOWIDENTIFYRESULTSTATUS_OFFSET))(this, isSuccess);
		}

		::System::Void RefreshPendingAimAniState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_REFRESHPENDINGAIMANISTATE_OFFSET))(this);
		}

		::System::Boolean CheckFirstTargetInPhotoRatio(::UnityEngine::Vector3 aimPos, ::RPG::GameCore::PhotoGraphTargetSize* targetSize, ::System::Single ratio)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_CHECKFIRSTTARGETINPHOTORATIO_OFFSET))(this, aimPos, targetSize, ratio);
		}

		::System::Void _ClearAims(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*& aimCollection)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__CLEARAIMS_OFFSET))(this, aimCollection);
		}

		::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* _AcquireAim()
		{
			return ((::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__ACQUIREAIM_OFFSET))(this);
		}

		::System::Void _ReleaseAim(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* aim)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__RELEASEAIM_OFFSET))(this, aim);
		}

		::System::Void _ResetAim(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* aim)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__RESETAIM_OFFSET))(this, aim);
		}

		::System::Void _DestoryAim(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* aim)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__DESTORYAIM_OFFSET))(this, aim);
		}

		::System::Int32 _UpdateAimInfoByAimUnion(::System::Int32 curIndex, ::Class_1_DFC115D3A3A89EBD* aimUnion)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Class_1_DFC115D3A3A89EBD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__UPDATEAIMINFOBYAIMUNION_OFFSET))(this, curIndex, aimUnion);
		}

		::System::Void _UpdateAimInfoWorldPos(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* aim)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__UPDATEAIMINFOWORLDPOS_OFFSET))(this, aim);
		}

		static ::System::Boolean CheckCameraAtAimForward(::UnityEngine::Vector3 aimForward, ::UnityEngine::Vector3 aimToCamera, ::System::Single degree)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_CHECKCAMERAATAIMFORWARD_OFFSET))(aimForward, aimToCamera, degree);
		}

		::UnityEngine::RectTransform* GetIdentifyArea()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_GETIDENTIFYAREA_OFFSET))(this);
		}

		::System::Void _SetAimPos(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* aim, ::System::Boolean isPendingAim, ::UnityEngine::Vector3 cameraPos, ::System::Boolean& showAim)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SETAIMPOS_OFFSET))(this, aim, isPendingAim, cameraPos, showAim);
		}

		::UnityEngine::Vector3 _GetLocalPosInIdentifyArea(::UnityEngine::Vector3 screenPoint)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__GETLOCALPOSINIDENTIFYAREA_OFFSET))(this, screenPoint);
		}

		::System::Boolean _IsLocalPosInIdentifyArea(::UnityEngine::Vector3 localPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__ISLOCALPOSINIDENTIFYAREA_OFFSET))(this, localPos);
		}

		::System::Boolean _IsInIdentifyArea(::UnityEngine::Vector3 worldPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__ISINIDENTIFYAREA_OFFSET))(this, worldPos);
		}

		::System::Void _SwitchIdentifyState(::RPG::Client::PhotoGraphIdentifyState targetState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphIdentifyState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SWITCHIDENTIFYSTATE_OFFSET))(this, targetState);
		}

		::System::Void _ResetTimer(::Class_1_23F67DD15593C8D6* timer, ::System::Single timeSpawn)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_23F67DD15593C8D6*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__RESETTIMER_OFFSET))(this, timer, timeSpawn);
		}

		::System::Void _SetupConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SETUPCONFIG_OFFSET))(this);
		}

		::System::Void _SetupHintMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SETUPHINTMASK_OFFSET))(this);
		}

		::System::Void _ShowHintMask(::System::Boolean show, ::System::Nullable_1<::UnityEngine::Vector3> maskCenterPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SHOWHINTMASK_OFFSET))(this, show, maskCenterPos);
		}

		::System::Void _ShowAimResultStatus(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* aim, ::System::Boolean isShow, ::System::Boolean isSuccess)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SHOWAIMRESULTSTATUS_OFFSET))(this, aim, isShow, isSuccess);
		}

		::RPG::Client::PhotoGraphIdentifyState get_IdentifyState()
		{
			return ((::RPG::Client::PhotoGraphIdentifyState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_GET_IDENTIFYSTATE_OFFSET))(this);
		}
	};
}
