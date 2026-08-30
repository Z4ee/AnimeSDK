#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EASINGFUNCTION_FUNCTIONVALUE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DB61B80)
#define EASINGFUNCTION_FUNCTIONVALUE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DB61BD0)
#define EASINGFUNCTION_FUNCTIONVALUE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DB61B70)
#define EASINGFUNCTION_FUNCTIONVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB61B00)

inline static constexpr unsigned int EasingFunction_FunctionValue_TypeDefinitionIndex = 44793;

class EasingFunction_FunctionValue : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EASINGFUNCTION_FUNCTIONVALUE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Invoke(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_FUNCTIONVALUE_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::Single a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EASINGFUNCTION_FUNCTIONVALUE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Single EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EASINGFUNCTION_FUNCTIONVALUE_ENDINVOKE_OFFSET))(this, a1);
	}
};
