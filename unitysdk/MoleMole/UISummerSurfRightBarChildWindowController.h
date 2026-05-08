#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SummerSurfBar.h"

class Class_2_07F94AA48C3B4F12_1;
namespace MoleMole { class MonoChaserConfig; }
namespace MoleMole { class UIControlReference; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE464490)
#define MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER_GET_FILLMAT_OFFSET UNITYSDK_OFFSET(0xE464480)
#define MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xE464270)
#define MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xE464410)
#define MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE4644B0)
#define MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xE464510)
#define MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xE4645A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerSurfRightBarChildWindowController_TypeDefinitionIndex = 71453;

	class UISummerSurfRightBarChildWindowController : public ::MoleMole::SummerSurfBar
	{
	public:
		::Class_2_07F94AA48C3B4F12_1* _view; // 0x328
		::UnityEngine::Material* _material; // 0x330

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
