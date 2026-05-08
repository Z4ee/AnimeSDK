#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_1_95E491FD617A3F68_CLASS_3_6994D39DC3127F12_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x169EFE90)
#define CLASS_1_95E491FD617A3F68_CLASS_3_6994D39DC3127F12_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x169EFF30)
#define CLASS_1_95E491FD617A3F68_CLASS_3_6994D39DC3127F12_INVOKE_OFFSET UNITYSDK_OFFSET(0x169EF8F0)
#define CLASS_1_95E491FD617A3F68_CLASS_3_6994D39DC3127F12__CTOR_OFFSET UNITYSDK_OFFSET(0x169EF8E0)

inline static constexpr unsigned int Class_1_95E491FD617A3F68_Class_3_6994D39DC3127F12_TypeDefinitionIndex = 63277;

class Class_1_95E491FD617A3F68_Class_3_6994D39DC3127F12 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_95E491FD617A3F68_CLASS_3_6994D39DC3127F12__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_95E491FD617A3F68_CLASS_3_6994D39DC3127F12_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_95E491FD617A3F68_CLASS_3_6994D39DC3127F12_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_95E491FD617A3F68_CLASS_3_6994D39DC3127F12_ENDINVOKE_OFFSET))(this, a1);
	}
};
