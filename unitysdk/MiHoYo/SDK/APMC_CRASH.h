#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int APMC_CRASH_TypeDefinitionIndex = 44767;

	class APMC_CRASH : public ::System::Object
	{
	public:
		// static const ::System::String* PACKAGE_LOG; // 0x0
		// static const ::System::String* UUID; // 0x0
		// static const ::System::String* ATTACHMENT_PATH; // 0x0
		// static const ::System::String* ATTACHMENT_CHUNK_SIZE; // 0x0
		// static const ::System::String* ATTACHMENT_MAX_UPLOAD_THREAD_COUNT; // 0x0
		// static const ::System::String* ATTACHMENT_MAX_UPLOAD_MEM_SIZE; // 0x0
		// static const ::System::String* ATTACHMENT_MAX_CHUNK_TIMEOUT; // 0x0
		// static const ::System::String* ATTACHMENT_MAX_RETRY_COUNT; // 0x0
		// static const ::System::String* ENABLE_ATTACHMENT_UPLOAD; // 0x0
	};
}
