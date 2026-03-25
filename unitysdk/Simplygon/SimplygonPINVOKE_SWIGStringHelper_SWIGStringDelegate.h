#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGSTRINGHELPER_SWIGSTRINGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1836B2D0)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGSTRINGHELPER_SWIGSTRINGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1836B300)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGSTRINGHELPER_SWIGSTRINGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1836AD70)
#define SIMPLYGON_SIMPLYGONPINVOKE_SWIGSTRINGHELPER_SWIGSTRINGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1836AD50)

namespace Simplygon
{
	inline static constexpr unsigned int SimplygonPINVOKE_SWIGStringHelper_SWIGStringDelegate_TypeDefinitionIndex = 29587;

	class SimplygonPINVOKE_SWIGStringHelper_SWIGStringDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGSTRINGHELPER_SWIGSTRINGDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::String* Invoke(::System::String* message)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGSTRINGHELPER_SWIGSTRINGDELEGATE_INVOKE_OFFSET))(this, message);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* message, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGSTRINGHELPER_SWIGSTRINGDELEGATE_BEGININVOKE_OFFSET))(this, message, callback, object);
		}

		::System::String* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SIMPLYGON_SIMPLYGONPINVOKE_SWIGSTRINGHELPER_SWIGSTRINGDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
