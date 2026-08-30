#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_686;
namespace RPG::Client { class DirectDeliveryNoticeData; }

#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCD7CFB0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS21_0___ONCANCELDIRECTDELIVERYNOTICESCRSP_B__0_OFFSET UNITYSDK_OFFSET(0xCD7D930)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS21_0___ONCANCELDIRECTDELIVERYNOTICESCRSP_B__1_OFFSET UNITYSDK_OFFSET(0xCD7D9B0)

namespace RPG::Client
{
	inline static constexpr unsigned int DirectDeliveryNoticeModule___c__DisplayClass21_0_TypeDefinitionIndex = 63637;

	class DirectDeliveryNoticeModule___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::Class_1_D17272E82AE804C2_686* rsp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnCancelDirectDeliveryNoticeScRsp_b__0(::RPG::Client::DirectDeliveryNoticeData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS21_0___ONCANCELDIRECTDELIVERYNOTICESCRSP_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __OnCancelDirectDeliveryNoticeScRsp_b__1(::RPG::Client::DirectDeliveryNoticeData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEMODULE___C__DISPLAYCLASS21_0___ONCANCELDIRECTDELIVERYNOTICESCRSP_B__1_OFFSET))(this, a1);
		}
	};
}
