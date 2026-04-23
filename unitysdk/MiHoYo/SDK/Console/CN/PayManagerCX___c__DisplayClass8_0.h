#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1741B030)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__DISPLAYCLASS8_0__REQUESTRETRIEVETOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x1741D7D0)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int PayManagerCX___c__DisplayClass8_0_TypeDefinitionIndex = 7879;

	class PayManagerCX___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestRetrieveToken_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__DISPLAYCLASS8_0__REQUESTRETRIEVETOKEN_B__0_OFFSET))(this, response);
		}
	};
}
