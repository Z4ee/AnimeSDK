#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_79F6D62CE30E3F8E_13;
namespace Foundation { class ExceptionInfo; }
namespace Foundation { class ParallelFileVerifier; }
namespace MoleMole { class UIControlReference; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ABORTCHECKGAMERESINTEGRITY_OFFSET UNITYSDK_OFFSET(0x169069C0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16905DB0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ONBUNDLEVERIFIERFINISHED_OFFSET UNITYSDK_OFFSET(0x16906B20)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ONBUNDLEVERIFIERUPDATE_OFFSET UNITYSDK_OFFSET(0x16906A20)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ONCANCELREPAIR_OFFSET UNITYSDK_OFFSET(0x16906910)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x169063B0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ONRETURNUPDATE_OFFSET UNITYSDK_OFFSET(0x16907650)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x169064F0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16905DC0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_REPAIRFAILED_OFFSET UNITYSDK_OFFSET(0x16906FF0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x169065D0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_SHOWREPAIRCONFIRM_OFFSET UNITYSDK_OFFSET(0x16907340)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_SHOWREPAIRFAILED_OFFSET UNITYSDK_OFFSET(0x16907030)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_SHOWREPAIRSUCCESS_OFFSET UNITYSDK_OFFSET(0x16907810)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_STARTCHECKGAMERESINTEGRITY_OFFSET UNITYSDK_OFFSET(0x169061B0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_STATE_SHOWREPAIR_OFFSET UNITYSDK_OFFSET(0x16905E60)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16906570)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER_WARMUPSHADERAFTERREPAIR_OFFSET UNITYSDK_OFFSET(0x16906AA0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16907A30)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16907A40)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16907AD0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16907AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepairPopWindowController_TypeDefinitionIndex = 44737;

	class UIRepairPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_13* _view; // 0x318
		::Foundation::ParallelFileVerifier* _assetBundlesVerifier; // 0x320
		::System::Single _maxProgressValue; // 0x328

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
