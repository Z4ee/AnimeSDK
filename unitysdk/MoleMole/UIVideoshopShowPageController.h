#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_860E9D46445B69C0;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIVideoshopShowContext; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETBGANIM_OFFSET UNITYSDK_OFFSET(0x140DCDF0)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETBLACKMASKANIM_OFFSET UNITYSDK_OFFSET(0x140DCEB0)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETCONTENTGO_OFFSET UNITYSDK_OFFSET(0x140DCF10)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETINFOANIM_OFFSET UNITYSDK_OFFSET(0x140DCE50)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETSKIPBTNANIM_OFFSET UNITYSDK_OFFSET(0x140DCD90)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x140DC700)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x140DC8E0)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x140DC710)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_ONSKIPBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x140DCF80)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x140DCD20)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x140DC7A0)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x140DC7F0)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x140DD080)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x140DD090)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x140DD120)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x140DD130)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x140DD140)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopShowPageController_TypeDefinitionIndex = 58164;

	class UIVideoshopShowPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_860E9D46445B69C0* _view; // 0x318
		::MoleMole::UIVideoshopShowContext* _context; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::UnityEngine::Animation* GetSkipBtnAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETSKIPBTNANIM_OFFSET))(this);
		}

		::UnityEngine::Animation* GetBgAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETBGANIM_OFFSET))(this);
		}

		::UnityEngine::Animation* GetInfoAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETINFOANIM_OFFSET))(this);
		}

		::UnityEngine::Animation* GetBlackMaskAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETBLACKMASKANIM_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetContentGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETCONTENTGO_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnSkipBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_ONSKIPBTNCLICKED_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
