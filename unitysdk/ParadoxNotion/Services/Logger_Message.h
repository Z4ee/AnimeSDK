#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }

#define PARADOXNOTION_SERVICES_LOGGER_MESSAGE_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xA295B0)
#define PARADOXNOTION_SERVICES_LOGGER_MESSAGE_ISVALID_OFFSET UNITYSDK_OFFSET(0xA296C0)
#define PARADOXNOTION_SERVICES_LOGGER_MESSAGE_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xA29620)

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int Logger_Message_TypeDefinitionIndex = 29780;

	struct alignas(8) Logger_Message
	{
		::System::WeakReference_1<::System::Object*>* _contextRef; // 0x10
		::UnityEngine::LogType type; // 0x18
		::System::String* text; // 0x20
		::System::String* tag; // 0x28

		::System::Object* get_context()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_LOGGER_MESSAGE_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_context(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_LOGGER_MESSAGE_SET_CONTEXT_OFFSET))(this, value);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_LOGGER_MESSAGE_ISVALID_OFFSET))(this);
		}
	};
}
