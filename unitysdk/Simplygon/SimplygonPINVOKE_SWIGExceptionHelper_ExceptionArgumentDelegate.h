#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_EXCEPTIONARGUMENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1836A5B0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_EXCEPTIONARGUMENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1836A5F0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_EXCEPTIONARGUMENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1836A030)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_EXCEPTIONARGUMENTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1836A010)

namespace Simplygon
{
	inline static constexpr unsigned int SimplygonPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate_TypeDefinitionIndex = 29584;

	class SimplygonPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_EXCEPTIONARGUMENTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* message, ::System::String* paramName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_EXCEPTIONARGUMENTDELEGATE_INVOKE_OFFSET))(this, message, paramName);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* message, ::System::String* paramName, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_EXCEPTIONARGUMENTDELEGATE_BEGININVOKE_OFFSET))(this, message, paramName, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGEXCEPTIONHELPER_EXCEPTIONARGUMENTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
