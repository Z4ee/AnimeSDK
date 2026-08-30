#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOINITIALIZEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C5FA5D0)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOINITIALIZEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C5FA600)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOINITIALIZEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C5FA5C0)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOINITIALIZEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FA550)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_PlayGoInitializeDelegate_TypeDefinitionIndex = 7610;

	class ConsoleDelegate_PlayGoInitializeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOINITIALIZEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOINITIALIZEDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOINITIALIZEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOINITIALIZEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
