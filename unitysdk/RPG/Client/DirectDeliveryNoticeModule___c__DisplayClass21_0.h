#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_544;
namespace RPG::Client { class DirectDeliveryNoticeData; }

#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x94A4B30)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS21_0___ONCANCELDIRECTDELIVERYNOTICESCRSP_B__0_OFFSET UNITYSDK_OFFSET(0x94A5510)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS21_0___ONCANCELDIRECTDELIVERYNOTICESCRSP_B__1_OFFSET UNITYSDK_OFFSET(0x94A5590)

namespace RPG::Client
{
	inline static constexpr unsigned int DirectDeliveryNoticeModule___c__DisplayClass21_0_TypeDefinitionIndex = 51622;

	class DirectDeliveryNoticeModule___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::Class_1_FA4F4A67B1C04320_544* rsp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnCancelDirectDeliveryNoticeScRsp_b__0(::RPG::Client::DirectDeliveryNoticeData* notice)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS21_0___ONCANCELDIRECTDELIVERYNOTICESCRSP_B__0_OFFSET))(this, notice);
		}

		::System::Boolean __OnCancelDirectDeliveryNoticeScRsp_b__1(::RPG::Client::DirectDeliveryNoticeData* notice)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS21_0___ONCANCELDIRECTDELIVERYNOTICESCRSP_B__1_OFFSET))(this, notice);
		}
	};
}
