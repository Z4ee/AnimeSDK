#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOINITIALIZEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17518440)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOINITIALIZEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17518470)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOINITIALIZEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x17518190)
#define MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOINITIALIZEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17518170)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_PlayGoInitializeDelegate_TypeDefinitionIndex = 6712;

	class ConsoleDelegate_PlayGoInitializeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOINITIALIZEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOINITIALIZEDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOINITIALIZEDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_PLAYGOINITIALIZEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
