#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_SYSTEMMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1712D750)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SystemModel_TypeDefinitionIndex = 7844;

	class SystemModel : public ::System::Object
	{
	public:
		::System::String* operatingSystem; // 0x10
		::System::String* deviceName; // 0x18
		::System::String* deviceModel; // 0x20
		::System::String* deviceUniqueIdentifier; // 0x28
		::System::Int32 processorFrequency; // 0x30
		::System::Int32 mainThreadId; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SYSTEMMODEL__CTOR_OFFSET))(this);
		}
	};
}
