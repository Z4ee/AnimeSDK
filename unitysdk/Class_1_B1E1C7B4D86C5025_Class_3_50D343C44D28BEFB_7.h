#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_B1E1C7B4D86C5025_CLASS_3_50D343C44D28BEFB_7_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xC79F490)
#define CLASS_1_B1E1C7B4D86C5025_CLASS_3_50D343C44D28BEFB_7_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xC79F4C0)
#define CLASS_1_B1E1C7B4D86C5025_CLASS_3_50D343C44D28BEFB_7_INVOKE_OFFSET UNITYSDK_OFFSET(0xC79F480)
#define CLASS_1_B1E1C7B4D86C5025_CLASS_3_50D343C44D28BEFB_7__CTOR_OFFSET UNITYSDK_OFFSET(0xC79F410)

inline static constexpr unsigned int Class_1_B1E1C7B4D86C5025_Class_3_50D343C44D28BEFB_7_TypeDefinitionIndex = 69235;

class Class_1_B1E1C7B4D86C5025_Class_3_50D343C44D28BEFB_7 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_CLASS_3_50D343C44D28BEFB_7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_CLASS_3_50D343C44D28BEFB_7_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_CLASS_3_50D343C44D28BEFB_7_BEGININVOKE_OFFSET))(this, a1, a2);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_CLASS_3_50D343C44D28BEFB_7_ENDINVOKE_OFFSET))(this, a1);
	}
};
