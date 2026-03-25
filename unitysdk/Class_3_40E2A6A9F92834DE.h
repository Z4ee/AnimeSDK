#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_40E2A6A9F92834DE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1142E440)
#define CLASS_3_40E2A6A9F92834DE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1142E4C0)
#define CLASS_3_40E2A6A9F92834DE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1142DE60)
#define CLASS_3_40E2A6A9F92834DE__CTOR_OFFSET UNITYSDK_OFFSET(0x1142DE40)

inline static constexpr unsigned int Class_3_40E2A6A9F92834DE_TypeDefinitionIndex = 44773;

class Class_3_40E2A6A9F92834DE : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_40E2A6A9F92834DE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::String* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_40E2A6A9F92834DE_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_40E2A6A9F92834DE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_40E2A6A9F92834DE_ENDINVOKE_OFFSET))(this, a1);
	}
};
