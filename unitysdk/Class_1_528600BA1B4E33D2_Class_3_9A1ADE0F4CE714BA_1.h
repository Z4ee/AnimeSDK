#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_3.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_528600BA1B4E33D2_CLASS_3_9A1ADE0F4CE714BA_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x140AE340)
#define CLASS_1_528600BA1B4E33D2_CLASS_3_9A1ADE0F4CE714BA_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x140AE3B0)
#define CLASS_1_528600BA1B4E33D2_CLASS_3_9A1ADE0F4CE714BA_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x140ADF40)
#define CLASS_1_528600BA1B4E33D2_CLASS_3_9A1ADE0F4CE714BA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x140ADF30)

inline static constexpr unsigned int Class_1_528600BA1B4E33D2_Class_3_9A1ADE0F4CE714BA_1_TypeDefinitionIndex = 52406;

class Class_1_528600BA1B4E33D2_Class_3_9A1ADE0F4CE714BA_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_528600BA1B4E33D2_CLASS_3_9A1ADE0F4CE714BA_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Struct_2_4C8453486C91E3A1_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_4C8453486C91E3A1_3))((::PBYTE)hIl2Cpp + CLASS_1_528600BA1B4E33D2_CLASS_3_9A1ADE0F4CE714BA_1_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_4C8453486C91E3A1_3 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_4C8453486C91E3A1_3, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_528600BA1B4E33D2_CLASS_3_9A1ADE0F4CE714BA_1_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_528600BA1B4E33D2_CLASS_3_9A1ADE0F4CE714BA_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
