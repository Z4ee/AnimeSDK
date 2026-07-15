#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_13264FE803E7E6C1_CLASS_3_50D343C44D28BEFB_7_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14FB5540)
#define CLASS_1_13264FE803E7E6C1_CLASS_3_50D343C44D28BEFB_7_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14FB5570)
#define CLASS_1_13264FE803E7E6C1_CLASS_3_50D343C44D28BEFB_7_INVOKE_OFFSET UNITYSDK_OFFSET(0x14FB5530)
#define CLASS_1_13264FE803E7E6C1_CLASS_3_50D343C44D28BEFB_7__CTOR_OFFSET UNITYSDK_OFFSET(0x14FB54C0)

inline static constexpr unsigned int Class_1_13264FE803E7E6C1_Class_3_50D343C44D28BEFB_7_TypeDefinitionIndex = 66193;

class Class_1_13264FE803E7E6C1_Class_3_50D343C44D28BEFB_7 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_CLASS_3_50D343C44D28BEFB_7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_CLASS_3_50D343C44D28BEFB_7_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_CLASS_3_50D343C44D28BEFB_7_BEGININVOKE_OFFSET))(this, a1, a2);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_CLASS_3_50D343C44D28BEFB_7_ENDINVOKE_OFFSET))(this, a1);
	}
};
