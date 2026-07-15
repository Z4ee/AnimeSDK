#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace CriWare { class CriFsRequest; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIFSREQUEST_DONEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BE59120)
#define CRIWARE_CRIFSREQUEST_DONEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BE59150)
#define CRIWARE_CRIFSREQUEST_DONEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BE58E30)
#define CRIWARE_CRIFSREQUEST_DONEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE59030)

namespace CriWare
{
	inline static constexpr unsigned int CriFsRequest_DoneDelegate_TypeDefinitionIndex = 37950;

	class CriFsRequest_DoneDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSREQUEST_DONEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::CriWare::CriFsRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsRequest*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSREQUEST_DONEDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::CriWare::CriFsRequest* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::CriWare::CriFsRequest*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSREQUEST_DONEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSREQUEST_DONEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
