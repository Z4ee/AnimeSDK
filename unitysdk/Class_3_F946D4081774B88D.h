#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_F946D4081774B88D_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18827610)
#define CLASS_3_F946D4081774B88D_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18827660)
#define CLASS_3_F946D4081774B88D_INVOKE_OFFSET UNITYSDK_OFFSET(0x18827600)
#define CLASS_3_F946D4081774B88D__CTOR_OFFSET UNITYSDK_OFFSET(0x18827590)

inline static constexpr unsigned int Class_3_F946D4081774B88D_TypeDefinitionIndex = 50427;

class Class_3_F946D4081774B88D : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_F946D4081774B88D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F946D4081774B88D_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::Single a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_F946D4081774B88D_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_F946D4081774B88D_ENDINVOKE_OFFSET))(this, a1);
	}
};
