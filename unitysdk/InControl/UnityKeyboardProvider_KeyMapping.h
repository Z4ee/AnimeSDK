#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/Key.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/KeyCode.h"

namespace System { class String; }

#define INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING_GET_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x2298330)
#define INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING_GET_NAME_OFFSET UNITYSDK_OFFSET(0x2298370)
#define INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING_GET_UNITYKEY_OFFSET UNITYSDK_OFFSET(0x1DA80)
#define INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING_GET_WASPRESSED_OFFSET UNITYSDK_OFFSET(0x22982F0)
#define INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2298290)
#define INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING__CTOR_2_OFFSET UNITYSDK_OFFSET(0x22982B0)
#define INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING__CTOR_3_OFFSET UNITYSDK_OFFSET(0x22982D0)
#define INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x2298270)

namespace InControl
{
	inline static constexpr unsigned int UnityKeyboardProvider_KeyMapping_TypeDefinitionIndex = 37163;

	struct alignas(8) UnityKeyboardProvider_KeyMapping
	{
		::InControl::Key source; // 0x10
		::UnityEngine::KeyCode target0; // 0x14
		::UnityEngine::KeyCode target1; // 0x18
		::System::String* name; // 0x20
		::System::String* macName; // 0x28

		::System::Void _ctor(::InControl::Key source, ::System::String* name, ::UnityEngine::KeyCode target)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Key, ::System::String*, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING__CTOR_OFFSET))(this, source, name, target);
		}

		::System::Void _ctor_1(::InControl::Key source, ::System::String* name, ::UnityEngine::KeyCode target0, ::UnityEngine::KeyCode target1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Key, ::System::String*, ::UnityEngine::KeyCode, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING__CTOR_1_OFFSET))(this, source, name, target0, target1);
		}

		::System::Void _ctor_2(::InControl::Key source, ::System::String* name, ::System::String* macName, ::UnityEngine::KeyCode target)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Key, ::System::String*, ::System::String*, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING__CTOR_2_OFFSET))(this, source, name, macName, target);
		}

		::System::Void _ctor_3(::InControl::Key source, ::System::String* name, ::System::String* macName, ::UnityEngine::KeyCode target0, ::UnityEngine::KeyCode target1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Key, ::System::String*, ::System::String*, ::UnityEngine::KeyCode, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING__CTOR_3_OFFSET))(this, source, name, macName, target0, target1);
		}

		::System::Boolean get_WasPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING_GET_WASPRESSED_OFFSET))(this);
		}

		::System::Boolean get_IsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING_GET_ISPRESSED_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING_GET_NAME_OFFSET))(this);
		}

		::UnityEngine::KeyCode get_UnityKey()
		{
			return ((::UnityEngine::KeyCode(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING_GET_UNITYKEY_OFFSET))(this);
		}
	};
}
