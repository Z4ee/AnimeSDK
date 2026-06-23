#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SummerSurfBar.h"

class Class_2_07F94AA48C3B4F12_1;
namespace MoleMole { class MonoChaserConfig; }
namespace MoleMole { class UIControlReference; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x152D7680)
#define MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER_GET_FILLMAT_OFFSET UNITYSDK_OFFSET(0x152D7670)
#define MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x152D7460)
#define MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x152D7600)
#define MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x152D76A0)
#define MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x152D7700)
#define MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x152D7790)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerSurfRightBarChildWindowController_TypeDefinitionIndex = 82400;

	class UISummerSurfRightBarChildWindowController : public ::MoleMole::SummerSurfBar
	{
	public:
		::Class_2_07F94AA48C3B4F12_1* _view; // 0x330
		::UnityEngine::Material* _material; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::UnityEngine::Material* get_FillMat()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER_GET_FILLMAT_OFFSET))(this);
		}

		::MoleMole::MonoChaserConfig* get_Config()
		{
			return ((::MoleMole::MonoChaserConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER_GET_CONFIG_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
