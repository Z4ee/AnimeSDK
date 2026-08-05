#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class WaitCallback; }

#define FLUFFYUNDERWARE_DEVTOOLS_QUEUEDCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA58660)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int QueuedCallback_TypeDefinitionIndex = 28979;

	class QueuedCallback : public ::System::Object
	{
	public:
		::System::Object* State; // 0x10
		::System::Threading::WaitCallback* Callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_QUEUEDCALLBACK__CTOR_OFFSET))(this);
		}
	};
}
