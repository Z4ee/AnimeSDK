#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD39D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS16_0__REQUESTRETRIEVETOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x1CFD39E0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int PayManagerCXHandheld___c__DisplayClass16_0_TypeDefinitionIndex = 20860;

	class PayManagerCXHandheld___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestRetrieveToken_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS16_0__REQUESTRETRIEVETOKEN_B__0_OFFSET))(this, response);
		}
	};
}
