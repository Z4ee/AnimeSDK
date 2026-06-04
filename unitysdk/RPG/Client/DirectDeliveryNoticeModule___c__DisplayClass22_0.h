#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DirectDeliveryNoticeData; }
namespace RPG::GameCore { class DirectDeliveryNoticeRow; }

#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB7F6010)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS22_0___INITIALIZEEXPECTINGNOTICES_B__0_OFFSET UNITYSDK_OFFSET(0xB7F67F0)

namespace RPG::Client
{
	inline static constexpr unsigned int DirectDeliveryNoticeModule___c__DisplayClass22_0_TypeDefinitionIndex = 59501;

	class DirectDeliveryNoticeModule___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::DirectDeliveryNoticeRow* row; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __InitializeExpectingNotices_b__0(::RPG::Client::DirectDeliveryNoticeData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS22_0___INITIALIZEEXPECTINGNOTICES_B__0_OFFSET))(this, a1);
		}
	};
}
