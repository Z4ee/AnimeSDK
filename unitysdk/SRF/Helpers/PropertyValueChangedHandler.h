#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace SRF::Helpers { class PropertyReference; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SRF_HELPERS_PROPERTYVALUECHANGEDHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18468260)
#define SRF_HELPERS_PROPERTYVALUECHANGEDHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18468290)
#define SRF_HELPERS_PROPERTYVALUECHANGEDHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x18467940)
#define SRF_HELPERS_PROPERTYVALUECHANGEDHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18468240)

namespace SRF::Helpers
{
	inline static constexpr unsigned int PropertyValueChangedHandler_TypeDefinitionIndex = 27713;

	class PropertyValueChangedHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYVALUECHANGEDHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::SRF::Helpers::PropertyReference* property)
		{
			return ((::System::Void(*)(::PVOID, ::SRF::Helpers::PropertyReference*))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYVALUECHANGEDHANDLER_INVOKE_OFFSET))(this, property);
		}

		::System::IAsyncResult* BeginInvoke(::SRF::Helpers::PropertyReference* property, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::SRF::Helpers::PropertyReference*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYVALUECHANGEDHANDLER_BEGININVOKE_OFFSET))(this, property, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYVALUECHANGEDHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
