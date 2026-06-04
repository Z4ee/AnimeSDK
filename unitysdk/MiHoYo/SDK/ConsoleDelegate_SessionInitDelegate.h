#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_SESSIONINITDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18309E50)
#define MIHOYO_SDK_CONSOLEDELEGATE_SESSIONINITDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18309E80)
#define MIHOYO_SDK_CONSOLEDELEGATE_SESSIONINITDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18309E40)
#define MIHOYO_SDK_CONSOLEDELEGATE_SESSIONINITDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18309DD0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_SessionInitDelegate_TypeDefinitionIndex = 7577;

	class ConsoleDelegate_SessionInitDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SESSIONINITDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SESSIONINITDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SESSIONINITDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SESSIONINITDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
