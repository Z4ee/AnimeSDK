#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ELFENTERNEXTDAYHINT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E1B3B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfEnterNextDayHint_TypeDefinitionIndex = 60899;

	class ElfEnterNextDayHint : public ::System::Object
	{
	public:
		::System::String* ControllerName; // 0x10
		::RPG::Client::TextID TextID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFENTERNEXTDAYHINT__CTOR_OFFSET))(this);
		}
	};
}
