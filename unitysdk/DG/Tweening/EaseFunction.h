#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define DG_TWEENING_EASEFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E86ABB0)
#define DG_TWEENING_EASEFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E86AC80)
#define DG_TWEENING_EASEFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E86A7B0)
#define DG_TWEENING_EASEFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E86A790)

namespace DG::Tweening
{
	inline static constexpr unsigned int EaseFunction_TypeDefinitionIndex = 27834;

	class EaseFunction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DG_TWEENING_EASEFUNCTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Single Invoke(::System::Single time, ::System::Single duration, ::System::Single overshootOrAmplitude, ::System::Single period)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_EASEFUNCTION_INVOKE_OFFSET))(this, time, duration, overshootOrAmplitude, period);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single time, ::System::Single duration, ::System::Single overshootOrAmplitude, ::System::Single period, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DG_TWEENING_EASEFUNCTION_BEGININVOKE_OFFSET))(this, time, duration, overshootOrAmplitude, period, callback, object);
		}

		::System::Single EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DG_TWEENING_EASEFUNCTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
