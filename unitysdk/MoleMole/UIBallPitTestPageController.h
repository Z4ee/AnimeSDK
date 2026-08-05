#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_22FEBBA7FA4D4D4A;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1601DF30)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_ONBALLPITLEVELFINISH_OFFSET UNITYSDK_OFFSET(0x1601E330)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_ONBALLPITWAVEINIT_OFFSET UNITYSDK_OFFSET(0x1601E5E0)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_ONBALLPITWAVEUPDATE_OFFSET UNITYSDK_OFFSET(0x1601E380)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1601DF40)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1601E2C0)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1601DFD0)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1601E0E0)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_SETWAVEIMAGE_OFFSET UNITYSDK_OFFSET(0x1601E3F0)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1601E930)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1601E9D0)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1601EA20)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1601EA30)
#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1601EA40)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallPitTestPageController_TypeDefinitionIndex = 75561;

	class UIBallPitTestPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_22FEBBA7FA4D4D4A* _view; // 0x318
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::Image*>* waveImage; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnBallPitLevelFinish(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_ONBALLPITLEVELFINISH_OFFSET))(this, args);
		}

		::System::Void OnBallPitWaveUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_ONBALLPITWAVEUPDATE_OFFSET))(this, args);
		}

		::System::Void OnBallPitWaveInit(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_ONBALLPITWAVEINIT_OFFSET))(this, args);
		}

		::System::Void SetWaveImage(::System::Int32 currentWave)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_SETWAVEIMAGE_OFFSET))(this, currentWave);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
