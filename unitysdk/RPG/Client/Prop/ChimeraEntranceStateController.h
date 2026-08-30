#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraPageState.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationStateControllerBase.h"

class Class_1_8F6C894E79DC778D;
class Class_1_CEF50BC26E0B42E9_VirtualCameraConfig;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class ChimeraWorkRoundData; }
namespace RPG::Client::Prop { class ChimeraBubbleTalkParam; }
namespace RPG::Client::Prop { class ChimeraEntranceConfig; }
namespace RPG::Client::Prop { class ChimeraEntranceRoundConfig; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_GET_STATE_OFFSET UNITYSDK_OFFSET(0xDC2B070)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_INFERANDSWITCHTONEXTSTATE_OFFSET UNITYSDK_OFFSET(0xDC2BD30)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_LOADROUNDPREFAB_OFFSET UNITYSDK_OFFSET(0xDC2C010)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_ONENTER_OFFSET UNITYSDK_OFFSET(0xDC2B0C0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_ONEXIT_OFFSET UNITYSDK_OFFSET(0xDC2B5D0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_REFRESHCHIMERAVIEW_OFFSET UNITYSDK_OFFSET(0xDC2C910)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_REFRESHTALKPOP_OFFSET UNITYSDK_OFFSET(0xDC2C8B0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_TRYGETCHIMERATALKINFOLIST_OFFSET UNITYSDK_OFFSET(0xDC2C5A0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_UNLOADROUNDPREFAB_OFFSET UNITYSDK_OFFSET(0xDC2B970)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__ACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0xDC2BCD0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xDC2CAB0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDC2CAA0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__DEACTIVATECAMERA_OFFSET UNITYSDK_OFFSET(0xDC2B910)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__FINDCURRENTROUND_OFFSET UNITYSDK_OFFSET(0xDC2C600)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__HANDLEUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xDC2BB20)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__INITCHIMERAENTRANCEMODELS_OFFSET UNITYSDK_OFFSET(0xDC2C1D0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__LOADCHIMERAENTRANCEMODELS_OFFSET UNITYSDK_OFFSET(0xDC2C480)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__ONENTER_B__3_0_OFFSET UNITYSDK_OFFSET(0xDC2CC50)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__PREPAREENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0xDC2B3E0)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__REACTIVEROUNDCONFIGNODE_OFFSET UNITYSDK_OFFSET(0xDC2C070)
#define RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__SETUPCAMERABLEND_OFFSET UNITYSDK_OFFSET(0xDC2C730)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraEntranceStateController_TypeDefinitionIndex = 78022;

	class ChimeraEntranceStateController : public ::RPG::Client::Prop::ChimeraPreparationStateControllerBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::ChimeraPageState, ::RPG::Client::Prop::ChimeraPreparationState>** StaticGet__PreparationStateOfPage()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::ChimeraPageState, ::RPG::Client::Prop::ChimeraPreparationState>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraEntranceStateController_TypeDefinitionIndex)->GetStaticField(0x64270);
		}
		::RPG::Client::Prop::ChimeraEntranceConfig* _EntranceConfig; // 0x38
		::System::UInt32 _CurrentRoundID; // 0x40
		::RPG::Client::Prop::ChimeraEntranceRoundConfig* _CurrentRound; // 0x48
		::System::Collections::Generic::List_1<::Class_1_8F6C894E79DC778D*>* _ChimeraEntranceModels; // 0x50
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

		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraBubbleTalkParam*>* TryGetChimeraTalkInfoList(::System::Action* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraBubbleTalkParam*>*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER_TRYGETCHIMERATALKINFOLIST_OFFSET))(this, a1);
		}

		::System::Void _PrepareEntrancePage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__PREPAREENTRANCEPAGE_OFFSET))(this, a1);
		}

		::System::Void _SetupCameraBlend(::Class_1_CEF50BC26E0B42E9_VirtualCameraConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CEF50BC26E0B42E9_VirtualCameraConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__SETUPCAMERABLEND_OFFSET))(this, a1);
		}

		::System::Void _ActiveCamera(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__ACTIVECAMERA_OFFSET))(this, a1);
		}

		::System::Void _DeactivateCamera(::Cinemachine::CinemachineVirtualCameraBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__DEACTIVATECAMERA_OFFSET))(this, a1);
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

		::System::Void _OnEnter_b__3_0(::RPG::Client::ChimeraWorkRoundData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraWorkRoundData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCESTATECONTROLLER__ONENTER_B__3_0_OFFSET))(this, a1);
		}
	};
}
