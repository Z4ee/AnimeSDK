#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/ScreenOrientation.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIScreenSizeManager_Class_3_340DA576D305E267; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UISCREENSIZEMANAGER_ADD_ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x15A26460)
#define MOLEMOLE_UISCREENSIZEMANAGER_ADD_UPDATE_OFFSET UNITYSDK_OFFSET(0x15A26620)
#define MOLEMOLE_UISCREENSIZEMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x15A267E0)
#define MOLEMOLE_UISCREENSIZEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15A268B0)
#define MOLEMOLE_UISCREENSIZEMANAGER_MARKLAYOUTFORREBUILD_OFFSET UNITYSDK_OFFSET(0x15A26DC0)
#define MOLEMOLE_UISCREENSIZEMANAGER_METHOD_5_11C95569233D7E49_OFFSET UNITYSDK_OFFSET(0x15A26BA0)
#define MOLEMOLE_UISCREENSIZEMANAGER_REMOVE_ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x15A26540)
#define MOLEMOLE_UISCREENSIZEMANAGER_REMOVE_UPDATE_OFFSET UNITYSDK_OFFSET(0x15A26700)
#define MOLEMOLE_UISCREENSIZEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A26EA0)
#define MOLEMOLE_UISCREENSIZEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15A26E50)

namespace MoleMole
{
	inline static constexpr unsigned int UIScreenSizeManager_TypeDefinitionIndex = 69651;

	class UIScreenSizeManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::UIScreenSizeManager_Class_3_340DA576D305E267** StaticGet_Field_5_1()
		{
			return (::MoleMole::UIScreenSizeManager_Class_3_340DA576D305E267**)Il2CppClass::FromTypeDefinitionIndex(UIScreenSizeManager_TypeDefinitionIndex)->GetStaticField(0x492C0);
		}
		static ::System::String** StaticGet_Field_5_5()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIScreenSizeManager_TypeDefinitionIndex)->GetStaticField(0x492C8);
		}
		static ::System::Action** StaticGet_Field_5_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIScreenSizeManager_TypeDefinitionIndex)->GetStaticField(0x492D0);
		}
		static ::UnityEngine::Vector2* StaticGet_Field_5_7()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIScreenSizeManager_TypeDefinitionIndex)->GetStaticField(0x10DA0);
		}
		static ::System::Boolean* StaticGet_RightClickOpenView()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIScreenSizeManager_TypeDefinitionIndex)->GetStaticField(0x10DA8);
		}
		static ::System::Int32* StaticGet_Field_5_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIScreenSizeManager_TypeDefinitionIndex)->GetStaticField(0x10DAC);
		}
		static ::UnityEngine::ScreenOrientation* StaticGet_Field_5_6()
		{
			return (::UnityEngine::ScreenOrientation*)Il2CppClass::FromTypeDefinitionIndex(UIScreenSizeManager_TypeDefinitionIndex)->GetStaticField(0x10DB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void add_onScreenSizeChanged(::MoleMole::UIScreenSizeManager_Class_3_340DA576D305E267* a1)
		{
			return ((::System::Void(*)(::MoleMole::UIScreenSizeManager_Class_3_340DA576D305E267*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_ADD_ONSCREENSIZECHANGED_OFFSET))(a1);
		}

		static ::System::Void remove_onScreenSizeChanged(::MoleMole::UIScreenSizeManager_Class_3_340DA576D305E267* a1)
		{
			return ((::System::Void(*)(::MoleMole::UIScreenSizeManager_Class_3_340DA576D305E267*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_REMOVE_ONSCREENSIZECHANGED_OFFSET))(a1);
		}

		static ::System::Void add_update(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_ADD_UPDATE_OFFSET))(a1);
		}

		static ::System::Void remove_update(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_REMOVE_UPDATE_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_LATEUPDATE_OFFSET))(this);
		}

		static ::System::Void MarkLayoutForRebuild()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_MARKLAYOUTFORREBUILD_OFFSET))();
		}

		static ::System::Void Method_5_11C95569233D7E49(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_METHOD_5_11C95569233D7E49_OFFSET))(a1, a2);
		}
	};
}
