#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_1264;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_5175A8A362457A24_CLASS_3_50D343C44D28BEFB_12_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xC09EDC0)
#define CLASS_1_5175A8A362457A24_CLASS_3_50D343C44D28BEFB_12_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xC09EDF0)
#define CLASS_1_5175A8A362457A24_CLASS_3_50D343C44D28BEFB_12_INVOKE_OFFSET UNITYSDK_OFFSET(0xC09E8F0)
#define CLASS_1_5175A8A362457A24_CLASS_3_50D343C44D28BEFB_12__CTOR_OFFSET UNITYSDK_OFFSET(0xC09ED50)

inline static constexpr unsigned int Class_1_5175A8A362457A24_Class_3_50D343C44D28BEFB_12_TypeDefinitionIndex = 76896;

class Class_1_5175A8A362457A24_Class_3_50D343C44D28BEFB_12 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_5175A8A362457A24_CLASS_3_50D343C44D28BEFB_12__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_1264* Invoke()
	{
		return ((::Class_0_16E4307DCC419505_1264*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5175A8A362457A24_CLASS_3_50D343C44D28BEFB_12_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5175A8A362457A24_CLASS_3_50D343C44D28BEFB_12_BEGININVOKE_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_1264* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_0_16E4307DCC419505_1264*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_5175A8A362457A24_CLASS_3_50D343C44D28BEFB_12_ENDINVOKE_OFFSET))(this, a1);
	}
};
