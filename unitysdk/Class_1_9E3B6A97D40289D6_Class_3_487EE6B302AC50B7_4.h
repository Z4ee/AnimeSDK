#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_142F37181E3E9CC1;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_9E3B6A97D40289D6_CLASS_3_487EE6B302AC50B7_4_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xCD1A590)
#define CLASS_1_9E3B6A97D40289D6_CLASS_3_487EE6B302AC50B7_4_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xCD1A5C0)
#define CLASS_1_9E3B6A97D40289D6_CLASS_3_487EE6B302AC50B7_4_INVOKE_OFFSET UNITYSDK_OFFSET(0xCD19930)
#define CLASS_1_9E3B6A97D40289D6_CLASS_3_487EE6B302AC50B7_4__CTOR_OFFSET UNITYSDK_OFFSET(0xCD1A570)

inline static constexpr unsigned int Class_1_9E3B6A97D40289D6_Class_3_487EE6B302AC50B7_4_TypeDefinitionIndex = 63867;

class Class_1_9E3B6A97D40289D6_Class_3_487EE6B302AC50B7_4 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_9E3B6A97D40289D6_CLASS_3_487EE6B302AC50B7_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_142F37181E3E9CC1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_142F37181E3E9CC1*))((::PBYTE)hIl2Cpp + CLASS_1_9E3B6A97D40289D6_CLASS_3_487EE6B302AC50B7_4_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_142F37181E3E9CC1* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_142F37181E3E9CC1*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9E3B6A97D40289D6_CLASS_3_487EE6B302AC50B7_4_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_9E3B6A97D40289D6_CLASS_3_487EE6B302AC50B7_4_ENDINVOKE_OFFSET))(this, a1);
	}
};
