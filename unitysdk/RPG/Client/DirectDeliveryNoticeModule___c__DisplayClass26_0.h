#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DirectDeliveryNoticeData; }
namespace RPG::Client { class DirectDeliveryNoticeModule; }

#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0085A0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS26_0___TRIGGERTRYENQUEUETOAST_B__0_OFFSET UNITYSDK_OFFSET(0x1A008AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int DirectDeliveryNoticeModule___c__DisplayClass26_0_TypeDefinitionIndex = 60788;

	class DirectDeliveryNoticeModule___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::RPG::Client::DirectDeliveryNoticeData* notice; // 0x10
		::RPG::Client::DirectDeliveryNoticeModule* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void __TriggerTryEnqueueToast_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS26_0___TRIGGERTRYENQUEUETOAST_B__0_OFFSET))(this);
		}
	};
}
