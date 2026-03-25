#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace TapTap::Sdk { class AccessToken; }

#define MIHOYO_SDK_WIN_TAPTAPTOKEN_ISVALID_OFFSET UNITYSDK_OFFSET(0x15E98A60)
#define MIHOYO_SDK_WIN_TAPTAPTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x15E984D0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int TapTapToken_TypeDefinitionIndex = 7980;

	class TapTapToken : public ::System::Object
	{
	public:
		::System::String* Kid; // 0x10
		::System::String* MacKey; // 0x18

		::System::Void _ctor(::TapTap::Sdk::AccessToken* accessToken)
		{
			return ((::System::Void(*)(::PVOID, ::TapTap::Sdk::AccessToken*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPTOKEN__CTOR_OFFSET))(this, accessToken);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPTOKEN_ISVALID_OFFSET))(this);
		}
	};
}
