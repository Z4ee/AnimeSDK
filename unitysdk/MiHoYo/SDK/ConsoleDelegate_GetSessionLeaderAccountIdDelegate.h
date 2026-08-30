#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLEDELEGATE_GETSESSIONLEADERACCOUNTIDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B93E2B0)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETSESSIONLEADERACCOUNTIDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B93E2E0)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETSESSIONLEADERACCOUNTIDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B93E2A0)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETSESSIONLEADERACCOUNTIDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B93E230)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_GetSessionLeaderAccountIdDelegate_TypeDefinitionIndex = 7600;

	class ConsoleDelegate_GetSessionLeaderAccountIdDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETSESSIONLEADERACCOUNTIDDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt64 Invoke()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETSESSIONLEADERACCOUNTIDDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETSESSIONLEADERACCOUNTIDDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::UInt64 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETSESSIONLEADERACCOUNTIDDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
