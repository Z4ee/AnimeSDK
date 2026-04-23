#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EASINGFUNCTION_FUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8B8DC60)
#define EASINGFUNCTION_FUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8B8DD00)
#define EASINGFUNCTION_FUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x8B8D8A0)
#define EASINGFUNCTION_FUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x8B8CD30)

inline static constexpr unsigned int EasingFunction_Function_TypeDefinitionIndex = 40931;

class EasingFunction_Function : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EASINGFUNCTION_FUNCTION__CTOR_OFFSET))(this, object, method);
	}

	::System::Single Invoke(::System::Single s, ::System::Single e, ::System::Single v)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_FUNCTION_INVOKE_OFFSET))(this, s, e, v);
	}

	::System::IAsyncResult* BeginInvoke(::System::Single s, ::System::Single e, ::System::Single v, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EASINGFUNCTION_FUNCTION_BEGININVOKE_OFFSET))(this, s, e, v, callback, object);
	}

	::System::Single EndInvoke(::System::IAsyncResult* result)
	{
		return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EASINGFUNCTION_FUNCTION_ENDINVOKE_OFFSET))(this, result);
	}
};
