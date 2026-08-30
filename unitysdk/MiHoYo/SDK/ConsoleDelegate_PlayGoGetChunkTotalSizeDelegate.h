#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKTOTALSIZEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B93F610)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKTOTALSIZEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B93F640)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKTOTALSIZEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B93F600)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKTOTALSIZEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B93F590)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_PlayGoGetChunkTotalSizeDelegate_TypeDefinitionIndex = 7614;

	class ConsoleDelegate_PlayGoGetChunkTotalSizeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKTOTALSIZEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* Invoke(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKTOTALSIZEDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKTOTALSIZEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOGETCHUNKTOTALSIZEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
