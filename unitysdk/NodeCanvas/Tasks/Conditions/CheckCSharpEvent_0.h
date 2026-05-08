#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4665B0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckCSharpEvent_0_TypeDefinitionIndex = 27411;

	class CheckCSharpEvent_0 : public ::System::Object
	{
	public:
		::System::Type* targetType; // 0x10
		::System::String* eventName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCSHARPEVENT_0__CTOR_OFFSET))(this);
		}
	};
}
