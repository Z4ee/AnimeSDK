#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackEventSource; }
namespace System { class Type; }

#define MESSAGEPACK_MESSAGEPACKEVENTSOURCEEXTENSIONS_FORMATTERDYNAMICALLYGENERATEDSTOP_OFFSET UNITYSDK_OFFSET(0x15D52950)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackEventSourceExtensions_TypeDefinitionIndex = 9025;

	class MessagePackEventSourceExtensions : public ::System::Object
	{
	public:
		static ::System::Void FormatterDynamicallyGeneratedStop(::MessagePack::MessagePackEventSource* source, ::System::Type* dataType)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackEventSource*, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKEVENTSOURCEEXTENSIONS_FORMATTERDYNAMICALLYGENERATEDSTOP_OFFSET))(source, dataType);
		}
	};
}
