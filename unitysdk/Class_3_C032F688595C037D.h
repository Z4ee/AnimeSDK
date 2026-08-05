#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_C032F688595C037D_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xF226600)
#define CLASS_3_C032F688595C037D_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xF2266A0)
#define CLASS_3_C032F688595C037D_INVOKE_OFFSET UNITYSDK_OFFSET(0xF225FF0)
#define CLASS_3_C032F688595C037D__CTOR_OFFSET UNITYSDK_OFFSET(0xF225FD0)

inline static constexpr unsigned int Class_3_C032F688595C037D_TypeDefinitionIndex = 43667;

class Class_3_C032F688595C037D : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_C032F688595C037D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::String* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C032F688595C037D_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_C032F688595C037D_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_C032F688595C037D_ENDINVOKE_OFFSET))(this, a1);
	}
};
