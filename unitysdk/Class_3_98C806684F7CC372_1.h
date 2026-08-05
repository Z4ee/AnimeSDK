#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_47F263CB5C51B1A3;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_98C806684F7CC372_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F5C5470)
#define CLASS_3_98C806684F7CC372_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F5C54A0)
#define CLASS_3_98C806684F7CC372_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F5C0430)
#define CLASS_3_98C806684F7CC372_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5C5450)

inline static constexpr unsigned int Class_3_98C806684F7CC372_1_TypeDefinitionIndex = 29333;

class Class_3_98C806684F7CC372_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_47F263CB5C51B1A3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_47F263CB5C51B1A3*))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_1_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_47F263CB5C51B1A3* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_47F263CB5C51B1A3*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_1_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
