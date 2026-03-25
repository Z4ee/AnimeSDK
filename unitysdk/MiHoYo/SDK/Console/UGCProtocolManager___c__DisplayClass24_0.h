#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Console { class UGCProtocolManager; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15EB7E90)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER___C__DISPLAYCLASS24_0__REQUESTAGREEMENTSTATUS_B__0_OFFSET UNITYSDK_OFFSET(0x15EB8310)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int UGCProtocolManager___c__DisplayClass24_0_TypeDefinitionIndex = 7575;

	class UGCProtocolManager___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::UGCProtocolManager* __4__this; // 0x10
		::System::String* url; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestAgreementStatus_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER___C__DISPLAYCLASS24_0__REQUESTAGREEMENTSTATUS_B__0_OFFSET))(this, response);
		}
	};
}
