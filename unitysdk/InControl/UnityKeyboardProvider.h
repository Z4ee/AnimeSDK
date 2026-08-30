#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/Key.h"
#include "unitysdk/InControl/UnityKeyboardProvider_KeyMapping.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/KeyCode.h"

namespace InControl { class KeyboardLayoutWatcher; }
namespace System { class String; }

#define INCONTROL_UNITYKEYBOARDPROVIDER_ANYKEYISPRESSED_OFFSET UNITYSDK_OFFSET(0x1B656130)
#define INCONTROL_UNITYKEYBOARDPROVIDER_GETKEYBOARDLAYOUTTYPE_OFFSET UNITYSDK_OFFSET(0x1B656500)
#define INCONTROL_UNITYKEYBOARDPROVIDER_GETKEYISPRESSED_OFFSET UNITYSDK_OFFSET(0x1B656140)
#define INCONTROL_UNITYKEYBOARDPROVIDER_GETKEYWASPRESSED_OFFSET UNITYSDK_OFFSET(0x1B6562F0)
#define INCONTROL_UNITYKEYBOARDPROVIDER_GETNAMEFORKEY_OFFSET UNITYSDK_OFFSET(0x1B656220)
#define INCONTROL_UNITYKEYBOARDPROVIDER_GETUINTYKEY_OFFSET UNITYSDK_OFFSET(0x1B6563D0)
#define INCONTROL_UNITYKEYBOARDPROVIDER_ONKEYBOARDCHANGED_OFFSET UNITYSDK_OFFSET(0x1B656440)
#define INCONTROL_UNITYKEYBOARDPROVIDER_RESET_OFFSET UNITYSDK_OFFSET(0x1B656110)
#define INCONTROL_UNITYKEYBOARDPROVIDER_SETUP_OFFSET UNITYSDK_OFFSET(0x1B656040)
#define INCONTROL_UNITYKEYBOARDPROVIDER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B656120)
#define INCONTROL_UNITYKEYBOARDPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B656540)
#define INCONTROL_UNITYKEYBOARDPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B656530)

namespace InControl
{
	inline static constexpr unsigned int UnityKeyboardProvider_TypeDefinitionIndex = 39561;

	class UnityKeyboardProvider : public ::System::Object
	{
	public:
		static ::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>** StaticGet_FrenchKeyMappings()
		{
			return (::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>**)Il2CppClass::FromTypeDefinitionIndex(UnityKeyboardProvider_TypeDefinitionIndex)->GetStaticField(0xFD00);
		}
		static ::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>** StaticGet__CurrentKeyMappings()
		{
			return (::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>**)Il2CppClass::FromTypeDefinitionIndex(UnityKeyboardProvider_TypeDefinitionIndex)->GetStaticField(0xFD08);
		}
		static ::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>** StaticGet_KeyMappings()
		{
			return (::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>**)Il2CppClass::FromTypeDefinitionIndex(UnityKeyboardProvider_TypeDefinitionIndex)->GetStaticField(0xFD10);
		}
		static ::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>** StaticGet_GermanKeyMappings()
		{
			return (::Il2CppArray<::InControl::UnityKeyboardProvider_KeyMapping>**)Il2CppClass::FromTypeDefinitionIndex(UnityKeyboardProvider_TypeDefinitionIndex)->GetStaticField(0xFD18);
		}
		static ::InControl::KeyboardLayoutWatcher** StaticGet_LayoutWatcher()
		{
			return (::InControl::KeyboardLayoutWatcher**)Il2CppClass::FromTypeDefinitionIndex(UnityKeyboardProvider_TypeDefinitionIndex)->GetStaticField(0xFD20);
		}
		static ::System::Int32* StaticGet__CurrentLayout()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UnityKeyboardProvider_TypeDefinitionIndex)->GetStaticField(0x73C0);
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
