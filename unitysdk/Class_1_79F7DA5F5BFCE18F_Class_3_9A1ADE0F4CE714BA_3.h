#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_13.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_79F7DA5F5BFCE18F_CLASS_3_9A1ADE0F4CE714BA_3_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D5B5090)
#define CLASS_1_79F7DA5F5BFCE18F_CLASS_3_9A1ADE0F4CE714BA_3_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D5B5100)
#define CLASS_1_79F7DA5F5BFCE18F_CLASS_3_9A1ADE0F4CE714BA_3_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D5B4C70)
#define CLASS_1_79F7DA5F5BFCE18F_CLASS_3_9A1ADE0F4CE714BA_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B4C50)

inline static constexpr unsigned int Class_1_79F7DA5F5BFCE18F_Class_3_9A1ADE0F4CE714BA_3_TypeDefinitionIndex = 67295;

class Class_1_79F7DA5F5BFCE18F_Class_3_9A1ADE0F4CE714BA_3 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_79F7DA5F5BFCE18F_CLASS_3_9A1ADE0F4CE714BA_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Struct_2_4C8453486C91E3A1_13 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_4C8453486C91E3A1_13))((::PBYTE)hIl2Cpp + CLASS_1_79F7DA5F5BFCE18F_CLASS_3_9A1ADE0F4CE714BA_3_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_4C8453486C91E3A1_13 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_4C8453486C91E3A1_13, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_79F7DA5F5BFCE18F_CLASS_3_9A1ADE0F4CE714BA_3_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_79F7DA5F5BFCE18F_CLASS_3_9A1ADE0F4CE714BA_3_ENDINVOKE_OFFSET))(this, a1);
	}
};
