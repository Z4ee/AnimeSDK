#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_95E491FD617A3F68_CLASS_3_E5F5430D92070BCB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x13297120)
#define CLASS_1_95E491FD617A3F68_CLASS_3_E5F5430D92070BCB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x132971D0)
#define CLASS_1_95E491FD617A3F68_CLASS_3_E5F5430D92070BCB_INVOKE_OFFSET UNITYSDK_OFFSET(0x13296DA0)
#define CLASS_1_95E491FD617A3F68_CLASS_3_E5F5430D92070BCB__CTOR_OFFSET UNITYSDK_OFFSET(0x13296D90)

inline static constexpr unsigned int Class_1_95E491FD617A3F68_Class_3_E5F5430D92070BCB_TypeDefinitionIndex = 63276;

class Class_1_95E491FD617A3F68_Class_3_E5F5430D92070BCB : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_95E491FD617A3F68_CLASS_3_E5F5430D92070BCB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::UInt16 a1, ::System::UInt16 a2, ::System::UInt16 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_95E491FD617A3F68_CLASS_3_E5F5430D92070BCB_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt16 a1, ::System::UInt16 a2, ::System::UInt16 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_95E491FD617A3F68_CLASS_3_E5F5430D92070BCB_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_95E491FD617A3F68_CLASS_3_E5F5430D92070BCB_ENDINVOKE_OFFSET))(this, a1);
	}
};
