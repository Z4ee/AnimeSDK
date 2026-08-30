#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class UGCInterface; }
namespace MiHoYo::SDK { class UGCInterface_UgcBinaryResponseModel; }
namespace MiHoYo::SDK { class UGCInterface_UgcResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB2BC930)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS12_0__HTTPGETBINARYCARRYTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0xB2C1250)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS12_0__HTTPGETBINARYCARRYTOKEN_B__1_OFFSET UNITYSDK_OFFSET(0xB2C12E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCInterface___c__DisplayClass12_0_TypeDefinitionIndex = 46895;

	class UGCInterface___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UGCInterface* __4__this; // 0x10
		::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>* callback; // 0x18
		::System::String* strTaskId; // 0x20
		::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>* tokenFailedCallback; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _HttpGetBinaryCarryToken_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS12_0__HTTPGETBINARYCARRYTOKEN_B__0_OFFSET))(this, a1);
		}

		::System::Void _HttpGetBinaryCarryToken_b__1(::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS12_0__HTTPGETBINARYCARRYTOKEN_B__1_OFFSET))(this, a1);
		}
	};
}
