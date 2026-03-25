#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_1_DAFF948AFE7BB466_CLASS_3_8661546F242498DE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1832DE30)
#define CLASS_1_DAFF948AFE7BB466_CLASS_3_8661546F242498DE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1832DE60)
#define CLASS_1_DAFF948AFE7BB466_CLASS_3_8661546F242498DE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1832CFB0)
#define CLASS_1_DAFF948AFE7BB466_CLASS_3_8661546F242498DE__CTOR_OFFSET UNITYSDK_OFFSET(0x1832DE10)

inline static constexpr unsigned int Class_1_DAFF948AFE7BB466_Class_3_8661546F242498DE_TypeDefinitionIndex = 9509;

class Class_1_DAFF948AFE7BB466_Class_3_8661546F242498DE : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_CLASS_3_8661546F242498DE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Invoke(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_CLASS_3_8661546F242498DE_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_CLASS_3_8661546F242498DE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::String* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_CLASS_3_8661546F242498DE_ENDINVOKE_OFFSET))(this, a1);
	}
};
