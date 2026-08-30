#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_HASJOINSESSIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B93E720)
#define MIHOYO_SDK_CONSOLEDELEGATE_HASJOINSESSIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B93E750)
#define MIHOYO_SDK_CONSOLEDELEGATE_HASJOINSESSIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B93E710)
#define MIHOYO_SDK_CONSOLEDELEGATE_HASJOINSESSIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B93E6A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_HasJoinSessionDelegate_TypeDefinitionIndex = 7575;

	class ConsoleDelegate_HasJoinSessionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_HASJOINSESSIONDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_HASJOINSESSIONDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_HASJOINSESSIONDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_HASJOINSESSIONDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
