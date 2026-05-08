#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define NODECANVAS_FRAMEWORK_EVENTRECEIVERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9011E0)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int EventReceiverAttribute_TypeDefinitionIndex = 26982;

	class EventReceiverAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::String*>* eventMessages; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::String*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_EVENTRECEIVERATTRIBUTE__CTOR_OFFSET))(this, args);
		}
	};
}
