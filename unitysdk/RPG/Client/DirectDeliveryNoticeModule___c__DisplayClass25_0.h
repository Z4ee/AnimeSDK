#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DirectDeliveryNoticeData; }

#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA177720)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS25_0___DOPENDNOTICE_B__0_OFFSET UNITYSDK_OFFSET(0xA177D70)

namespace RPG::Client
{
	inline static constexpr unsigned int DirectDeliveryNoticeModule___c__DisplayClass25_0_TypeDefinitionIndex = 58573;

	class DirectDeliveryNoticeModule___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::RPG::Client::DirectDeliveryNoticeData* pendingNotice; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __DoPendNotice_b__0(::RPG::Client::DirectDeliveryNoticeData* notice)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS25_0___DOPENDNOTICE_B__0_OFFSET))(this, notice);
		}
	};
}
