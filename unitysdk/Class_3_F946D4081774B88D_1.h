#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_F946D4081774B88D_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA9E3040)
#define CLASS_3_F946D4081774B88D_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA9E3090)
#define CLASS_3_F946D4081774B88D_1_INVOKE_OFFSET UNITYSDK_OFFSET(0xA9E3030)
#define CLASS_3_F946D4081774B88D_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA9E2FC0)

inline static constexpr unsigned int Class_3_F946D4081774B88D_1_TypeDefinitionIndex = 68582;

class Class_3_F946D4081774B88D_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_F946D4081774B88D_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Invoke(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F946D4081774B88D_1_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::Single a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_F946D4081774B88D_1_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Single EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_F946D4081774B88D_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
