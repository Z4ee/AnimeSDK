#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSource.h"

namespace System { class String; }

#define MESSAGEPACK_MESSAGEPACKEVENTSOURCE_FORMATTERDYNAMICALLYGENERATEDSTART_OFFSET UNITYSDK_OFFSET(0x1734D4F0)
#define MESSAGEPACK_MESSAGEPACKEVENTSOURCE_FORMATTERDYNAMICALLYGENERATEDSTOP_OFFSET UNITYSDK_OFFSET(0x17364D60)
#define MESSAGEPACK_MESSAGEPACKEVENTSOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17364D70)
#define MESSAGEPACK_MESSAGEPACKEVENTSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x17364D20)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackEventSource_TypeDefinitionIndex = 9220;

	class MessagePackEventSource : public ::System::Diagnostics::Tracing::EventSource
	{
	public:
		static ::MessagePack::MessagePackEventSource** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackEventSource**)Il2CppClass::FromTypeDefinitionIndex(MessagePackEventSource_TypeDefinitionIndex)->GetStaticField(0x42930);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKEVENTSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKEVENTSOURCE__CCTOR_OFFSET))();
		}

		::System::Void FormatterDynamicallyGeneratedStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKEVENTSOURCE_FORMATTERDYNAMICALLYGENERATEDSTART_OFFSET))(this);
		}

		::System::Void FormatterDynamicallyGeneratedStop(::System::String* dataType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKEVENTSOURCE_FORMATTERDYNAMICALLYGENERATEDSTOP_OFFSET))(this, dataType);
		}
	};
}
