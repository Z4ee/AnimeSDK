#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AudioBasePathType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_AUDIOBASEPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x122FF070)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AudioBasePath_TypeDefinitionIndex = 55333;

	class AudioBasePath : public ::System::Object
	{
	public:
		::System::String* path; // 0x10
		::MoleMole::Config::AudioBasePathType type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AUDIOBASEPATH__CTOR_OFFSET))(this);
		}
	};
}
