#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_7246F590C915F2B2;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_98C806684F7CC372_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D16E0A0)
#define CLASS_3_98C806684F7CC372_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D16E0D0)
#define CLASS_3_98C806684F7CC372_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D16DBA0)
#define CLASS_3_98C806684F7CC372_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D16DB80)

inline static constexpr unsigned int Class_3_98C806684F7CC372_1_TypeDefinitionIndex = 28669;

class Class_3_98C806684F7CC372_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_7246F590C915F2B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7246F590C915F2B2*))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_1_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_7246F590C915F2B2* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_7246F590C915F2B2*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_1_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
