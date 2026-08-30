#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class ConsoleDelegate_GetUserCollectionsIdCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B93E570)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B93E5B0)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B93E560)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B93E4E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_GetUserCollectionsIdDelegate_TypeDefinitionIndex = 7623;

	class ConsoleDelegate_GetUserCollectionsIdDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1, ::MiHoYo::SDK::ConsoleDelegate_GetUserCollectionsIdCallback* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::ConsoleDelegate_GetUserCollectionsIdCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::MiHoYo::SDK::ConsoleDelegate_GetUserCollectionsIdCallback* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::ConsoleDelegate_GetUserCollectionsIdCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETUSERCOLLECTIONSIDDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
