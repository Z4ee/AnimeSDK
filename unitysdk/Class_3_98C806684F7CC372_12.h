#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_DA32E543F3E152DD;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_98C806684F7CC372_12_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18AF0DF0)
#define CLASS_3_98C806684F7CC372_12_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18AF0E20)
#define CLASS_3_98C806684F7CC372_12_INVOKE_OFFSET UNITYSDK_OFFSET(0x18AF0DE0)
#define CLASS_3_98C806684F7CC372_12__CTOR_OFFSET UNITYSDK_OFFSET(0x18AF0CF0)

inline static constexpr unsigned int Class_3_98C806684F7CC372_12_TypeDefinitionIndex = 51749;

class Class_3_98C806684F7CC372_12 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_12__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::Class_1_DA32E543F3E152DD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DA32E543F3E152DD*))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_12_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_DA32E543F3E152DD* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_DA32E543F3E152DD*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_12_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_12_ENDINVOKE_OFFSET))(this, a1);
	}
};
