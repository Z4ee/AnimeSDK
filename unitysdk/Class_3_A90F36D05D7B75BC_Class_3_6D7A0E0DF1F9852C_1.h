#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/Struct_2_E33A8767CD3B76C6.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_6346845EF620DF22;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_A90F36D05D7B75BC_CLASS_3_6D7A0E0DF1F9852C_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10DC9CB0)
#define CLASS_3_A90F36D05D7B75BC_CLASS_3_6D7A0E0DF1F9852C_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10DC9D50)
#define CLASS_3_A90F36D05D7B75BC_CLASS_3_6D7A0E0DF1F9852C_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x10DC98D0)
#define CLASS_3_A90F36D05D7B75BC_CLASS_3_6D7A0E0DF1F9852C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10DC98C0)

inline static constexpr unsigned int Class_3_A90F36D05D7B75BC_Class_3_6D7A0E0DF1F9852C_1_TypeDefinitionIndex = 77836;

class Class_3_A90F36D05D7B75BC_Class_3_6D7A0E0DF1F9852C_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_A90F36D05D7B75BC_CLASS_3_6D7A0E0DF1F9852C_1__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_E33A8767CD3B76C6 Invoke(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_E147DFD2A4EE8B0B& a2, ::Class_1_6346845EF620DF22* a3)
	{
		return ((::Struct_2_E33A8767CD3B76C6(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_E147DFD2A4EE8B0B&, ::Class_1_6346845EF620DF22*))((::PBYTE)hIl2Cpp + CLASS_3_A90F36D05D7B75BC_CLASS_3_6D7A0E0DF1F9852C_1_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_E147DFD2A4EE8B0B& a2, ::Class_1_6346845EF620DF22* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_E147DFD2A4EE8B0B&, ::Class_1_6346845EF620DF22*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_A90F36D05D7B75BC_CLASS_3_6D7A0E0DF1F9852C_1_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Struct_2_E33A8767CD3B76C6 EndInvoke(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_E147DFD2A4EE8B0B& a2, ::System::IAsyncResult* a3)
	{
		return ((::Struct_2_E33A8767CD3B76C6(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_E147DFD2A4EE8B0B&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_A90F36D05D7B75BC_CLASS_3_6D7A0E0DF1F9852C_1_ENDINVOKE_OFFSET))(this, a1, a2, a3);
	}
};
