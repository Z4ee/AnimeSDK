#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EASINGFUNCTION_FUNCTIONVALUE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x83660A0)
#define EASINGFUNCTION_FUNCTIONVALUE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x83660F0)
#define EASINGFUNCTION_FUNCTIONVALUE_INVOKE_OFFSET UNITYSDK_OFFSET(0x8365D30)
#define EASINGFUNCTION_FUNCTIONVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x8365290)

inline static constexpr unsigned int EasingFunction_FunctionValue_TypeDefinitionIndex = 35104;

class EasingFunction_FunctionValue : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EASINGFUNCTION_FUNCTIONVALUE__CTOR_OFFSET))(this, object, method);
	}

	::System::Single Invoke(::System::Single v)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_FUNCTIONVALUE_INVOKE_OFFSET))(this, v);
	}

	::System::IAsyncResult* BeginInvoke(::System::Single v, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EASINGFUNCTION_FUNCTIONVALUE_BEGININVOKE_OFFSET))(this, v, callback, object);
	}

	::System::Single EndInvoke(::System::IAsyncResult* result)
	{
		return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EASINGFUNCTION_FUNCTIONVALUE_ENDINVOKE_OFFSET))(this, result);
	}
};
