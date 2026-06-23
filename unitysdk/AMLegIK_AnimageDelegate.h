#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define AMLEGIK_ANIMAGEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10FDBAD0)
#define AMLEGIK_ANIMAGEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10FDBB00)
#define AMLEGIK_ANIMAGEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x10FDB830)
#define AMLEGIK_ANIMAGEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x10FDB810)

inline static constexpr unsigned int AMLegIK_AnimageDelegate_TypeDefinitionIndex = 67264;

class AMLegIK_AnimageDelegate : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AMLEGIK_ANIMAGEDELEGATE__CTOR_OFFSET))(this, object, method);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLEGIK_ANIMAGEDELEGATE_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AMLEGIK_ANIMAGEDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
	}

	::System::Void EndInvoke(::System::IAsyncResult* result)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AMLEGIK_ANIMAGEDELEGATE_ENDINVOKE_OFFSET))(this, result);
	}
};
