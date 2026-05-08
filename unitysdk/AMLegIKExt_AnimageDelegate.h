#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define AMLEGIKEXT_ANIMAGEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA987770)
#define AMLEGIKEXT_ANIMAGEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA9877A0)
#define AMLEGIKEXT_ANIMAGEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA9874D0)
#define AMLEGIKEXT_ANIMAGEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA9874C0)

inline static constexpr unsigned int AMLegIKExt_AnimageDelegate_TypeDefinitionIndex = 57497;

class AMLegIKExt_AnimageDelegate : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AMLEGIKEXT_ANIMAGEDELEGATE__CTOR_OFFSET))(this, object, method);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIKEXT_ANIMAGEDELEGATE_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AMLEGIKEXT_ANIMAGEDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
	}

	::System::Void EndInvoke(::System::IAsyncResult* result)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AMLEGIKEXT_ANIMAGEDELEGATE_ENDINVOKE_OFFSET))(this, result);
	}
};
