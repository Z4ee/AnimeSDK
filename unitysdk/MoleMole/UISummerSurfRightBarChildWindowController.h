#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SummerSurfBar.h"

class Class_2_07F94AA48C3B4F12;
namespace MoleMole { class MonoChaserConfig; }
namespace MoleMole { class UIControlReference; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x151AEB40)
#define MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER_GET_FILLMAT_OFFSET UNITYSDK_OFFSET(0x151AEB30)
#define MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x151AE910)
#define MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x151AEAC0)
#define MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x151AEB60)
#define MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x151AEBC0)
#define MOLEMOLE_UISUMMERSURFRIGHTBARCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x151AEC50)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerSurfRightBarChildWindowController_TypeDefinitionIndex = 77215;

	class UISummerSurfRightBarChildWindowController : public ::MoleMole::SummerSurfBar
	{
	public:
		::Class_2_07F94AA48C3B4F12* _view; // 0x330
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
