#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_B08665FEB7112467_1_CLASS_3_50D343C44D28BEFB_10_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11CF56C0)
#define CLASS_1_B08665FEB7112467_1_CLASS_3_50D343C44D28BEFB_10_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11CF56F0)
#define CLASS_1_B08665FEB7112467_1_CLASS_3_50D343C44D28BEFB_10_INVOKE_OFFSET UNITYSDK_OFFSET(0x11CF5420)
#define CLASS_1_B08665FEB7112467_1_CLASS_3_50D343C44D28BEFB_10__CTOR_OFFSET UNITYSDK_OFFSET(0x11CF5400)

inline static constexpr unsigned int Class_1_B08665FEB7112467_1_Class_3_50D343C44D28BEFB_10_TypeDefinitionIndex = 84433;

class Class_1_B08665FEB7112467_1_Class_3_50D343C44D28BEFB_10 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_1_CLASS_3_50D343C44D28BEFB_10__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Invoke()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_1_CLASS_3_50D343C44D28BEFB_10_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_1_CLASS_3_50D343C44D28BEFB_10_BEGININVOKE_OFFSET))(this, a1, a2);
	}

	::System::Int32 EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_B08665FEB7112467_1_CLASS_3_50D343C44D28BEFB_10_ENDINVOKE_OFFSET))(this, a1);
	}
};
