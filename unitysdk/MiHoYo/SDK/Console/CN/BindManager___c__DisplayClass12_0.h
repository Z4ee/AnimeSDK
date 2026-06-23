#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Console::CN { class BindManager; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC71E40)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER___C__DISPLAYCLASS12_0__PERFORMBINDINGFLOW_B__0_OFFSET UNITYSDK_OFFSET(0x1BC71E50)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER___C__DISPLAYCLASS12_0__PERFORMBINDINGFLOW_B__1_OFFSET UNITYSDK_OFFSET(0x1BC72220)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int BindManager___c__DisplayClass12_0_TypeDefinitionIndex = 20854;

	class BindManager___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* OnReactivateInfo; // 0x10
		::MiHoYo::SDK::Console::CN::BindManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _PerformBindingFlow_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER___C__DISPLAYCLASS12_0__PERFORMBINDINGFLOW_B__0_OFFSET))(this, response);
		}

		::System::Void _PerformBindingFlow_b__1(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER___C__DISPLAYCLASS12_0__PERFORMBINDINGFLOW_B__1_OFFSET))(this, response);
		}
	};
}
