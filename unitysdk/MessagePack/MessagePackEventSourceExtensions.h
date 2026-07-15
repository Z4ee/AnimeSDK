#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackEventSource; }
namespace System { class Type; }

#define MESSAGEPACK_MESSAGEPACKEVENTSOURCEEXTENSIONS_FORMATTERDYNAMICALLYGENERATEDSTOP_OFFSET UNITYSDK_OFFSET(0x14F90FE0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackEventSourceExtensions_TypeDefinitionIndex = 7131;

	class MessagePackEventSourceExtensions : public ::System::Object
	{
	public:
		static ::System::Void FormatterDynamicallyGeneratedStop(::MessagePack::MessagePackEventSource* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackEventSource*, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKEVENTSOURCEEXTENSIONS_FORMATTERDYNAMICALLYGENERATEDSTOP_OFFSET))(a1, a2);
		}
	};
}
