#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace TapTap::Sdk { class AccessToken; }

#define MIHOYO_SDK_WIN_TAPTAPTOKEN_ISVALID_OFFSET UNITYSDK_OFFSET(0x199CB6E0)
#define MIHOYO_SDK_WIN_TAPTAPTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x199CB6C0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int TapTapToken_TypeDefinitionIndex = 19953;

	class TapTapToken : public ::System::Object
	{
	public:
		::System::String* MacKey; // 0x10
		::System::String* Kid; // 0x18

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
