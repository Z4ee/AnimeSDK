#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_CHECKPRIVILEGEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C5F7D60)
#define MIHOYO_SDK_CONSOLEDELEGATE_CHECKPRIVILEGEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C5F7D90)
#define MIHOYO_SDK_CONSOLEDELEGATE_CHECKPRIVILEGEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C5F7D50)
#define MIHOYO_SDK_CONSOLEDELEGATE_CHECKPRIVILEGEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F7CE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_CheckPrivilegeDelegate_TypeDefinitionIndex = 7567;

	class ConsoleDelegate_CheckPrivilegeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CHECKPRIVILEGEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CHECKPRIVILEGEDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CHECKPRIVILEGEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_CHECKPRIVILEGEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
