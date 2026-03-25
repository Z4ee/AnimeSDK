#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_0A490681D87FEF21;
class Class_1_877AA22B04AFB81F;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_5D7F98918E016E8C_CLASS_3_C9ABD9C89B357622_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1661DDA0)
#define CLASS_1_5D7F98918E016E8C_CLASS_3_C9ABD9C89B357622_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1661DE20)
#define CLASS_1_5D7F98918E016E8C_CLASS_3_C9ABD9C89B357622_INVOKE_OFFSET UNITYSDK_OFFSET(0x1661A450)
#define CLASS_1_5D7F98918E016E8C_CLASS_3_C9ABD9C89B357622__CTOR_OFFSET UNITYSDK_OFFSET(0x16619D50)

inline static constexpr unsigned int Class_1_5D7F98918E016E8C_Class_3_C9ABD9C89B357622_TypeDefinitionIndex = 28917;

class Class_1_5D7F98918E016E8C_Class_3_C9ABD9C89B357622 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_5D7F98918E016E8C_CLASS_3_C9ABD9C89B357622__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Invoke(::Class_1_0A490681D87FEF21* a1, ::Class_1_877AA22B04AFB81F* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_0A490681D87FEF21*, ::Class_1_877AA22B04AFB81F*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5D7F98918E016E8C_CLASS_3_C9ABD9C89B357622_INVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_0A490681D87FEF21* a1, ::Class_1_877AA22B04AFB81F* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_0A490681D87FEF21*, ::Class_1_877AA22B04AFB81F*, ::System::UInt32, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5D7F98918E016E8C_CLASS_3_C9ABD9C89B357622_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Single EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_5D7F98918E016E8C_CLASS_3_C9ABD9C89B357622_ENDINVOKE_OFFSET))(this, a1);
	}
};
