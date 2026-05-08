#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }

#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16CCDAC0)
#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16CCDEF0)
#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16CCDF80)
#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16CCDAD0)
#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16CCDC30)
#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CCDFE0)
#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16CCDFD0)
#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16CCE030)
#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16CCE0F0)
#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16CCE100)
#define MOLEMOLE_UIGENERALBLACKMASKCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16CCE110)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBlackMaskController_TypeDefinitionIndex = 56629;

	class UIGeneralBlackMaskController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::String** StaticGet_FadeInAnimName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralBlackMaskController_TypeDefinitionIndex)->GetStaticField(0x44940);
		}
		static ::System::String** StaticGet_FadeOutAnimName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralBlackMaskController_TypeDefinitionIndex)->GetStaticField(0x44948);
		}
		::UnityEngine::Animation* _animation; // 0x310
		::UnityEngine::CanvasGroup* _canvasGroup; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
