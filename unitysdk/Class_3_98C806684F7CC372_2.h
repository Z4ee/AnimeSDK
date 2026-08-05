#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_822A6516CA86F5BA;
class Class_2_DE520563CFD9F77A;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_98C806684F7CC372_2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F5C7600)
#define CLASS_3_98C806684F7CC372_2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F5C7630)
#define CLASS_3_98C806684F7CC372_2_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F5C70E0)
#define CLASS_3_98C806684F7CC372_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5C70C0)

inline static constexpr unsigned int Class_3_98C806684F7CC372_2_TypeDefinitionIndex = 29339;

class Class_3_98C806684F7CC372_2 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_2__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_2_DE520563CFD9F77A* Invoke(::Class_1_822A6516CA86F5BA* a1)
	{
		return ((::Class_2_DE520563CFD9F77A*(*)(::PVOID, ::Class_1_822A6516CA86F5BA*))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_2_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_822A6516CA86F5BA* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_822A6516CA86F5BA*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_2_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_DE520563CFD9F77A* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_2_DE520563CFD9F77A*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_2_ENDINVOKE_OFFSET))(this, a1);
	}
};
