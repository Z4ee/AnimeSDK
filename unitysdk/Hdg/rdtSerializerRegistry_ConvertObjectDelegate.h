#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HDG_RDTSERIALIZERREGISTRY_CONVERTOBJECTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8C2A4C0)
#define HDG_RDTSERIALIZERREGISTRY_CONVERTOBJECTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8C2A500)
#define HDG_RDTSERIALIZERREGISTRY_CONVERTOBJECTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x8C280E0)
#define HDG_RDTSERIALIZERREGISTRY_CONVERTOBJECTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x8C25930)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerRegistry_ConvertObjectDelegate_TypeDefinitionIndex = 43779;

	class rdtSerializerRegistry_ConvertObjectDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_CONVERTOBJECTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Object* Invoke(::System::Object* objIn, ::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_CONVERTOBJECTDELEGATE_INVOKE_OFFSET))(this, objIn, registry);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* objIn, ::Hdg::rdtSerializerRegistry* registry, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::Hdg::rdtSerializerRegistry*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_CONVERTOBJECTDELEGATE_BEGININVOKE_OFFSET))(this, objIn, registry, callback, object);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_CONVERTOBJECTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
