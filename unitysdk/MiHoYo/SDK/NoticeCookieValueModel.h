#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_NOTICECOOKIEVALUEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1992C7C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NoticeCookieValueModel_TypeDefinitionIndex = 7516;

	class NoticeCookieValueModel : public ::System::Object
	{
	public:
		::System::Int32 app_id; // 0x10
		::System::Int32 channel_id; // 0x14
		::System::String* open_id; // 0x18
		::System::String* combo_token; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTICECOOKIEVALUEMODEL__CTOR_OFFSET))(this);
		}
	};
}
