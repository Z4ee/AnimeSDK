#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_43BD383C98B4C0C5_109_CLASS_3_50D343C44D28BEFB_5_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1143F2B0)
#define CLASS_1_43BD383C98B4C0C5_109_CLASS_3_50D343C44D28BEFB_5_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1143F2E0)
#define CLASS_1_43BD383C98B4C0C5_109_CLASS_3_50D343C44D28BEFB_5_INVOKE_OFFSET UNITYSDK_OFFSET(0x1143F000)
#define CLASS_1_43BD383C98B4C0C5_109_CLASS_3_50D343C44D28BEFB_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1143EFE0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_109_Class_3_50D343C44D28BEFB_5_TypeDefinitionIndex = 49279;

class Class_1_43BD383C98B4C0C5_109_Class_3_50D343C44D28BEFB_5 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_109_CLASS_3_50D343C44D28BEFB_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_109_CLASS_3_50D343C44D28BEFB_5_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_109_CLASS_3_50D343C44D28BEFB_5_BEGININVOKE_OFFSET))(this, a1, a2);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_109_CLASS_3_50D343C44D28BEFB_5_ENDINVOKE_OFFSET))(this, a1);
	}
};
