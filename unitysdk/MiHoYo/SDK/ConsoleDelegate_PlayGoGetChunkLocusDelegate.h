#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKLOCUSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BA7D720)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKLOCUSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BA7D750)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKLOCUSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BA7D1E0)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKLOCUSDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA7D1C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_PlayGoGetChunkLocusDelegate_TypeDefinitionIndex = 19421;

	class ConsoleDelegate_PlayGoGetChunkLocusDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKLOCUSDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::System::String* chunkId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKLOCUSDELEGATE_INVOKE_OFFSET))(this, chunkId);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* chunkId, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKLOCUSDELEGATE_BEGININVOKE_OFFSET))(this, chunkId, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKLOCUSDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
