#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define DEST_MATH_ODEFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C2B9CC0)
#define DEST_MATH_ODEFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C2B9D50)
#define DEST_MATH_ODEFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C2B9930)
#define DEST_MATH_ODEFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B9920)

namespace Dest::Math
{
	inline static constexpr unsigned int OdeFunction_TypeDefinitionIndex = 33192;

	class OdeFunction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DEST_MATH_ODEFUNCTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Single t, ::Il2CppArray<::System::Single>* y, ::Il2CppArray<::System::Single>* F)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DEST_MATH_ODEFUNCTION_INVOKE_OFFSET))(this, t, y, F);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single t, ::Il2CppArray<::System::Single>* y, ::Il2CppArray<::System::Single>* F, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DEST_MATH_ODEFUNCTION_BEGININVOKE_OFFSET))(this, t, y, F, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DEST_MATH_ODEFUNCTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
