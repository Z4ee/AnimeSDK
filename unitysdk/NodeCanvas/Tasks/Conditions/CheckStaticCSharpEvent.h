#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKSTATICCSHARPEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B331270)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckStaticCSharpEvent_TypeDefinitionIndex = 27864;

	class CheckStaticCSharpEvent : public ::System::Object
	{
	public:
		::System::String* eventName; // 0x10
		::System::Type* targetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKSTATICCSHARPEVENT__CTOR_OFFSET))(this);
		}
	};
}
