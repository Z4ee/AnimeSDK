#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace SRF::Helpers { class PropertyReference; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SRF_HELPERS_PROPERTYVALUECHANGEDHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E6A9EB0)
#define SRF_HELPERS_PROPERTYVALUECHANGEDHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E6A9EE0)
#define SRF_HELPERS_PROPERTYVALUECHANGEDHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E6A9710)
#define SRF_HELPERS_PROPERTYVALUECHANGEDHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A9E40)

namespace SRF::Helpers
{
	inline static constexpr unsigned int PropertyValueChangedHandler_TypeDefinitionIndex = 34757;

	class PropertyValueChangedHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYVALUECHANGEDHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::SRF::Helpers::PropertyReference* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRF::Helpers::PropertyReference*))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYVALUECHANGEDHANDLER_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::SRF::Helpers::PropertyReference* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::SRF::Helpers::PropertyReference*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYVALUECHANGEDHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYVALUECHANGEDHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
