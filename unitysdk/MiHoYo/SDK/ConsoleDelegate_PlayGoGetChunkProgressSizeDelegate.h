#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17517B70)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17517BA0)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x17517610)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x175175F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_PlayGoGetChunkProgressSizeDelegate_TypeDefinitionIndex = 6717;

	class ConsoleDelegate_PlayGoGetChunkProgressSizeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::String* Invoke(::System::String* chunkId)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE_INVOKE_OFFSET))(this, chunkId);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* chunkId, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE_BEGININVOKE_OFFSET))(this, chunkId, callback, object);
		}

		::System::String* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
