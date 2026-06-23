#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_HELPURLATTRIBUTE_GET_URL_OFFSET UNITYSDK_OFFSET(0x1E3C32A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HELPURLATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C32B0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int HelpURLAttribute_TypeDefinitionIndex = 33327;

	class HelpURLAttribute : public ::System::Attribute
	{
	public:
		::System::String* mURL; // 0x10

		::System::Void _ctor(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HELPURLATTRIBUTE__CTOR_OFFSET))(this, url);
		}

		::System::String* get_URL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HELPURLATTRIBUTE_GET_URL_OFFSET))(this);
		}
	};
}
