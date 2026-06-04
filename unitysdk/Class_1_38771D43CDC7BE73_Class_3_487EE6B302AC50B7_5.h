#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_45BB92167AED63A0_64;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_1_38771D43CDC7BE73_CLASS_3_487EE6B302AC50B7_5_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA3E3860)
#define CLASS_1_38771D43CDC7BE73_CLASS_3_487EE6B302AC50B7_5_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA3E3890)
#define CLASS_1_38771D43CDC7BE73_CLASS_3_487EE6B302AC50B7_5_INVOKE_OFFSET UNITYSDK_OFFSET(0xA3E33F0)
#define CLASS_1_38771D43CDC7BE73_CLASS_3_487EE6B302AC50B7_5__CTOR_OFFSET UNITYSDK_OFFSET(0xA3E37F0)

inline static constexpr unsigned int Class_1_38771D43CDC7BE73_Class_3_487EE6B302AC50B7_5_TypeDefinitionIndex = 68319;

class Class_1_38771D43CDC7BE73_Class_3_487EE6B302AC50B7_5 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_38771D43CDC7BE73_CLASS_3_487EE6B302AC50B7_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Invoke(::Class_1_45BB92167AED63A0_64* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_45BB92167AED63A0_64*))((::PBYTE)hIl2Cpp + CLASS_1_38771D43CDC7BE73_CLASS_3_487EE6B302AC50B7_5_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_45BB92167AED63A0_64* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_45BB92167AED63A0_64*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_38771D43CDC7BE73_CLASS_3_487EE6B302AC50B7_5_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::String* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_38771D43CDC7BE73_CLASS_3_487EE6B302AC50B7_5_ENDINVOKE_OFFSET))(this, a1);
	}
};
