#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_1_2FC28EAECE1B8B36_CLASS_3_D490A575DB652D0B_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1ABEE9D0)
#define CLASS_1_2FC28EAECE1B8B36_CLASS_3_D490A575DB652D0B_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1ABEEA10)
#define CLASS_1_2FC28EAECE1B8B36_CLASS_3_D490A575DB652D0B_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ABEDA90)
#define CLASS_1_2FC28EAECE1B8B36_CLASS_3_D490A575DB652D0B__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABEE950)

inline static constexpr unsigned int Class_1_2FC28EAECE1B8B36_Class_3_D490A575DB652D0B_TypeDefinitionIndex = 33477;

class Class_1_2FC28EAECE1B8B36_Class_3_D490A575DB652D0B : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_CLASS_3_D490A575DB652D0B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_CLASS_3_D490A575DB652D0B_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_CLASS_3_D490A575DB652D0B_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_CLASS_3_D490A575DB652D0B_ENDINVOKE_OFFSET))(this, a1);
	}
};
