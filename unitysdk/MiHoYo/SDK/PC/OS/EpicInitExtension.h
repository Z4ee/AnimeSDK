#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_EPICINITEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEE4D00)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int EpicInitExtension_TypeDefinitionIndex = 8530;

	class EpicInitExtension : public ::System::Object
	{
	public:
		::System::String* productId; // 0x10
		::System::String* sandboxId; // 0x18
		::System::String* deploymentId; // 0x20
		::System::String* clientId; // 0x28
		::System::String* accountId; // 0x30
		::System::String* errorType; // 0x38
		::System::Int32 thirdErrorCode; // 0x40
		::System::String* eosResultString; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_EPICINITEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
