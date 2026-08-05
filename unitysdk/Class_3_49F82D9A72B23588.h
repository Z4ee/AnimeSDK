#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BEDB7A8B7ABCB952.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_49F82D9A72B23588_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x102EF580)
#define CLASS_3_49F82D9A72B23588_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x102EF650)
#define CLASS_3_49F82D9A72B23588_INVOKE_OFFSET UNITYSDK_OFFSET(0x102EEF30)
#define CLASS_3_49F82D9A72B23588__CTOR_OFFSET UNITYSDK_OFFSET(0x102EEF10)

inline static constexpr unsigned int Class_3_49F82D9A72B23588_TypeDefinitionIndex = 68212;

class Class_3_49F82D9A72B23588 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_49F82D9A72B23588__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::String* a1, ::System::Single a2, ::Enum_3_BEDB7A8B7ABCB952 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::Enum_3_BEDB7A8B7ABCB952, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_49F82D9A72B23588_INVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Single a2, ::Enum_3_BEDB7A8B7ABCB952 a3, ::System::Boolean a4, ::System::AsyncCallback* a5, ::System::Object* a6)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Single, ::Enum_3_BEDB7A8B7ABCB952, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_49F82D9A72B23588_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_49F82D9A72B23588_ENDINVOKE_OFFSET))(this, a1);
	}
};
