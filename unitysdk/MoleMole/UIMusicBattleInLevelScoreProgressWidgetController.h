#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_5E2FBACADDB625B7_12;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_ACTIVATEFEVER_OFFSET UNITYSDK_OFFSET(0x174EADC0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_INITSCOREWIDGET_OFFSET UNITYSDK_OFFSET(0x174EA3A0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x174EA750)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x174EA7E0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x174EA320)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_UPDATEFEVERDISPLAY_OFFSET UNITYSDK_OFFSET(0x174EABE0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_UPDATEFEVERPROGRESS_OFFSET UNITYSDK_OFFSET(0x174EAD30)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_UPDATEFILLPROGRESSINTERNAL_OFFSET UNITYSDK_OFFSET(0x174EA910)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_UPDATEFILLPROGRESS_OFFSET UNITYSDK_OFFSET(0x174EAC30)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x174EAF40)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x174EAFA0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x174EB030)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x174EB0C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleInLevelScoreProgressWidgetController_TypeDefinitionIndex = 71119;

	class UIMusicBattleInLevelScoreProgressWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_5E2FBACADDB625B7_12* _view; // 0x2C0
		::UnityEngine::Vector2 _base; // 0x2C8
		::System::Single _length; // 0x2D0
		::Foundation::Coroutine::CoroutineHandle _waitFeverOver; // 0x2D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitScoreWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_INITSCOREWIDGET_OFFSET))(this);
		}

		::System::Void UpdateFillProgressInternal(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_UPDATEFILLPROGRESSINTERNAL_OFFSET))(this, progress);
		}

		::System::Void UpdateFeverDisplay(::System::Boolean isFever)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_UPDATEFEVERDISPLAY_OFFSET))(this, isFever);
		}

		::System::Void UpdateFillProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_UPDATEFILLPROGRESS_OFFSET))(this, progress);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* UpdateFeverProgress(::System::Single feverTime)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_UPDATEFEVERPROGRESS_OFFSET))(this, feverTime);
		}

		::System::Void ActivateFever(::System::Single feverTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER_ACTIVATEFEVER_OFFSET))(this, feverTime);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREPROGRESSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
