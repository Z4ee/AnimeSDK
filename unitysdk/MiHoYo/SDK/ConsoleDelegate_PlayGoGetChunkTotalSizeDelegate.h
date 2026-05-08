#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKTOTALSIZEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A50EC70)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKTOTALSIZEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A50ECA0)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKTOTALSIZEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A50E730)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKTOTALSIZEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A50E720)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_PlayGoGetChunkTotalSizeDelegate_TypeDefinitionIndex = 18538;

	class ConsoleDelegate_PlayGoGetChunkTotalSizeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKTOTALSIZEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::String* Invoke(::System::String* chunkId)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKTOTALSIZEDELEGATE_INVOKE_OFFSET))(this, chunkId);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* chunkId, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKTOTALSIZEDELEGATE_BEGININVOKE_OFFSET))(this, chunkId, callback, object);
		}

		::System::String* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKTOTALSIZEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
