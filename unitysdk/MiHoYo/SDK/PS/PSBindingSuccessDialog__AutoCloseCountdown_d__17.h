#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PS { class PSBindingSuccessDialog; }

#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15F7DF70)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15F7E0E0)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15F7E140)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15F7E0F0)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F7DF60)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17__CTOR_OFFSET UNITYSDK_OFFSET(0x15F7DE90)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSBindingSuccessDialog__AutoCloseCountdown_d__17_TypeDefinitionIndex = 7558;

	class PSBindingSuccessDialog__AutoCloseCountdown_d__17 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::MiHoYo::SDK::PS::PSBindingSuccessDialog* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single _startTime_5__1; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
