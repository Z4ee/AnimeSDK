#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PC::OS { class ABTestManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_ABTESTMANAGER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9C0810)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER___C__DISPLAYCLASS11_0__REQUESTALLACCOUNTABTEST_B__0_OFFSET UNITYSDK_OFFSET(0x1B9C27A0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int ABTestManager___c__DisplayClass11_0_TypeDefinitionIndex = 8446;

	class ABTestManager___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::ABTestManager* __4__this; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestAllAccountABTest_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER___C__DISPLAYCLASS11_0__REQUESTALLACCOUNTABTEST_B__0_OFFSET))(this, a1);
		}
	};
}
