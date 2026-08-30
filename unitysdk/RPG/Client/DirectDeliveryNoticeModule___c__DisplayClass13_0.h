#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DirectDeliveryNoticeData; }

#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCD7C1B0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS13_0__HASPENDINGNOTICE_B__0_OFFSET UNITYSDK_OFFSET(0xCD7D8D0)

namespace RPG::Client
{
	inline static constexpr unsigned int DirectDeliveryNoticeModule___c__DisplayClass13_0_TypeDefinitionIndex = 63636;

	class DirectDeliveryNoticeModule___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::UInt32 noticeID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasPendingNotice_b__0(::RPG::Client::DirectDeliveryNoticeData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS13_0__HASPENDINGNOTICE_B__0_OFFSET))(this, a1);
		}
	};
}
