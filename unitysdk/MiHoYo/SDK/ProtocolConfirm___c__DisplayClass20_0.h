#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ProtocolConfirm; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOCOLCONFIRM___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15FBFD50)
#define MIHOYO_SDK_PROTOCOLCONFIRM___C__DISPLAYCLASS20_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x15FC0900)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolConfirm___c__DisplayClass20_0_TypeDefinitionIndex = 7020;

	class ProtocolConfirm___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::String* noticeContent; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLCONFIRM___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::ProtocolConfirm* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ProtocolConfirm*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLCONFIRM___C__DISPLAYCLASS20_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
