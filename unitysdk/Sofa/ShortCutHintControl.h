#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_2_EF38A48BFE5B16E9;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class UIPartialBlur; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define SOFA_SHORTCUTHINTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE9790E0)
#define SOFA_SHORTCUTHINTCONTROL__GETSHORTCUTINFOITEM_OFFSET UNITYSDK_OFFSET(0xE978910)
#define SOFA_SHORTCUTHINTCONTROL__LOADHINTROOT_OFFSET UNITYSDK_OFFSET(0xE977F30)
#define SOFA_SHORTCUTHINTCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE977EC0)
#define SOFA_SHORTCUTHINTCONTROL__ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE977E40)
#define SOFA_SHORTCUTHINTCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xE977BB0)
#define SOFA_SHORTCUTHINTCONTROL__ONINPUTDEVICECLASSSWITCHED_OFFSET UNITYSDK_OFFSET(0xE978E20)
#define SOFA_SHORTCUTHINTCONTROL__ONINPUTFILEDSELECTEDCHANGED_OFFSET UNITYSDK_OFFSET(0xE978C80)
#define SOFA_SHORTCUTHINTCONTROL__ONPREFABLOAD_OFFSET UNITYSDK_OFFSET(0xE978190)
#define SOFA_SHORTCUTHINTCONTROL__ONUIFOCUSCONTROLLERCHANGED_OFFSET UNITYSDK_OFFSET(0xE978F30)
#define SOFA_SHORTCUTHINTCONTROL__REFRESHACTIVE_OFFSET UNITYSDK_OFFSET(0xE978400)
#define SOFA_SHORTCUTHINTCONTROL__REFRESHBYNAVIGATIONZONE_OFFSET UNITYSDK_OFFSET(0xE9782C0)
#define SOFA_SHORTCUTHINTCONTROL__REFRESHSHORTCUTINFOITEMS_OFFSET UNITYSDK_OFFSET(0xE978760)

namespace Sofa
{
	inline static constexpr unsigned int ShortCutHintControl_TypeDefinitionIndex = 49689;

	class ShortCutHintControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* _DEFAULT_DIALOG_HINT_PATH; // 0x0
		// static const ::System::String* _DEFAULT_FULLSCREEN_PREFAB_PATH; // 0x0
		// static const ::System::String* _DEFAULT_PREFAB_PATH; // 0x0
		::UnityEngine::Transform* NodeHintParent; // 0x40
		::System::Boolean _IsFullScreen; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* _ActionNames; // 0x50
		::RPG::UINavigation::UINavigationZoneManager* _ZoneManager; // 0x58
		::UnityEngine::Transform* _NodeParent; // 0x60
		::UnityEngine::RectTransform* _NodeTipRoot; // 0x68
		::RPG::Client::PrefabLoadMeta* _ContentPrefabLoad; // 0x70
		::RPG::Client::UIPartialBlur* _PartialBlur; // 0x78
		::UnityEngine::Transform* _NodeBg; // 0x80
		::System::Collections::Generic::List_1<::Class_2_EF38A48BFE5B16E9*>* _ShortCutInfoItems; // 0x88
		::System::Collections::Generic::List_1<::System::String*>* _DefaultActionNames; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL__ONDESTROY_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _LoadHintRoot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL__LOADHINTROOT_OFFSET))(this);
		}

		::System::Void _OnPrefabLoad(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL__ONPREFABLOAD_OFFSET))(this, a1);
		}

		::System::Void _RefreshByNavigationZone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL__REFRESHBYNAVIGATIONZONE_OFFSET))(this);
		}

		::System::Void _RefreshActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL__REFRESHACTIVE_OFFSET))(this);
		}

		::System::Void _RefreshShortCutInfoItems(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL__REFRESHSHORTCUTINFOITEMS_OFFSET))(this, a1);
		}

		::Class_2_EF38A48BFE5B16E9* _GetShortCutInfoItem(::System::Int32 a1)
		{
			return ((::Class_2_EF38A48BFE5B16E9*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL__GETSHORTCUTINFOITEM_OFFSET))(this, a1);
		}

		::System::Void _OnInputFiledSelectedChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL__ONINPUTFILEDSELECTEDCHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnInputDeviceClassSwitched(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL__ONINPUTDEVICECLASSSWITCHED_OFFSET))(this, a1);
		}

		::System::Void _OnUIFocusControllerChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SOFA_SHORTCUTHINTCONTROL__ONUIFOCUSCONTROLLERCHANGED_OFFSET))(this, a1);
		}
	};
}
