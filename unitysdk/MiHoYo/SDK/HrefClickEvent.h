#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace System { class String; }

#define MIHOYO_SDK_HREFCLICKEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F13830)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HrefClickEvent_TypeDefinitionIndex = 7015;

	class HrefClickEvent : public ::UnityEngine::Events::UnityEvent_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HREFCLICKEVENT__CTOR_OFFSET))(this);
		}
	};
}
