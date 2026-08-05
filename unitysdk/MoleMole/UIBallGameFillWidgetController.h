#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_190E3717882702BE_1.h"
#include "unitysdk/Enum_3_F3B35B60B7BAFCAF_1.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_D9ECFDE81FE491A6.h"

class Class_2_B8509312F73D164F;
class Class_3_6F28FFD006F2B451;
namespace MoleMole { class UIBallGameFillWidgetController_FillViewData; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILinearProgressBar; }

#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E76F060)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_CONVERTWAVETYPE_OFFSET UNITYSDK_OFFSET(0x1E76F0D0)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONBALLPITKEYMONSTERKILLED_OFFSET UNITYSDK_OFFSET(0x1E76E960)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONBALLPITWAVETIMEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E76E380)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1E76E260)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONLEVELRESTART_OFFSET UNITYSDK_OFFSET(0x1E76E5D0)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1E76E2F0)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1E76DF10)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1E76E080)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONWAVEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E76E7A0)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_PLAYFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x1E76F130)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1E76EB30)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_SAMPLEFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x1E76F290)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_SETAMOUNT_OFFSET UNITYSDK_OFFSET(0x1E76E4D0)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_SETCURRENTWAVE_OFFSET UNITYSDK_OFFSET(0x1E76F390)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E76F3E0)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1E76F550)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1E76F5E0)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1E76F670)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1E76F700)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameFillWidgetController_TypeDefinitionIndex = 93290;

	class UIBallGameFillWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_B8509312F73D164F* _view; // 0x2C0
		::System::Single TotalLength; // 0x2C8
		::Struct_2_D9ECFDE81FE491A6 keyWave; // 0x2D0
		::UnityEngine::UI::Extension::UILinearProgressBar* progressBar; // 0x2E0
		::Class_3_6F28FFD006F2B451* world; // 0x2E8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Enum_3_F3B35B60B7BAFCAF_1>* sourceViewTypes; // 0x2F0
		::System::Collections::Generic::List_1<::MoleMole::UIBallGameFillWidgetController_FillViewData*>* ViewDatas; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnBallPitWaveTimeUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONBALLPITWAVETIMEUPDATE_OFFSET))(this, args);
		}

		::System::Void OnLevelRestart(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONLEVELRESTART_OFFSET))(this, args);
		}

		::System::Void OnWaveUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONWAVEUPDATE_OFFSET))(this, args);
		}

		::System::Void OnBallPitKeyMonsterKilled(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_ONBALLPITKEYMONSTERKILLED_OFFSET))(this, args);
		}

		::System::Void RefreshView(::Struct_2_D9ECFDE81FE491A6 wave)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_D9ECFDE81FE491A6))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, wave);
		}

		::System::Void PlayFadeOutAnimation(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_PLAYFADEOUTANIMATION_OFFSET))(this, callback);
		}

		::System::Void SampleFadeInAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_SAMPLEFADEINANIMATION_OFFSET))(this);
		}

		::System::Void SetAmount(::System::Single percent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_SETAMOUNT_OFFSET))(this, percent);
		}

		::Enum_3_F3B35B60B7BAFCAF_1 ConvertWaveType(::Enum_3_190E3717882702BE_1 type)
		{
			return ((::Enum_3_F3B35B60B7BAFCAF_1(*)(::PVOID, ::Enum_3_190E3717882702BE_1))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_CONVERTWAVETYPE_OFFSET))(this, type);
		}

		::System::Void SetCurrentWave(::System::Int32 waveIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_SETCURRENTWAVE_OFFSET))(this, waveIndex);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_CLEAR_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
