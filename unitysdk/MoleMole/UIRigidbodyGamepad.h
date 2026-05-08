#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadModule.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIRigidbody; }

#define MOLEMOLE_UIRIGIDBODYGAMEPAD_GET_UIRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x13021AC0)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD_METHOD_6_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0x13021C90)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD_METHOD_6_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x13022030)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD_METHOD_6_5DB69D87501DF7A9_OFFSET UNITYSDK_OFFSET(0x13021E70)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD_METHOD_6_A205E8B23947BF16_OFFSET UNITYSDK_OFFSET(0x130221F0)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD_METHOD_6_D87A7D8243E04FD7_OFFSET UNITYSDK_OFFSET(0x13022FC0)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD__CTOR_OFFSET UNITYSDK_OFFSET(0x130231C0)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x130232A0)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD___BASE_ONMODULEDESTROY_OFFSET UNITYSDK_OFFSET(0x13023350)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD___BASE_ONMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x130233E0)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD___BASE_ONMODULELATEUPDATE_OFFSET UNITYSDK_OFFSET(0x130233F0)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD___BASE_ONMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x130234A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRigidbodyGamepad_TypeDefinitionIndex = 71444;

	class UIRigidbodyGamepad : public ::MoleMole::MonoGamepadModule
	{
	public:
		::MoleMole::UIRigidbody* Field_6_0; // 0xE8
		::MoleMole::InputLogicEventType ClickEvent; // 0xF0
		::MoleMole::InputLogicEventType DragEvent; // 0xF4
		::System::Single DragSpeed; // 0xF8
		::System::Boolean ScreenAdpter; // 0xFC
		::System::Single DragMaxRadius; // 0x100
		::System::Boolean EnableGyroGravity; // 0x104
		::UnityEngine::Vector2 Field_6_7; // 0x108
		::UnityEngine::Vector2 Field_6_8; // 0x110
		::System::Nullable_1<::System::Int32> Field_6_9; // 0x118
		::System::Boolean Field_6_10; // 0x120
		::Il2CppArray<::UnityEngine::Vector3>* Field_6_11; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD__CTOR_OFFSET))(this);
		}

		::MoleMole::UIRigidbody* get_UIRigidbody()
		{
			return ((::MoleMole::UIRigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD_GET_UIRIGIDBODY_OFFSET))(this);
		}

		::System::Void Method_6_07280B24DFAC0CA9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD_METHOD_6_07280B24DFAC0CA9_OFFSET))(this);
		}

		::System::Void Method_6_5DB69D87501DF7A9(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD_METHOD_6_5DB69D87501DF7A9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_18982EFD3B740683()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD_METHOD_6_18982EFD3B740683_OFFSET))(this);
		}

		::System::Boolean Method_6_A205E8B23947BF16(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD_METHOD_6_A205E8B23947BF16_OFFSET))(this, a1);
		}

		::System::Void Method_6_D87A7D8243E04FD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD_METHOD_6_D87A7D8243E04FD7_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD___BASE_ONINPUTACTION_OFFSET))(this, a1);
		}

		::System::Void __base_OnModuleDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD___BASE_ONMODULEDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnModuleFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD___BASE_ONMODULEFOCUS_OFFSET))(this);
		}

		::System::Void __base_OnModuleLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD___BASE_ONMODULELATEUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnModuleLostFocus(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD___BASE_ONMODULELOSTFOCUS_OFFSET))(this, a1, a2);
		}
	};
}
