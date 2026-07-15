#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_8E504B59949E2BBD;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_98C806684F7CC372_10_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14A977E0)
#define CLASS_3_98C806684F7CC372_10_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14A97810)
#define CLASS_3_98C806684F7CC372_10_INVOKE_OFFSET UNITYSDK_OFFSET(0x14A977D0)
#define CLASS_3_98C806684F7CC372_10__CTOR_OFFSET UNITYSDK_OFFSET(0x14A976E0)

inline static constexpr unsigned int Class_3_98C806684F7CC372_10_TypeDefinitionIndex = 34714;

class Class_3_98C806684F7CC372_10 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_10__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_8E504B59949E2BBD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8E504B59949E2BBD*))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_10_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_8E504B59949E2BBD* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_8E504B59949E2BBD*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_10_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_98C806684F7CC372_10_ENDINVOKE_OFFSET))(this, a1);
	}
};
