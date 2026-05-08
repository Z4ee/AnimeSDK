#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class UGCInterface; }
namespace MiHoYo::SDK { class UGCInterface_UgcResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A509160)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS14_0__HTTPPOSTCARRYTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x1A509170)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS14_0__HTTPPOSTCARRYTOKEN_B__1_OFFSET UNITYSDK_OFFSET(0x1A509200)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCInterface___c__DisplayClass14_0_TypeDefinitionIndex = 35260;

	class UGCInterface___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::String* strTaskId; // 0x10
		::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>* tokenFailedCallback; // 0x18
		::MiHoYo::SDK::UGCInterface* __4__this; // 0x20
		::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>* callback; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _HttpPostCarryToken_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS14_0__HTTPPOSTCARRYTOKEN_B__0_OFFSET))(this, response);
		}

		::System::Void _HttpPostCarryToken_b__1(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS14_0__HTTPPOSTCARRYTOKEN_B__1_OFFSET))(this, response);
		}
	};
}
