#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/Key.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/KeyCode.h"

namespace System { class String; }

#define INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING_GET_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x7A7BB0)
#define INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING_GET_NAME_OFFSET UNITYSDK_OFFSET(0x7A7BF0)
#define INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING_GET_UNITYKEY_OFFSET UNITYSDK_OFFSET(0x7A7C20)
#define INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING_GET_WASPRESSED_OFFSET UNITYSDK_OFFSET(0x7A7B70)
#define INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7A7B10)
#define INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING__CTOR_2_OFFSET UNITYSDK_OFFSET(0x7A7B30)
#define INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING__CTOR_3_OFFSET UNITYSDK_OFFSET(0x7A7B50)
#define INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x7A7AF0)

namespace InControl
{
	inline static constexpr unsigned int UnityKeyboardProvider_KeyMapping_TypeDefinitionIndex = 38703;

	struct alignas(8) UnityKeyboardProvider_KeyMapping
	{
		::InControl::Key source; // 0x10
		::UnityEngine::KeyCode target0; // 0x14
		::UnityEngine::KeyCode target1; // 0x18
		::System::String* name; // 0x20
		::System::String* macName; // 0x28

		::System::Void _ctor(::InControl::Key a1, ::System::String* a2, ::UnityEngine::KeyCode a3)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Key, ::System::String*, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::InControl::Key a1, ::System::String* a2, ::UnityEngine::KeyCode a3, ::UnityEngine::KeyCode a4)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Key, ::System::String*, ::UnityEngine::KeyCode, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_2(::InControl::Key a1, ::System::String* a2, ::System::String* a3, ::UnityEngine::KeyCode a4)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Key, ::System::String*, ::System::String*, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING__CTOR_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_3(::InControl::Key a1, ::System::String* a2, ::System::String* a3, ::UnityEngine::KeyCode a4, ::UnityEngine::KeyCode a5)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Key, ::System::String*, ::System::String*, ::UnityEngine::KeyCode, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_KEYMAPPING__CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5);
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
