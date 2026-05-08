#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace QWER { class CTimer; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define QWER_DONTIMER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C3E7030)
#define QWER_DONTIMER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C3E7060)
#define QWER_DONTIMER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C3E4D60)
#define QWER_DONTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E7020)

namespace QWER
{
	inline static constexpr unsigned int DOnTimer_TypeDefinitionIndex = 84246;

	class DOnTimer : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + QWER_DONTIMER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::QWER::CTimer* oTimer)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::CTimer*))((::PBYTE)hIl2Cpp + QWER_DONTIMER_INVOKE_OFFSET))(this, oTimer);
		}

		::System::IAsyncResult* BeginInvoke(::QWER::CTimer* oTimer, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::QWER::CTimer*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + QWER_DONTIMER_BEGININVOKE_OFFSET))(this, oTimer, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + QWER_DONTIMER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
