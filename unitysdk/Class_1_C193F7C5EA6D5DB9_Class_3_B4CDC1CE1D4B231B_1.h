#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_8FBDD7D8E0EE0B49;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_C193F7C5EA6D5DB9_CLASS_3_B4CDC1CE1D4B231B_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1214CD40)
#define CLASS_1_C193F7C5EA6D5DB9_CLASS_3_B4CDC1CE1D4B231B_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1214CDC0)
#define CLASS_1_C193F7C5EA6D5DB9_CLASS_3_B4CDC1CE1D4B231B_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x1214C7C0)
#define CLASS_1_C193F7C5EA6D5DB9_CLASS_3_B4CDC1CE1D4B231B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1214C7A0)

inline static constexpr unsigned int Class_1_C193F7C5EA6D5DB9_Class_3_B4CDC1CE1D4B231B_1_TypeDefinitionIndex = 64968;

class Class_1_C193F7C5EA6D5DB9_Class_3_B4CDC1CE1D4B231B_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_C193F7C5EA6D5DB9_CLASS_3_B4CDC1CE1D4B231B_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_8FBDD7D8E0EE0B49* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FBDD7D8E0EE0B49*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C193F7C5EA6D5DB9_CLASS_3_B4CDC1CE1D4B231B_1_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_8FBDD7D8E0EE0B49* a1, ::System::Int32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_8FBDD7D8E0EE0B49*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C193F7C5EA6D5DB9_CLASS_3_B4CDC1CE1D4B231B_1_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_C193F7C5EA6D5DB9_CLASS_3_B4CDC1CE1D4B231B_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
