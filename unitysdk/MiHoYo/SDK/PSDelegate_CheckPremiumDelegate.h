#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PSDELEGATE_CHECKPREMIUMDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x199412A0)
#define MIHOYO_SDK_PSDELEGATE_CHECKPREMIUMDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x199412D0)
#define MIHOYO_SDK_PSDELEGATE_CHECKPREMIUMDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19941000)
#define MIHOYO_SDK_PSDELEGATE_CHECKPREMIUMDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19940FF0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_CheckPremiumDelegate_TypeDefinitionIndex = 18631;

	class PSDelegate_CheckPremiumDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_CHECKPREMIUMDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_CHECKPREMIUMDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_CHECKPREMIUMDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_CHECKPREMIUMDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
