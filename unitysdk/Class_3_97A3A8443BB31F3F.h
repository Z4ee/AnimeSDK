#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_0E117AC86D8E5BCA;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_97A3A8443BB31F3F_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1670FB40)
#define CLASS_3_97A3A8443BB31F3F_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1670FBB0)
#define CLASS_3_97A3A8443BB31F3F_INVOKE_OFFSET UNITYSDK_OFFSET(0x1670F7B0)
#define CLASS_3_97A3A8443BB31F3F__CTOR_OFFSET UNITYSDK_OFFSET(0x1670F790)

inline static constexpr unsigned int Class_3_97A3A8443BB31F3F_TypeDefinitionIndex = 28380;

class Class_3_97A3A8443BB31F3F : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_97A3A8443BB31F3F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::UInt32 a1, ::Class_1_0E117AC86D8E5BCA* a2, ::Class_1_0E117AC86D8E5BCA* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_0E117AC86D8E5BCA*, ::Class_1_0E117AC86D8E5BCA*))((::PBYTE)hIl2Cpp + CLASS_3_97A3A8443BB31F3F_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::Class_1_0E117AC86D8E5BCA* a2, ::Class_1_0E117AC86D8E5BCA* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::Class_1_0E117AC86D8E5BCA*, ::Class_1_0E117AC86D8E5BCA*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_97A3A8443BB31F3F_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_97A3A8443BB31F3F_ENDINVOKE_OFFSET))(this, a1);
	}
};
