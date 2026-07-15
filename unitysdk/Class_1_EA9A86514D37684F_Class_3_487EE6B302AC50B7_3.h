#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_943319D103CADBC3;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_EA9A86514D37684F_CLASS_3_487EE6B302AC50B7_3_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x162E0F90)
#define CLASS_1_EA9A86514D37684F_CLASS_3_487EE6B302AC50B7_3_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x162E0FC0)
#define CLASS_1_EA9A86514D37684F_CLASS_3_487EE6B302AC50B7_3_INVOKE_OFFSET UNITYSDK_OFFSET(0x162DF2B0)
#define CLASS_1_EA9A86514D37684F_CLASS_3_487EE6B302AC50B7_3__CTOR_OFFSET UNITYSDK_OFFSET(0x162E0F20)

inline static constexpr unsigned int Class_1_EA9A86514D37684F_Class_3_487EE6B302AC50B7_3_TypeDefinitionIndex = 61100;

class Class_1_EA9A86514D37684F_Class_3_487EE6B302AC50B7_3 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_EA9A86514D37684F_CLASS_3_487EE6B302AC50B7_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Object* Invoke(::Class_1_943319D103CADBC3* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_943319D103CADBC3*))((::PBYTE)hIl2Cpp + CLASS_1_EA9A86514D37684F_CLASS_3_487EE6B302AC50B7_3_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_943319D103CADBC3* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_943319D103CADBC3*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EA9A86514D37684F_CLASS_3_487EE6B302AC50B7_3_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Object* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_EA9A86514D37684F_CLASS_3_487EE6B302AC50B7_3_ENDINVOKE_OFFSET))(this, a1);
	}
};
