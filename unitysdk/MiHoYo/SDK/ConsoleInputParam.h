#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_CONSOLEINPUTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC79710)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleInputParam_TypeDefinitionIndex = 19336;

	class ConsoleInputParam : public ::System::Object
	{
	public:
		// static const ::System::String* CONSOLE_INPUT_TYPE; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEINPUTPARAM__CTOR_OFFSET))(this);
		}
	};
}
