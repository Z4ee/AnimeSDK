#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/Key.h"
#include "unitysdk/InControl/UnityKeyboardProvider_KeyMapping.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/KeyCode.h"

namespace InControl { class KeyboardLayoutWatcher; }
namespace System { class String; }

#define INCONTROL_UNITYKEYBOARDPROVIDER_ANYKEYISPRESSED_OFFSET UNITYSDK_OFFSET(0x15D10AA0)
#define INCONTROL_UNITYKEYBOARDPROVIDER_GETKEYBOARDLAYOUTTYPE_OFFSET UNITYSDK_OFFSET(0x15D10E70)
#define INCONTROL_UNITYKEYBOARDPROVIDER_GETKEYISPRESSED_OFFSET UNITYSDK_OFFSET(0x15D10AB0)
#define INCONTROL_UNITYKEYBOARDPROVIDER_GETKEYWASPRESSED_OFFSET UNITYSDK_OFFSET(0x15D10C60)
#define INCONTROL_UNITYKEYBOARDPROVIDER_GETNAMEFORKEY_OFFSET UNITYSDK_OFFSET(0x15D10B90)
#define INCONTROL_UNITYKEYBOARDPROVIDER_GETUINTYKEY_OFFSET UNITYSDK_OFFSET(0x15D10D40)
#define INCONTROL_UNITYKEYBOARDPROVIDER_ONKEYBOARDCHANGED_OFFSET UNITYSDK_OFFSET(0x15D10DB0)
#define INCONTROL_UNITYKEYBOARDPROVIDER_RESET_OFFSET UNITYSDK_OFFSET(0x15D10A80)
#define INCONTROL_UNITYKEYBOARDPROVIDER_SETUP_OFFSET UNITYSDK_OFFSET(0x15D109D0)
#define INCONTROL_UNITYKEYBOARDPROVIDER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15D10A90)
#define INCONTROL_UNITYKEYBOARDPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D10EB0)
#define INCONTROL_UNITYKEYBOARDPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D10EA0)

namespace InControl
{
	inline static constexpr unsigned int UnityKeyboardProvider_TypeDefinitionIndex = 31442;

	class UnityKeyboardProvider : public ::System::Object
	{
	public:
		static ::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>** StaticGet_KeyMappings()
		{
			return (::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>**)Il2CppClass::FromTypeDefinitionIndex(UnityKeyboardProvider_TypeDefinitionIndex)->GetStaticField(0x209B0);
		}
		static ::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>** StaticGet_FrenchKeyMappings()
		{
			return (::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>**)Il2CppClass::FromTypeDefinitionIndex(UnityKeyboardProvider_TypeDefinitionIndex)->GetStaticField(0x209B8);
		}
		static ::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>** StaticGet_GermanKeyMappings()
		{
			return (::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>**)Il2CppClass::FromTypeDefinitionIndex(UnityKeyboardProvider_TypeDefinitionIndex)->GetStaticField(0x209C0);
		}
		static ::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>** StaticGet__CurrentKeyMappings()
		{
			return (::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>**)Il2CppClass::FromTypeDefinitionIndex(UnityKeyboardProvider_TypeDefinitionIndex)->GetStaticField(0x209C8);
		}
		static ::InControl::KeyboardLayoutWatcher** StaticGet_LayoutWatcher()
		{
			return (::InControl::KeyboardLayoutWatcher**)Il2CppClass::FromTypeDefinitionIndex(UnityKeyboardProvider_TypeDefinitionIndex)->GetStaticField(0x209D0);
		}
		static ::System::Int32* StaticGet__CurrentLayout()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UnityKeyboardProvider_TypeDefinitionIndex)->GetStaticField(0x8A70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER__CCTOR_OFFSET))();
		}

		::System::Void Setup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_SETUP_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_RESET_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_UPDATE_OFFSET))(this);
		}

		::System::Boolean AnyKeyIsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_ANYKEYISPRESSED_OFFSET))(this);
		}

		::System::Boolean GetKeyIsPressed(::InControl::Key control)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_GETKEYISPRESSED_OFFSET))(this, control);
		}

		::System::String* GetNameForKey(::InControl::Key control)
		{
			return ((::System::String*(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_GETNAMEFORKEY_OFFSET))(this, control);
		}

		::System::Boolean GetKeyWasPressed(::InControl::Key control)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_GETKEYWASPRESSED_OFFSET))(this, control);
		}

		::UnityEngine::KeyCode GetUintyKey(::InControl::Key control)
		{
			return ((::UnityEngine::KeyCode(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_GETUINTYKEY_OFFSET))(this, control);
		}

		::System::Void OnKeyboardChanged(::System::Int32 oldCultureInfo, ::System::Int32 newCultureInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_ONKEYBOARDCHANGED_OFFSET))(this, oldCultureInfo, newCultureInfo);
		}

		::System::Int32 GetKeyboardLayoutType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_GETKEYBOARDLAYOUTTYPE_OFFSET))(this);
		}
	};
}
