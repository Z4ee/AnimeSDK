#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_2_E3625122CE82016E;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_3FF51CE8B91EFA1B_CLASS_3_50D343C44D28BEFB_9_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18FE7D20)
#define CLASS_1_3FF51CE8B91EFA1B_CLASS_3_50D343C44D28BEFB_9_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18FE7D50)
#define CLASS_1_3FF51CE8B91EFA1B_CLASS_3_50D343C44D28BEFB_9_INVOKE_OFFSET UNITYSDK_OFFSET(0x18FE7CA0)
#define CLASS_1_3FF51CE8B91EFA1B_CLASS_3_50D343C44D28BEFB_9__CTOR_OFFSET UNITYSDK_OFFSET(0x18FE7CB0)

inline static constexpr unsigned int Class_1_3FF51CE8B91EFA1B_Class_3_50D343C44D28BEFB_9_TypeDefinitionIndex = 72271;

class Class_1_3FF51CE8B91EFA1B_Class_3_50D343C44D28BEFB_9 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_3FF51CE8B91EFA1B_CLASS_3_50D343C44D28BEFB_9__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_2_E3625122CE82016E* Invoke()
	{
		return ((::Class_2_E3625122CE82016E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FF51CE8B91EFA1B_CLASS_3_50D343C44D28BEFB_9_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3FF51CE8B91EFA1B_CLASS_3_50D343C44D28BEFB_9_BEGININVOKE_OFFSET))(this, a1, a2);
	}

	::Class_2_E3625122CE82016E* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_2_E3625122CE82016E*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_3FF51CE8B91EFA1B_CLASS_3_50D343C44D28BEFB_9_ENDINVOKE_OFFSET))(this, a1);
	}
};
