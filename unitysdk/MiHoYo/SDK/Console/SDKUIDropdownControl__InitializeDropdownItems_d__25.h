#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class SDKUIDropdownControl; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C0D0540)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C0D0A90)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C0D0AF0)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C0D0AA0)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C0D0530)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0D0520)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int SDKUIDropdownControl__InitializeDropdownItems_d__25_TypeDefinitionIndex = 20701;

	class SDKUIDropdownControl__InitializeDropdownItems_d__25 : public ::System::Object
	{
	public:
		::UnityEngine::CanvasGroup* _dropDrownCanvas_5__2; // 0x10
		::UnityEngine::GameObject* _dropdownList_5__1; // 0x18
		::MiHoYo::SDK::Console::SDKUIDropdownControl* __4__this; // 0x20
		::System::Object* __2__current; // 0x28
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__INITIALIZEDROPDOWNITEMS_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
