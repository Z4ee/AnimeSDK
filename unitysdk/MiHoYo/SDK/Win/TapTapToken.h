#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WIN_TAPTAPTOKEN_ISVALID_OFFSET UNITYSDK_OFFSET(0x1D3E8B80)
#define MIHOYO_SDK_WIN_TAPTAPTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E8B70)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int TapTapToken_TypeDefinitionIndex = 21467;

	class TapTapToken : public ::System::Object
	{
	public:
		::System::String* Kid; // 0x10
		::System::String* MacKey; // 0x18

		::System::Void _ctor(::System::String* kid, ::System::String* macKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPTOKEN__CTOR_OFFSET))(this, kid, macKey);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_TAPTAPTOKEN_ISVALID_OFFSET))(this);
		}
	};
}
