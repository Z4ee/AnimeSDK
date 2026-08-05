#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Console { class UGCProtocolManager; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCFA570)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER___C__DISPLAYCLASS25_0__REQUESTAGREEMENTAPPROVE_B__0_OFFSET UNITYSDK_OFFSET(0x1CCFA580)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int UGCProtocolManager___c__DisplayClass25_0_TypeDefinitionIndex = 21052;

	class UGCProtocolManager___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::String* url; // 0x10
		::MiHoYo::SDK::Console::UGCProtocolManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestAgreementApprove_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER___C__DISPLAYCLASS25_0__REQUESTAGREEMENTAPPROVE_B__0_OFFSET))(this, response);
		}
	};
}
