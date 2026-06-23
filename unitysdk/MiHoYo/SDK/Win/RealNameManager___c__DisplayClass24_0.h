#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class RealNameManager; }

#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAABEC0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS24_0__REQUESTSECONDREALNAMEAUTH_B__0_OFFSET UNITYSDK_OFFSET(0x1BAABED0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealNameManager___c__DisplayClass24_0_TypeDefinitionIndex = 21101;

	class RealNameManager___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::RealNameManager* __4__this; // 0x10
		::MiHoYo::SDK::AccountModel* account; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestSecondRealNameAuth_b__0(::MiHoYo::SDK::NetworkResponseModel* responseModel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS24_0__REQUESTSECONDREALNAMEAUTH_B__0_OFFSET))(this, responseModel);
		}
	};
}
