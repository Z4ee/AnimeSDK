#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_CONST__CTOR_OFFSET UNITYSDK_OFFSET(0x18865FE0)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int Const_TypeDefinitionIndex = 8513;

	class Const : public ::System::Object
	{
	public:
		// static const ::System::String* RESPONSE_GOODSLIST; // 0x0
		// static const ::System::String* GOODS_ID; // 0x0
		// static const ::System::String* NO_DISCOUNT_GOODS_ID; // 0x0
		// static const ::System::String* GOODS_TYPE; // 0x0
		// static const ::System::String* LEVEL_MIN; // 0x0
		// static const ::System::String* ROLE_LEVEL; // 0x0
		// static const ::System::String* PURCHASE_ELIGIBLE; // 0x0
		// static const ::System::String* PURCHASE_INELIGIBLE_CODE; // 0x0
		// static const ::System::String* PRELOAD_ALL_GOODS; // 0x0
		// static const ::System::String* RESULT; // 0x0
		// static const ::System::String* IS_CACHE_HIT; // 0x0
		// static const ::System::String* ERROR_CODE; // 0x0
		// static const ::System::String* THIRD_PARTY_DURATION; // 0x0
		// static const ::System::String* SERVER_DURATION; // 0x0
		// static const ::System::String* TOTAL_DURATION; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_CONST__CTOR_OFFSET))(this);
		}
	};
}
