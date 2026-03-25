#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_1_DAFF948AFE7BB466_CLASS_3_8661546F242498DE_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1832DDD0)
#define CLASS_1_DAFF948AFE7BB466_CLASS_3_8661546F242498DE_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1832DE00)
#define CLASS_1_DAFF948AFE7BB466_CLASS_3_8661546F242498DE_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x1832C890)
#define CLASS_1_DAFF948AFE7BB466_CLASS_3_8661546F242498DE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1832DDB0)

inline static constexpr unsigned int Class_1_DAFF948AFE7BB466_Class_3_8661546F242498DE_1_TypeDefinitionIndex = 9511;

class Class_1_DAFF948AFE7BB466_Class_3_8661546F242498DE_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_CLASS_3_8661546F242498DE_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_CLASS_3_8661546F242498DE_1_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_CLASS_3_8661546F242498DE_1_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_DAFF948AFE7BB466_CLASS_3_8661546F242498DE_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
