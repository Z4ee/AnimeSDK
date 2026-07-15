#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

namespace Sofa { class BaseSofaWindow; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define SOFA_BASESOFAWINDOW_SOFAUICONTROLLER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x14EBC8F0)
#define SOFA_BASESOFAWINDOW_SOFAUICONTROLLER_ONINCONTROLEXIT_OFFSET UNITYSDK_OFFSET(0x14EBC970)
#define SOFA_BASESOFAWINDOW_SOFAUICONTROLLER_SETNAVIGATIONTARGET_OFFSET UNITYSDK_OFFSET(0x14EBB9C0)
#define SOFA_BASESOFAWINDOW_SOFAUICONTROLLER_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x14EBC480)
#define SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14EBB240)
#define SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x14EBC4E0)
#define SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__ONENTRANCEANIMEND_OFFSET UNITYSDK_OFFSET(0x14EBC5A0)
#define SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x14EBC740)
#define SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__ONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0x14EBC670)
#define SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__ONTICK_OFFSET UNITYSDK_OFFSET(0x14EBC810)
#define SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x14EBC540)

namespace Sofa
{
	inline static constexpr unsigned int BaseSofaWindow_SofaUIController_TypeDefinitionIndex = 45911;

	class BaseSofaWindow_SofaUIController : public ::RPG::Client::UIController
	{
	public:
		::Sofa::BaseSofaWindow* _View; // 0x180

		::System::Void _ctor(::Sofa::BaseSofaWindow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaWindow*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__CTOR_OFFSET))(this, a1);
		}

		::System::String* ViewPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SOFAUICONTROLLER_VIEWPREFABPATH_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnEntranceAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__ONENTRANCEANIMEND_OFFSET))(this);
		}

		::System::Void _OnStartExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__ONSTARTEXIT_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SOFAUICONTROLLER__ONTICK_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SOFAUICONTROLLER_GET_NAME_OFFSET))(this);
		}

		::System::Void OnInControlExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SOFAUICONTROLLER_ONINCONTROLEXIT_OFFSET))(this);
		}

		::System::Void SetNavigationTarget(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SOFAUICONTROLLER_SETNAVIGATIONTARGET_OFFSET))(this, a1);
		}
	};
}
