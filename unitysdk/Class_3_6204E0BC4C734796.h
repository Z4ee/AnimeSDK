#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_70697F531F566942;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_6204E0BC4C734796_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17C70760)
#define CLASS_3_6204E0BC4C734796_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17C707C0)
#define CLASS_3_6204E0BC4C734796_INVOKE_OFFSET UNITYSDK_OFFSET(0x17C70410)
#define CLASS_3_6204E0BC4C734796__CTOR_OFFSET UNITYSDK_OFFSET(0x17C703F0)

inline static constexpr unsigned int Class_3_6204E0BC4C734796_TypeDefinitionIndex = 34033;

class Class_3_6204E0BC4C734796 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_6204E0BC4C734796__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::UInt32 a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_3_6204E0BC4C734796_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::Class_1_70697F531F566942* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::Class_1_70697F531F566942*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_6204E0BC4C734796_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_6204E0BC4C734796_ENDINVOKE_OFFSET))(this, a1);
	}
};
