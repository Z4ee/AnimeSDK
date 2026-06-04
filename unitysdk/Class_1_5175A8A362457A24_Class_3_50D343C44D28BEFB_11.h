#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_1165;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_5175A8A362457A24_CLASS_3_50D343C44D28BEFB_11_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xACC60B0)
#define CLASS_1_5175A8A362457A24_CLASS_3_50D343C44D28BEFB_11_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xACC60E0)
#define CLASS_1_5175A8A362457A24_CLASS_3_50D343C44D28BEFB_11_INVOKE_OFFSET UNITYSDK_OFFSET(0xACC5BE0)
#define CLASS_1_5175A8A362457A24_CLASS_3_50D343C44D28BEFB_11__CTOR_OFFSET UNITYSDK_OFFSET(0xACC6040)

inline static constexpr unsigned int Class_1_5175A8A362457A24_Class_3_50D343C44D28BEFB_11_TypeDefinitionIndex = 71891;

class Class_1_5175A8A362457A24_Class_3_50D343C44D28BEFB_11 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_5175A8A362457A24_CLASS_3_50D343C44D28BEFB_11__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_1165* Invoke()
	{
		return ((::Class_0_16E4307DCC419505_1165*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5175A8A362457A24_CLASS_3_50D343C44D28BEFB_11_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5175A8A362457A24_CLASS_3_50D343C44D28BEFB_11_BEGININVOKE_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_1165* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_0_16E4307DCC419505_1165*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_5175A8A362457A24_CLASS_3_50D343C44D28BEFB_11_ENDINVOKE_OFFSET))(this, a1);
	}
};
