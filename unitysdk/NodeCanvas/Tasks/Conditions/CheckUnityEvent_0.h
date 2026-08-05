#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB9E1B0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckUnityEvent_0_TypeDefinitionIndex = 31336;

	class CheckUnityEvent_0 : public ::System::Object
	{
	public:
		::System::Type* targetType; // 0x10
		::System::String* eventName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKUNITYEVENT_0__CTOR_OFFSET))(this);
		}
	};
}
