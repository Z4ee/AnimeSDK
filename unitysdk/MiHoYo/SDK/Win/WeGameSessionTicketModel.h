#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WIN_WEGAMESESSIONTICKETMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CED96E0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int WeGameSessionTicketModel_TypeDefinitionIndex = 21582;

	class WeGameSessionTicketModel : public ::System::Object
	{
	public:
		::System::String* rail_id; // 0x10
		::System::String* rail_session_ticket; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WEGAMESESSIONTICKETMODEL__CTOR_OFFSET))(this);
		}
	};
}
