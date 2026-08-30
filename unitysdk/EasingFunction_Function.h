#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EASINGFUNCTION_FUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DB61A30)
#define EASINGFUNCTION_FUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DB61AD0)
#define EASINGFUNCTION_FUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DB61A10)
#define EASINGFUNCTION_FUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB619A0)

inline static constexpr unsigned int EasingFunction_Function_TypeDefinitionIndex = 44792;

class EasingFunction_Function : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EASINGFUNCTION_FUNCTION__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Invoke(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_FUNCTION_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EASINGFUNCTION_FUNCTION_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Single EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EASINGFUNCTION_FUNCTION_ENDINVOKE_OFFSET))(this, a1);
	}
};
