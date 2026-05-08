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

#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETBGANIM_OFFSET UNITYSDK_OFFSET(0x126AB780)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETBLACKMASKANIM_OFFSET UNITYSDK_OFFSET(0x126AB840)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETCONTENTGO_OFFSET UNITYSDK_OFFSET(0x126AB8A0)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETINFOANIM_OFFSET UNITYSDK_OFFSET(0x126AB7E0)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GETSKIPBTNANIM_OFFSET UNITYSDK_OFFSET(0x126AB720)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x126AAFF0)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x126AB1D0)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x126AB000)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_ONSKIPBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x126AB910)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x126AB6B0)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x126AB090)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x126AB0E0)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x126ABA10)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x126ABA20)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x126ABAB0)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x126ABAC0)
#define MOLEMOLE_UIVIDEOSHOPSHOWPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x126ABAD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopShowPageController_TypeDefinitionIndex = 63236;

	class UIVideoshopShowPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_860E9D46445B69C0* _view; // 0x310
		::MoleMole::UIVideoshopShowContext* _context; // 0x318

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
