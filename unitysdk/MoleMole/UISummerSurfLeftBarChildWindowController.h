#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SummerSurfBar.h"

class Class_2_07F94AA48C3B4F12;
namespace MoleMole { class MonoChaserConfig; }
namespace MoleMole { class UIControlReference; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UISUMMERSURFLEFTBARCHILDWINDOWCONTROLLER_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x152D7340)
#define MOLEMOLE_UISUMMERSURFLEFTBARCHILDWINDOWCONTROLLER_GET_FILLMAT_OFFSET UNITYSDK_OFFSET(0x152D7330)
#define MOLEMOLE_UISUMMERSURFLEFTBARCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x152D7120)
#define MOLEMOLE_UISUMMERSURFLEFTBARCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x152D72C0)
#define MOLEMOLE_UISUMMERSURFLEFTBARCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x152D7360)
#define MOLEMOLE_UISUMMERSURFLEFTBARCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x152D73C0)
#define MOLEMOLE_UISUMMERSURFLEFTBARCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x152D7450)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerSurfLeftBarChildWindowController_TypeDefinitionIndex = 78711;

	class UISummerSurfLeftBarChildWindowController : public ::MoleMole::SummerSurfBar
	{
	public:
		::Class_2_07F94AA48C3B4F12* _view; // 0x330
		::UnityEngine::Material* _material; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSURFLEFTBARCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSURFLEFTBARCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSURFLEFTBARCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::UnityEngine::Material* get_FillMat()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSURFLEFTBARCHILDWINDOWCONTROLLER_GET_FILLMAT_OFFSET))(this);
		}

		::MoleMole::MonoChaserConfig* get_Config()
		{
			return ((::MoleMole::MonoChaserConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSURFLEFTBARCHILDWINDOWCONTROLLER_GET_CONFIG_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSURFLEFTBARCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSURFLEFTBARCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
