#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class Type; }

#define CLASS_1_C8FAD95AE7A685F4_CLASS_3_21CB1F101B34DDC1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x190DA960)
#define CLASS_1_C8FAD95AE7A685F4_CLASS_3_21CB1F101B34DDC1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x190DA9A0)
#define CLASS_1_C8FAD95AE7A685F4_CLASS_3_21CB1F101B34DDC1_INVOKE_OFFSET UNITYSDK_OFFSET(0x190DA7F0)
#define CLASS_1_C8FAD95AE7A685F4_CLASS_3_21CB1F101B34DDC1__CTOR_OFFSET UNITYSDK_OFFSET(0x190DA870)

inline static constexpr unsigned int Class_1_C8FAD95AE7A685F4_Class_3_21CB1F101B34DDC1_TypeDefinitionIndex = 12617;

class Class_1_C8FAD95AE7A685F4_Class_3_21CB1F101B34DDC1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_C8FAD95AE7A685F4_CLASS_3_21CB1F101B34DDC1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Type* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C8FAD95AE7A685F4_CLASS_3_21CB1F101B34DDC1_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::Type* a1, ::System::Object* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Type*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C8FAD95AE7A685F4_CLASS_3_21CB1F101B34DDC1_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_C8FAD95AE7A685F4_CLASS_3_21CB1F101B34DDC1_ENDINVOKE_OFFSET))(this, a1);
	}
};
