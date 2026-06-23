#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69F990)
#define FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER___C__DISPLAYCLASS7_0__QUEUEWORKITEM_B__0_OFFSET UNITYSDK_OFFSET(0x1D69FE60)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int ThreadPoolWorker___c__DisplayClass7_0_TypeDefinitionIndex = 28380;

	class ThreadPoolWorker___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Action* act; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _QueueWorkItem_b__0(::System::Object* x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_THREADPOOLWORKER___C__DISPLAYCLASS7_0__QUEUEWORKITEM_B__0_OFFSET))(this, x);
		}
	};
}
