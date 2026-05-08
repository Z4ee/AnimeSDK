#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_98EB31C24C284B75_Class_3_50D343C44D28BEFB_5;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_98EB31C24C284B75_CLASS_3_1F26C21D76122A37_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x128A0F20)
#define CLASS_1_98EB31C24C284B75_CLASS_3_1F26C21D76122A37_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x128A0F60)
#define CLASS_1_98EB31C24C284B75_CLASS_3_1F26C21D76122A37_INVOKE_OFFSET UNITYSDK_OFFSET(0x128A09A0)
#define CLASS_1_98EB31C24C284B75_CLASS_3_1F26C21D76122A37__CTOR_OFFSET UNITYSDK_OFFSET(0x128A0990)

inline static constexpr unsigned int Class_1_98EB31C24C284B75_Class_3_1F26C21D76122A37_TypeDefinitionIndex = 57464;

class Class_1_98EB31C24C284B75_Class_3_1F26C21D76122A37 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_98EB31C24C284B75_CLASS_3_1F26C21D76122A37__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::UnityEngine::GameObject* a1, ::Class_1_98EB31C24C284B75_Class_3_50D343C44D28BEFB_5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_1_98EB31C24C284B75_Class_3_50D343C44D28BEFB_5*))((::PBYTE)hIl2Cpp + CLASS_1_98EB31C24C284B75_CLASS_3_1F26C21D76122A37_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* a1, ::Class_1_98EB31C24C284B75_Class_3_50D343C44D28BEFB_5* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_1_98EB31C24C284B75_Class_3_50D343C44D28BEFB_5*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_98EB31C24C284B75_CLASS_3_1F26C21D76122A37_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_98EB31C24C284B75_CLASS_3_1F26C21D76122A37_ENDINVOKE_OFFSET))(this, a1);
	}
};
