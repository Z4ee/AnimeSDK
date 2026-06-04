#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_9D40F9D90905A4A4;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_976172BE0949FE85_CLASS_3_487EE6B302AC50B7_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AC1D3F0)
#define CLASS_1_976172BE0949FE85_CLASS_3_487EE6B302AC50B7_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AC1D420)
#define CLASS_1_976172BE0949FE85_CLASS_3_487EE6B302AC50B7_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AC1CDD0)
#define CLASS_1_976172BE0949FE85_CLASS_3_487EE6B302AC50B7__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC1D300)

inline static constexpr unsigned int Class_1_976172BE0949FE85_Class_3_487EE6B302AC50B7_TypeDefinitionIndex = 40569;

class Class_1_976172BE0949FE85_Class_3_487EE6B302AC50B7 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_976172BE0949FE85_CLASS_3_487EE6B302AC50B7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_9D40F9D90905A4A4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9D40F9D90905A4A4*))((::PBYTE)hIl2Cpp + CLASS_1_976172BE0949FE85_CLASS_3_487EE6B302AC50B7_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_9D40F9D90905A4A4* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_9D40F9D90905A4A4*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_976172BE0949FE85_CLASS_3_487EE6B302AC50B7_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_976172BE0949FE85_CLASS_3_487EE6B302AC50B7_ENDINVOKE_OFFSET))(this, a1);
	}
};
