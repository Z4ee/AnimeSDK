#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HDG_RDTSERIALIZERREGISTRY_CONVERTOBJECTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15357580)
#define HDG_RDTSERIALIZERREGISTRY_CONVERTOBJECTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x153575C0)
#define HDG_RDTSERIALIZERREGISTRY_CONVERTOBJECTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15354FC0)
#define HDG_RDTSERIALIZERREGISTRY_CONVERTOBJECTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15357490)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerRegistry_ConvertObjectDelegate_TypeDefinitionIndex = 45191;

	class rdtSerializerRegistry_ConvertObjectDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_CONVERTOBJECTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* Invoke(::System::Object* a1, ::Hdg::rdtSerializerRegistry* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_CONVERTOBJECTDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::Hdg::rdtSerializerRegistry* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::Hdg::rdtSerializerRegistry*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_CONVERTOBJECTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERREGISTRY_CONVERTOBJECTDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
