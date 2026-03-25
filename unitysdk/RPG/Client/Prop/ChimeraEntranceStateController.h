#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraPageState.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationStateControllerBase.h"

class Class_1_935412A31E52F0D6;
class Class_1_CEF50BC26E0B42E9_VirtualCameraConfig;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class ChimeraWorkRoundData; }
namespace RPG::Client::Prop { class ChimeraBubbleTalkParam; }
namespace RPG::Client::Prop { class ChimeraEntranceConfig; }
namespace RPG::Client::Prop { class ChimeraEntranceRoundConfig; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_GET_STATE_OFFSET UNITYSDK_OFFSET(0xA05D500)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_INFERANDSWITCHTONEXTSTATE_OFFSET UNITYSDK_OFFSET(0xA05E1C0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_LOADROUNDPREFAB_OFFSET UNITYSDK_OFFSET(0xA05E4A0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_ONENTER_OFFSET UNITYSDK_OFFSET(0xA05D550)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_ONEXIT_OFFSET UNITYSDK_OFFSET(0xA05DA60)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_REFRESHCHIMERAVIEW_OFFSET UNITYSDK_OFFSET(0xA05EDE0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_REFRESHTALKPOP_OFFSET UNITYSDK_OFFSET(0xA05ED90)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_TRYGETCHIMERATALKINFOLIST_OFFSET UNITYSDK_OFFSET(0xA05EA30)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_UNLOADROUNDPREFAB_OFFSET UNITYSDK_OFFSET(0xA05DDD0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__ACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xA05E160)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA05EFA0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA05EF90)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__DEACTIVATECAMERA_OFFSET UNITYSDK_OFFSET(0xA05DD70)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__FINDCURRENTROUND_OFFSET UNITYSDK_OFFSET(0xA05EA90)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__HANDLEUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xA05DFB0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__INITCHIMERAENTRANCEMODELS_OFFSET UNITYSDK_OFFSET(0xA05E680)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__LOADCHIMERAENTRANCEMODELS_OFFSET UNITYSDK_OFFSET(0xA05E8E0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__ONENTER_B__3_0_OFFSET UNITYSDK_OFFSET(0xA05F140)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__PREPAREENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0xA05D860)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__REACTIVEROUNDCONFIGNODE_OFFSET UNITYSDK_OFFSET(0xA05E500)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__SETUPCAMERABLEND_OFFSET UNITYSDK_OFFSET(0xA05EC00)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER___IFIXBASEPROXY_ONENTER_OFFSET UNITYSDK_OFFSET(0xA05F160)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER___IFIXBASEPROXY_ONEXIT_OFFSET UNITYSDK_OFFSET(0xA05F170)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER___IFIXBASEPROXY__HANDLEUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xA05F180)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraEntranceStateController_TypeDefinitionIndex = 63942;

	class ChimeraEntranceStateController : public ::RPG::Client::Prop::ChimeraPreparationStateControllerBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::ChimeraPageState, ::RPG::Client::Prop::ChimeraPreparationState>** StaticGet__PreparationStateOfPage()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::ChimeraPageState, ::RPG::Client::Prop::ChimeraPreparationState>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraEntranceStateController_TypeDefinitionIndex)->GetStaticField(0x47EF0);
		}
		::RPG::Client::Prop::ChimeraEntranceConfig* _EntranceConfig; // 0x38
		::System::UInt32 _CurrentRoundID; // 0x40
		::RPG::Client::Prop::ChimeraEntranceRoundConfig* _CurrentRound; // 0x48
		::System::Collections::Generic::List_1<::Class_1_935412A31E52F0D6*>* _ChimeraEntranceModels; // 0x50
		::System::Action* _TalkPopRefreshCallback; // 0x58
		::Cinemachine::CinemachineVirtualCameraBase* _ActiveVirtualCamera; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__CCTOR_OFFSET))();
		}

		::RPG::Client::Prop::ChimeraPreparationState get_State()
		{
			return ((::RPG::Client::Prop::ChimeraPreparationState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_GET_STATE_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_ONENTER_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_ONEXIT_OFFSET))(this);
		}

		::System::Void _HandleUIScreenSizeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__HANDLEUISCREENSIZECHANGED_OFFSET))(this);
		}

		::System::Void InferAndSwitchToNextState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_INFERANDSWITCHTONEXTSTATE_OFFSET))(this);
		}

		::System::Void LoadRoundPrefab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_LOADROUNDPREFAB_OFFSET))(this);
		}

		::System::Void UnloadRoundPrefab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_UNLOADROUNDPREFAB_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraBubbleTalkParam*>* TryGetChimeraTalkInfoList(::System::Action* callback)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraBubbleTalkParam*>*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_TRYGETCHIMERATALKINFOLIST_OFFSET))(this, callback);
		}

		::System::Void _PrepareEntrancePage(::System::UInt32 roundID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__PREPAREENTRANCEPAGE_OFFSET))(this, roundID);
		}

		::System::Void _SetupCameraBlend(::Class_1_CEF50BC26E0B42E9_VirtualCameraConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CEF50BC26E0B42E9_VirtualCameraConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__SETUPCAMERABLEND_OFFSET))(this, config);
		}

		::System::Void _ActiveCamera(::Cinemachine::CinemachineVirtualCameraBase* vCam)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__ACTIVECAMERA_OFFSET))(this, vCam);
		}

		::System::Void _DeactivateCamera(::Cinemachine::CinemachineVirtualCameraBase* vCam)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__DEACTIVATECAMERA_OFFSET))(this, vCam);
		}

		::System::Void _FindCurrentRound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__FINDCURRENTROUND_OFFSET))(this);
		}

		::System::Void _ReactiveRoundConfigNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__REACTIVEROUNDCONFIGNODE_OFFSET))(this);
		}

		::System::Void _InitChimeraEntranceModels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__INITCHIMERAENTRANCEMODELS_OFFSET))(this);
		}

		::System::Void _LoadChimeraEntranceModels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__LOADCHIMERAENTRANCEMODELS_OFFSET))(this);
		}

		::System::Void RefreshTalkPop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_REFRESHTALKPOP_OFFSET))(this);
		}

		::System::Void RefreshChimeraView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_REFRESHCHIMERAVIEW_OFFSET))(this);
		}

		::System::Void _OnEnter_b__3_0(::RPG::Client::ChimeraWorkRoundData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraWorkRoundData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__ONENTER_B__3_0_OFFSET))(this, data);
		}

		::System::Void __iFixBaseProxy_OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER___IFIXBASEPROXY_ONENTER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER___IFIXBASEPROXY_ONEXIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__HandleUIScreenSizeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER___IFIXBASEPROXY__HANDLEUISCREENSIZECHANGED_OFFSET))(this);
		}
	};
}
