#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/MoleMole/UIControlReference_UICtrlType.h"
#include "unitysdk/MoleMole/UIExportCollection.h"

namespace MoleMole { class IScreenLayout; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class MonoUILayoutAdaptorBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICONTROLREFERENCE_APPLYLAYOUTBYPLATFORM_OFFSET UNITYSDK_OFFSET(0x16CA5FF0)
#define MOLEMOLE_UICONTROLREFERENCE_AWAKE_OFFSET UNITYSDK_OFFSET(0x16CA58C0)
#define MOLEMOLE_UICONTROLREFERENCE_COLLECTISCREENLAYOUTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x16CA5E70)
#define MOLEMOLE_UICONTROLREFERENCE_COLLECTMULTILAYOUTPLATFORMCOMPONENT_OFFSET UNITYSDK_OFFSET(0x16CA5B70)
#define MOLEMOLE_UICONTROLREFERENCE_FORCEREBUILDLAYOUT_OFFSET UNITYSDK_OFFSET(0x16CA6230)
#define MOLEMOLE_UICONTROLREFERENCE_GET_ISVALIDCTRL_OFFSET UNITYSDK_OFFSET(0x16CA57E0)
#define MOLEMOLE_UICONTROLREFERENCE_INITLAYOUT_OFFSET UNITYSDK_OFFSET(0x16CA5AC0)
#define MOLEMOLE_UICONTROLREFERENCE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16CA5920)
#define MOLEMOLE_UICONTROLREFERENCE_SHOWEXPORTDIR_OFFSET UNITYSDK_OFFSET(0x16CA5880)
#define MOLEMOLE_UICONTROLREFERENCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16CA6560)
#define MOLEMOLE_UICONTROLREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA65C0)
#define MOLEMOLE_UICONTROLREFERENCE___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16CA6650)

namespace MoleMole
{
	inline static constexpr unsigned int UIControlReference_TypeDefinitionIndex = 50814;

	class UIControlReference : public ::MoleMole::UIExportCollection
	{
	public:
		::MoleMole::UIControlReference_UICtrlType ctrlType; // 0x80
		::System::String* ctrlName; // 0x88
		::System::Collections::Generic::List_1<::MoleMole::MonoUILayoutAdaptorBase*>* UILayoutAdaptors; // 0x90
		::System::Collections::Generic::List_1<::MoleMole::MonoInputKey*>* UIInputKeys; // 0x98
		::System::Collections::Generic::List_1<::MoleMole::MonoGamepadSelectable*>* UIGamepadSelectables; // 0xA0
		::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>* UIGamepadModules; // 0xA8
		::System::Collections::Generic::List_1<::MoleMole::IScreenLayout*>* UIScreenLayouts; // 0xB0
		::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>* currentFocusModules; // 0xB8
		::System::Collections::Generic::List_1<::MoleMole::MonoUILayoutAdaptorBase*>* _uiLayoutAdaptors; // 0xC0
		::System::Collections::Generic::List_1<::MoleMole::IScreenLayout*>* _uiScreenLayouts; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLREFERENCE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValidCtrl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLREFERENCE_GET_ISVALIDCTRL_OFFSET))(this);
		}

		::System::Boolean ShowExportDir()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLREFERENCE_SHOWEXPORTDIR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLREFERENCE_AWAKE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLREFERENCE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitLayout(::System::Boolean createFromCache)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLREFERENCE_INITLAYOUT_OFFSET))(this, createFromCache);
		}

		::System::Void CollectMultiLayoutPlatformComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLREFERENCE_COLLECTMULTILAYOUTPLATFORMCOMPONENT_OFFSET))(this);
		}

		::System::Void CollectIScreenLayoutComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLREFERENCE_COLLECTISCREENLAYOUTCOMPONENT_OFFSET))(this);
		}

		::System::Void ApplyLayoutByPlatform(::MoleMole::EUILayoutPlatform layoutPlatform)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLREFERENCE_APPLYLAYOUTBYPLATFORM_OFFSET))(this, layoutPlatform);
		}

		::System::Void ForceRebuildLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLREFERENCE_FORCEREBUILDLAYOUT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLREFERENCE_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLREFERENCE___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
