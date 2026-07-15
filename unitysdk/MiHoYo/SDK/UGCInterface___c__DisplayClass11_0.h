#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class UGCInterface; }
namespace MiHoYo::SDK { class UGCInterface_UgcResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B735AF0)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS11_0__HTTPGETCARRYTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x1B73A5D0)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS11_0__HTTPGETCARRYTOKEN_B__1_OFFSET UNITYSDK_OFFSET(0x1B73A660)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCInterface___c__DisplayClass11_0_TypeDefinitionIndex = 44708;

	class UGCInterface___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::String* strTaskId; // 0x10
		::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>* tokenFailedCallback; // 0x18
		::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>* callback; // 0x20
		::MiHoYo::SDK::UGCInterface* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _HttpGetCarryToken_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS11_0__HTTPGETCARRYTOKEN_B__0_OFFSET))(this, a1);
		}

		::System::Void _HttpGetCarryToken_b__1(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS11_0__HTTPGETCARRYTOKEN_B__1_OFFSET))(this, a1);
		}
	};
}
