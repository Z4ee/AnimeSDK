#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_0E117AC86D8E5BCA;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_6204E0BC4C734796_2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x189CC390)
#define CLASS_3_6204E0BC4C734796_2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x189CC3F0)
#define CLASS_3_6204E0BC4C734796_2_INVOKE_OFFSET UNITYSDK_OFFSET(0x189CC380)
#define CLASS_3_6204E0BC4C734796_2__CTOR_OFFSET UNITYSDK_OFFSET(0x189CC310)

inline static constexpr unsigned int Class_3_6204E0BC4C734796_2_TypeDefinitionIndex = 34320;

class Class_3_6204E0BC4C734796_2 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_6204E0BC4C734796_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::UInt32 a1, ::Class_1_0E117AC86D8E5BCA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_0E117AC86D8E5BCA*))((::PBYTE)hIl2Cpp + CLASS_3_6204E0BC4C734796_2_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::Class_1_0E117AC86D8E5BCA* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::Class_1_0E117AC86D8E5BCA*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_6204E0BC4C734796_2_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_6204E0BC4C734796_2_ENDINVOKE_OFFSET))(this, a1);
	}
};
