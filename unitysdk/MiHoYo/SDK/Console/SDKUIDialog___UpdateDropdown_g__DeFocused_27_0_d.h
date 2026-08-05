#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class SDKUIDialog; }

#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG___UPDATEDROPDOWN_G__DEFOCUSED_27_0_D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CCFA410)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG___UPDATEDROPDOWN_G__DEFOCUSED_27_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CCFA500)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG___UPDATEDROPDOWN_G__DEFOCUSED_27_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CCFA560)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG___UPDATEDROPDOWN_G__DEFOCUSED_27_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1CCFA510)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG___UPDATEDROPDOWN_G__DEFOCUSED_27_0_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CCFA400)
#define MIHOYO_SDK_CONSOLE_SDKUIDIALOG___UPDATEDROPDOWN_G__DEFOCUSED_27_0_D__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCFA3F0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int SDKUIDialog___UpdateDropdown_g__DeFocused_27_0_d_TypeDefinitionIndex = 21068;

	class SDKUIDialog___UpdateDropdown_g__DeFocused_27_0_d : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::MiHoYo::SDK::Console::SDKUIDialog* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG___UPDATEDROPDOWN_G__DEFOCUSED_27_0_D__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG___UPDATEDROPDOWN_G__DEFOCUSED_27_0_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG___UPDATEDROPDOWN_G__DEFOCUSED_27_0_D_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG___UPDATEDROPDOWN_G__DEFOCUSED_27_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG___UPDATEDROPDOWN_G__DEFOCUSED_27_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDIALOG___UPDATEDROPDOWN_G__DEFOCUSED_27_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
