#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace CriWare { class CriFsRequest; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIFSREQUEST_DONEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E661D20)
#define CRIWARE_CRIFSREQUEST_DONEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E661D50)
#define CRIWARE_CRIFSREQUEST_DONEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E661750)
#define CRIWARE_CRIFSREQUEST_DONEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E661D00)

namespace CriWare
{
	inline static constexpr unsigned int CriFsRequest_DoneDelegate_TypeDefinitionIndex = 34312;

	class CriFsRequest_DoneDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSREQUEST_DONEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::CriWare::CriFsRequest* request)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsRequest*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSREQUEST_DONEDELEGATE_INVOKE_OFFSET))(this, request);
		}

		::System::IAsyncResult* BeginInvoke(::CriWare::CriFsRequest* request, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::CriWare::CriFsRequest*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSREQUEST_DONEDELEGATE_BEGININVOKE_OFFSET))(this, request, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSREQUEST_DONEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
