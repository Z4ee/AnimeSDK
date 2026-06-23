#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_D7D86686B0E3764C;
namespace MoleMole { class UIBangbooGroupPhotoRowContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x187C3950)
#define MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER_ONPHOTOPOINTACTIVECHANGE_OFFSET UNITYSDK_OFFSET(0x187C3F30)
#define MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x187C3B20)
#define MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x187C39E0)
#define MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x187C3660)
#define MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x187C36C0)
#define MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER_PLAYANIMACTIVE_OFFSET UNITYSDK_OFFSET(0x187C3D00)
#define MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x187C38D0)
#define MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x187C3F80)
#define MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x187C3F90)
#define MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x187C4020)
#define MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x187C40C0)
#define MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x187C4150)
#define MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x187C41E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooGroupPhotoRowWidgetController_TypeDefinitionIndex = 69335;

	class UIBangbooGroupPhotoRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_D7D86686B0E3764C* _view; // 0x2F0
		::MoleMole::UIBangbooGroupPhotoRowContext* _context; // 0x2F8
		::System::Nullable_1<::System::Boolean> _isShowFinish; // 0x300
		::UnityEngine::Coroutine* finishCoroutine; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnPhotoPointActiveChange(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER_ONPHOTOPOINTACTIVECHANGE_OFFSET))(this, active);
		}

		::System::Void RefreshUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER_REFRESHUI_OFFSET))(this);
		}

		::System::Void PlayAnimActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER_PLAYANIMACTIVE_OFFSET))(this, active);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOGROUPPHOTOROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
