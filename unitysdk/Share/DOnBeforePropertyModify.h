#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Share { class CToChangeInfoOfProperty; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SHARE_DONBEFOREPROPERTYMODIFY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x188475F0)
#define SHARE_DONBEFOREPROPERTYMODIFY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18847620)
#define SHARE_DONBEFOREPROPERTYMODIFY_INVOKE_OFFSET UNITYSDK_OFFSET(0x188470F0)
#define SHARE_DONBEFOREPROPERTYMODIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x188470E0)

namespace Share
{
	inline static constexpr unsigned int DOnBeforePropertyModify_TypeDefinitionIndex = 11138;

	class DOnBeforePropertyModify : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SHARE_DONBEFOREPROPERTYMODIFY__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Share::CToChangeInfoOfProperty* oToChangeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Share::CToChangeInfoOfProperty*))((::PBYTE)hIl2Cpp + SHARE_DONBEFOREPROPERTYMODIFY_INVOKE_OFFSET))(this, oToChangeInfo);
		}

		::System::IAsyncResult* BeginInvoke(::Share::CToChangeInfoOfProperty* oToChangeInfo, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Share::CToChangeInfoOfProperty*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SHARE_DONBEFOREPROPERTYMODIFY_BEGININVOKE_OFFSET))(this, oToChangeInfo, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SHARE_DONBEFOREPROPERTYMODIFY_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
