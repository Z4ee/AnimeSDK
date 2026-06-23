#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class UGCInterface; }
namespace MiHoYo::SDK { class UGCInterface_UgcBinaryResponseModel; }
namespace MiHoYo::SDK { class UGCInterface_UgcResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFCBFE0)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS15_0__HTTPPOSTBINARYCARRYTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x1BFCBFF0)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS15_0__HTTPPOSTBINARYCARRYTOKEN_B__1_OFFSET UNITYSDK_OFFSET(0x1BFCC080)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCInterface___c__DisplayClass15_0_TypeDefinitionIndex = 36825;

	class UGCInterface___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>* callback; // 0x10
		::System::String* strTaskId; // 0x18
		::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>* tokenFailedCallback; // 0x20
		::MiHoYo::SDK::UGCInterface* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _HttpPostBinaryCarryToken_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS15_0__HTTPPOSTBINARYCARRYTOKEN_B__0_OFFSET))(this, response);
		}

		::System::Void _HttpPostBinaryCarryToken_b__1(::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS15_0__HTTPPOSTBINARYCARRYTOKEN_B__1_OFFSET))(this, response);
		}
	};
}
