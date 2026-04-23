#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_ACCOUNTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x173CC4E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountInfo_TypeDefinitionIndex = 6614;

	class AccountInfo : public ::System::Object
	{
	public:
		// static const ::System::String* UID; // 0x0
		// static const ::System::String* TOKEN; // 0x0
		// static const ::System::String* ACCOUNT; // 0x0
		// static const ::System::String* PASSWORD; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTINFO__CTOR_OFFSET))(this);
		}
	};
}
