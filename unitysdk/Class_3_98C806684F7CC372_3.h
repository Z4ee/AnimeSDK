#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_DD584E66F5D339D3;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_98C806684F7CC372_3_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17CB7F80)
#define CLASS_3_98C806684F7CC372_3_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17CB7FB0)
#define CLASS_3_98C806684F7CC372_3_INVOKE_OFFSET UNITYSDK_OFFSET(0x17CB7A30)
#define CLASS_3_98C806684F7CC372_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17CB7A10)

inline static constexpr unsigned int Class_3_98C806684F7CC372_3_TypeDefinitionIndex = 34026;

class Class_3_98C806684F7CC372_3 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_DD584E66F5D339D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD584E66F5D339D3*))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_3_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_DD584E66F5D339D3* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_DD584E66F5D339D3*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_3_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_3_ENDINVOKE_OFFSET))(this, a1);
	}
};
