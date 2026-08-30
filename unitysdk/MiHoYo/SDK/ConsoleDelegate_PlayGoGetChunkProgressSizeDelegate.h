#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C5FA450)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C5FA480)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C5FA440)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FA3D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_PlayGoGetChunkProgressSizeDelegate_TypeDefinitionIndex = 7615;

	class ConsoleDelegate_PlayGoGetChunkProgressSizeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* Invoke(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKPROGRESSSIZEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
