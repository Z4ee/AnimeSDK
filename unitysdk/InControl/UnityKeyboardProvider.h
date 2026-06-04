#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/Key.h"
#include "unitysdk/InControl/UnityKeyboardProvider_KeyMapping.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/KeyCode.h"

namespace InControl { class KeyboardLayoutWatcher; }
namespace System { class String; }

#define INCONTROL_UNITYKEYBOARDPROVIDER_ANYKEYISPRESSED_OFFSET UNITYSDK_OFFSET(0x1811EB80)
#define INCONTROL_UNITYKEYBOARDPROVIDER_GETKEYBOARDLAYOUTTYPE_OFFSET UNITYSDK_OFFSET(0x1811EF50)
#define INCONTROL_UNITYKEYBOARDPROVIDER_GETKEYISPRESSED_OFFSET UNITYSDK_OFFSET(0x1811EB90)
#define INCONTROL_UNITYKEYBOARDPROVIDER_GETKEYWASPRESSED_OFFSET UNITYSDK_OFFSET(0x1811ED40)
#define INCONTROL_UNITYKEYBOARDPROVIDER_GETNAMEFORKEY_OFFSET UNITYSDK_OFFSET(0x1811EC70)
#define INCONTROL_UNITYKEYBOARDPROVIDER_GETUINTYKEY_OFFSET UNITYSDK_OFFSET(0x1811EE20)
#define INCONTROL_UNITYKEYBOARDPROVIDER_ONKEYBOARDCHANGED_OFFSET UNITYSDK_OFFSET(0x1811EE90)
#define INCONTROL_UNITYKEYBOARDPROVIDER_RESET_OFFSET UNITYSDK_OFFSET(0x1811EB60)
#define INCONTROL_UNITYKEYBOARDPROVIDER_SETUP_OFFSET UNITYSDK_OFFSET(0x1811EA90)
#define INCONTROL_UNITYKEYBOARDPROVIDER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1811EB70)
#define INCONTROL_UNITYKEYBOARDPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1811EF90)
#define INCONTROL_UNITYKEYBOARDPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1811EF80)

namespace InControl
{
	inline static constexpr unsigned int UnityKeyboardProvider_TypeDefinitionIndex = 37894;

	class UnityKeyboardProvider : public ::System::Object
	{
	public:
		static ::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>** StaticGet_FrenchKeyMappings()
		{
			return (::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>**)Il2CppClass::FromTypeDefinitionIndex(UnityKeyboardProvider_TypeDefinitionIndex)->GetStaticField(0x17970);
		}
		static ::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>** StaticGet_GermanKeyMappings()
		{
			return (::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>**)Il2CppClass::FromTypeDefinitionIndex(UnityKeyboardProvider_TypeDefinitionIndex)->GetStaticField(0x17978);
		}
		static ::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>** StaticGet_KeyMappings()
		{
			return (::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>**)Il2CppClass::FromTypeDefinitionIndex(UnityKeyboardProvider_TypeDefinitionIndex)->GetStaticField(0x17980);
		}
		static ::InControl::KeyboardLayoutWatcher** StaticGet_LayoutWatcher()
		{
			return (::InControl::KeyboardLayoutWatcher**)Il2CppClass::FromTypeDefinitionIndex(UnityKeyboardProvider_TypeDefinitionIndex)->GetStaticField(0x17988);
		}
		static ::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>** StaticGet__CurrentKeyMappings()
		{
			return (::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>**)Il2CppClass::FromTypeDefinitionIndex(UnityKeyboardProvider_TypeDefinitionIndex)->GetStaticField(0x17990);
		}
		static ::System::Int32* StaticGet__CurrentLayout()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UnityKeyboardProvider_TypeDefinitionIndex)->GetStaticField(0x81F0);
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

		::System::Boolean GetKeyIsPressed(::InControl::Key a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_GETKEYISPRESSED_OFFSET))(this, a1);
		}

		::System::String* GetNameForKey(::InControl::Key a1)
		{
			return ((::System::String*(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_GETNAMEFORKEY_OFFSET))(this, a1);
		}

		::System::Boolean GetKeyWasPressed(::InControl::Key a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_GETKEYWASPRESSED_OFFSET))(this, a1);
		}

		::UnityEngine::KeyCode GetUintyKey(::InControl::Key a1)
		{
			return ((::UnityEngine::KeyCode(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_GETUINTYKEY_OFFSET))(this, a1);
		}

		::System::Void OnKeyboardChanged(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_ONKEYBOARDCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetKeyboardLayoutType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_GETKEYBOARDLAYOUTTYPE_OFFSET))(this);
		}
	};
}
