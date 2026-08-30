#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DirectDeliveryNoticeData; }
namespace RPG::Client { class DirectDeliveryNoticeModule; }

#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8E0910)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS24_0___PENDNOTICE_B__0_OFFSET UNITYSDK_OFFSET(0x1B8E1030)

namespace RPG::Client
{
	inline static constexpr unsigned int DirectDeliveryNoticeModule___c__DisplayClass24_0_TypeDefinitionIndex = 63639;

	class DirectDeliveryNoticeModule___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::RPG::Client::DirectDeliveryNoticeData* pendingNotice; // 0x10
		::RPG::Client::DirectDeliveryNoticeModule* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void __PendNotice_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS24_0___PENDNOTICE_B__0_OFFSET))(this);
		}
	};
}
