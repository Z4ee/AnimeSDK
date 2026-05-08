#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_79F6D62CE30E3F8E_102;
namespace Foundation { class ExceptionInfo; }
namespace Foundation { class ParallelFileVerifier; }
namespace MoleMole { class UIControlReference; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ABORTCHECKGAMERESINTEGRITY_OFFSET UNITYSDK_OFFSET(0x13FF74A0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x13FF6890)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ONBUNDLEVERIFIERFINISHED_OFFSET UNITYSDK_OFFSET(0x13FF7600)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ONBUNDLEVERIFIERUPDATE_OFFSET UNITYSDK_OFFSET(0x13FF7500)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ONCANCELREPAIR_OFFSET UNITYSDK_OFFSET(0x13FF73F0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13FF6E80)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ONRETURNUPDATE_OFFSET UNITYSDK_OFFSET(0x13FF8120)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13FF6FC0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13FF68A0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_REPAIRFAILED_OFFSET UNITYSDK_OFFSET(0x13FF7AC0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x13FF70A0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_SHOWREPAIRCONFIRM_OFFSET UNITYSDK_OFFSET(0x13FF7E10)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_SHOWREPAIRFAILED_OFFSET UNITYSDK_OFFSET(0x13FF7B00)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_SHOWREPAIRSUCCESS_OFFSET UNITYSDK_OFFSET(0x13FF82E0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_STARTCHECKGAMERESINTEGRITY_OFFSET UNITYSDK_OFFSET(0x13FF6C80)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_STATE_SHOWREPAIR_OFFSET UNITYSDK_OFFSET(0x13FF6940)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x13FF7040)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_WARMUPSHADERAFTERREPAIR_OFFSET UNITYSDK_OFFSET(0x13FF7580)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF8500)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13FF8510)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13FF85A0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13FF85B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepairPopWindowController_TypeDefinitionIndex = 59639;

	class UIRepairPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_102* _view; // 0x310
		::Foundation::ParallelFileVerifier* _assetBundlesVerifier; // 0x318
		::System::Single _maxProgressValue; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void State_ShowRepair()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_STATE_SHOWREPAIR_OFFSET))(this);
		}

		::System::Void SetProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_SETPROGRESS_OFFSET))(this, progress);
		}

		::System::Void OnCancelRepair()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ONCANCELREPAIR_OFFSET))(this);
		}

		::System::Boolean StartCheckGameResIntegrity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_STARTCHECKGAMERESINTEGRITY_OFFSET))(this);
		}

		::System::Void AbortCheckGameResIntegrity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ABORTCHECKGAMERESINTEGRITY_OFFSET))(this);
		}

		::System::Void OnBundleVerifierUpdate(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ONBUNDLEVERIFIERUPDATE_OFFSET))(this, progress);
		}

		::System::Collections::IEnumerator* WarmupShaderAfterRepair()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_WARMUPSHADERAFTERREPAIR_OFFSET))(this);
		}

		::System::Void OnBundleVerifierFinished(::System::Boolean ret, ::System::Collections::Generic::List_1<::Foundation::ExceptionInfo*>* errorInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::Foundation::ExceptionInfo*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ONBUNDLEVERIFIERFINISHED_OFFSET))(this, ret, errorInfos);
		}

		static ::System::Void RepairFailed()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_REPAIRFAILED_OFFSET))();
		}

		static ::System::Void ShowRepairConfirm()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_SHOWREPAIRCONFIRM_OFFSET))();
		}

		static ::System::Void OnReturnUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ONRETURNUPDATE_OFFSET))();
		}

		static ::System::Void ShowRepairSuccess()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_SHOWREPAIRSUCCESS_OFFSET))();
		}

		static ::System::Void ShowRepairFailed()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_SHOWREPAIRFAILED_OFFSET))();
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
