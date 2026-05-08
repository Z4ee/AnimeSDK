#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6659645E143D6266.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_2_B961FCE9076F0B20_CLASS_3_9A1ADE0F4CE714BA_4_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10500460)
#define CLASS_2_B961FCE9076F0B20_CLASS_3_9A1ADE0F4CE714BA_4_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x105004D0)
#define CLASS_2_B961FCE9076F0B20_CLASS_3_9A1ADE0F4CE714BA_4_INVOKE_OFFSET UNITYSDK_OFFSET(0x10500120)
#define CLASS_2_B961FCE9076F0B20_CLASS_3_9A1ADE0F4CE714BA_4__CTOR_OFFSET UNITYSDK_OFFSET(0x10500110)

inline static constexpr unsigned int Class_2_B961FCE9076F0B20_Class_3_9A1ADE0F4CE714BA_4_TypeDefinitionIndex = 63791;

class Class_2_B961FCE9076F0B20_Class_3_9A1ADE0F4CE714BA_4 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_2_B961FCE9076F0B20_CLASS_3_9A1ADE0F4CE714BA_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Struct_2_6659645E143D6266& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6659645E143D6266&))((::PBYTE)hIl2Cpp + CLASS_2_B961FCE9076F0B20_CLASS_3_9A1ADE0F4CE714BA_4_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_6659645E143D6266& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_6659645E143D6266&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B961FCE9076F0B20_CLASS_3_9A1ADE0F4CE714BA_4_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::Struct_2_6659645E143D6266& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6659645E143D6266&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_2_B961FCE9076F0B20_CLASS_3_9A1ADE0F4CE714BA_4_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
