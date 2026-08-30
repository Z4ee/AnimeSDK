#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TOASTLOCKFUNCTION_METHOD_3_08F425259BC92574_OFFSET UNITYSDK_OFFSET(0x1D5D2B80)
#define RPG_GAMECORE_TOASTLOCKFUNCTION_METHOD_3_B7824192EC7223A7_OFFSET UNITYSDK_OFFSET(0x1D5D2B40)
#define RPG_GAMECORE_TOASTLOCKFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D2B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToastLockFunction_TypeDefinitionIndex = 20069;

	class ToastLockFunction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 UnlockID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTLOCKFUNCTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B7824192EC7223A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToastLockFunction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToastLockFunction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTLOCKFUNCTION_METHOD_3_B7824192EC7223A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_08F425259BC92574(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToastLockFunction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToastLockFunction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTLOCKFUNCTION_METHOD_3_08F425259BC92574_OFFSET))(a1, a2);
		}
	};
}
