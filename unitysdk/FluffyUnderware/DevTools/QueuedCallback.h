#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class WaitCallback; }

#define FLUFFYUNDERWARE_DEVTOOLS_QUEUEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D7010)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int QueuedCallback_TypeDefinitionIndex = 25881;

	class QueuedCallback : public ::System::Object
	{
	public:
		::System::Threading::WaitCallback* Callback; // 0x10
		::System::Object* State; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_QUEUEDCALLBACK__CTOR_OFFSET))(this);
		}
	};
}
