#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PhotoGraphIdentifyState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_23F67DD15593C8D6;
class Class_1_2A2B2DC1DA1205FE;
class Class_1_A27BF87A78CEBB28;
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

#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_CHECKCAMERAATAIMFORWARD_OFFSET UNITYSDK_OFFSET(0xDA6D980)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_CHECKFIRSTTARGETINPHOTORATIO_OFFSET UNITYSDK_OFFSET(0xDA6CFF0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_CLEARALLAIMS_OFFSET UNITYSDK_OFFSET(0xDA6CB10)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_DISPOSEALLAIMS_OFFSET UNITYSDK_OFFSET(0xDA6C880)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_EXITIDENTIFYMODE_OFFSET UNITYSDK_OFFSET(0xDA6B520)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_GETIDENTIFYAREA_OFFSET UNITYSDK_OFFSET(0xDA6DB50)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_GETMANUALAIMENTITYINRANGE_OFFSET UNITYSDK_OFFSET(0xDA6B7A0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_GET_IDENTIFYSTATE_OFFSET UNITYSDK_OFFSET(0xDA6E730)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_IDENTIFYMANUALAIMENTITYINRANGE_OFFSET UNITYSDK_OFFSET(0xDA6B730)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xDA69320)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDA69110)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_REFRESHPENDINGAIMANISTATE_OFFSET UNITYSDK_OFFSET(0xDA6CE90)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_REFRESH_OFFSET UNITYSDK_OFFSET(0xDA6B7F0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_SELECTIDENTIFYPENDINGTARGET_OFFSET UNITYSDK_OFFSET(0xDA69D40)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_SETIDENTIFYCUSTOMTIP_OFFSET UNITYSDK_OFFSET(0xDA6B3E0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_SETUPOWNERPHOTOGRAPHSYS_OFFSET UNITYSDK_OFFSET(0xDA6B480)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_SHOWIDENTIFYRESULTSTATUS_OFFSET UNITYSDK_OFFSET(0xDA6CD30)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_STARTIDENTIFYMODE_OFFSET UNITYSDK_OFFSET(0xDA6B4D0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_START_OFFSET UNITYSDK_OFFSET(0xDA68E70)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__ACQUIREAIM_OFFSET UNITYSDK_OFFSET(0xDA6BE80)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__CLEARAIMS_OFFSET UNITYSDK_OFFSET(0xDA6CB70)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0xDA6E740)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__DESTORYAIM_OFFSET UNITYSDK_OFFSET(0xDA6CA80)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__GETLOCALPOSINIDENTIFYAREA_OFFSET UNITYSDK_OFFSET(0xDA6DB90)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__ISINIDENTIFYAREA_OFFSET UNITYSDK_OFFSET(0xDA6B230)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__ISLOCALPOSINIDENTIFYAREA_OFFSET UNITYSDK_OFFSET(0xDA6E680)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__RELEASEAIM_OFFSET UNITYSDK_OFFSET(0xDA6B6C0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__RESETAIM_OFFSET UNITYSDK_OFFSET(0xDA6A1F0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__RESETTIMER_OFFSET UNITYSDK_OFFSET(0xDA6A0A0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SETAIMPOS_OFFSET UNITYSDK_OFFSET(0xDA6A370)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SETUPCONFIG_OFFSET UNITYSDK_OFFSET(0xDA68EC0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SETUPHINTMASK_OFFSET UNITYSDK_OFFSET(0xDA68FB0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SHOWAIMRESULTSTATUS_OFFSET UNITYSDK_OFFSET(0xDA6ADF0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SHOWHINTMASK_OFFSET UNITYSDK_OFFSET(0xDA69170)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SWITCHIDENTIFYSTATE_OFFSET UNITYSDK_OFFSET(0xDA6A010)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__UPDATEAIMINFOBYAIMUNION_OFFSET UNITYSDK_OFFSET(0xDA6C810)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__UPDATEAIMINFOWORLDPOS_OFFSET UNITYSDK_OFFSET(0xDA6C4D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphAimContainer_TypeDefinitionIndex = 69391;

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

		::System::Void SetIdentifyCustomTip(::RPG::Client::TextID a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_SETIDENTIFYCUSTOMTIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetupOwnerPhotoGraphSys(::RPG::Client::PhotoGraphSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_SETUPOWNERPHOTOGRAPHSYS_OFFSET))(this, a1);
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

		::System::Void Refresh(::System::Collections::Generic::List_1<::Class_1_A27BF87A78CEBB28*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A27BF87A78CEBB28*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_REFRESH_OFFSET))(this, a1);
		}

		::System::Void DisposeAllAims()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_DISPOSEALLAIMS_OFFSET))(this);
		}

		::System::Void ClearAllAims()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_CLEARALLAIMS_OFFSET))(this);
		}

		::System::Void ShowIdentifyResultStatus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_SHOWIDENTIFYRESULTSTATUS_OFFSET))(this, a1);
		}

		::System::Void RefreshPendingAimAniState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_REFRESHPENDINGAIMANISTATE_OFFSET))(this);
		}

		::System::Boolean CheckFirstTargetInPhotoRatio(::UnityEngine::Vector3 a1, ::RPG::GameCore::PhotoGraphTargetSize* a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_CHECKFIRSTTARGETINPHOTORATIO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ClearAims(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__CLEARAIMS_OFFSET))(this, a1);
		}

		::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* _AcquireAim()
		{
			return ((::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__ACQUIREAIM_OFFSET))(this);
		}

		::System::Void _ReleaseAim(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__RELEASEAIM_OFFSET))(this, a1);
		}

		::System::Void _ResetAim(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__RESETAIM_OFFSET))(this, a1);
		}

		::System::Void _DestoryAim(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__DESTORYAIM_OFFSET))(this, a1);
		}

		::System::Int32 _UpdateAimInfoByAimUnion(::System::Int32 a1, ::Class_1_2A2B2DC1DA1205FE* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Class_1_2A2B2DC1DA1205FE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__UPDATEAIMINFOBYAIMUNION_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateAimInfoWorldPos(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__UPDATEAIMINFOWORLDPOS_OFFSET))(this, a1);
		}

		static ::System::Boolean CheckCameraAtAimForward(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_CHECKCAMERAATAIMFORWARD_OFFSET))(a1, a2, a3);
		}

		::UnityEngine::RectTransform* GetIdentifyArea()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_GETIDENTIFYAREA_OFFSET))(this);
		}

		::System::Void _SetAimPos(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* a1, ::System::Boolean a2, ::UnityEngine::Vector3 a3, ::System::Boolean& a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SETAIMPOS_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 _GetLocalPosInIdentifyArea(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__GETLOCALPOSINIDENTIFYAREA_OFFSET))(this, a1);
		}

		::System::Boolean _IsLocalPosInIdentifyArea(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__ISLOCALPOSINIDENTIFYAREA_OFFSET))(this, a1);
		}

		::System::Boolean _IsInIdentifyArea(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__ISINIDENTIFYAREA_OFFSET))(this, a1);
		}

		::System::Void _SwitchIdentifyState(::RPG::Client::PhotoGraphIdentifyState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphIdentifyState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SWITCHIDENTIFYSTATE_OFFSET))(this, a1);
		}

		::System::Void _ResetTimer(::Class_1_23F67DD15593C8D6* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_23F67DD15593C8D6*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__RESETTIMER_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SETUPCONFIG_OFFSET))(this);
		}

		::System::Void _SetupHintMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SETUPHINTMASK_OFFSET))(this);
		}

		::System::Void _ShowHintMask(::System::Boolean a1, ::System::Nullable_1<::UnityEngine::Vector3> a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SHOWHINTMASK_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAimResultStatus(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER__SHOWAIMRESULTSTATUS_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::PhotoGraphIdentifyState get_IdentifyState()
		{
			return ((::RPG::Client::PhotoGraphIdentifyState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_GET_IDENTIFYSTATE_OFFSET))(this);
		}
	};
}
