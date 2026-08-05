#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_7EFBB899B4E4B40A_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A9ED50)
#define MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A9EDE0)
#define MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A9EC80)
#define MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19A9ECE0)
#define MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER_REFRESHMOVIE_OFFSET UNITYSDK_OFFSET(0x19A9EE60)
#define MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A9F0C0)
#define MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A9F120)
#define MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A9F1B0)
#define MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A9F240)
#define MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19A9F2D0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaNewMovieWidgetController_TypeDefinitionIndex = 54360;

	class UICinemaNewMovieWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7EFBB899B4E4B40A_2* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshMovie(::System::Int32 cinemaID, ::System::Boolean isSingleLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER_REFRESHMOVIE_OFFSET))(this, cinemaID, isSingleLevel);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWMOVIEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
