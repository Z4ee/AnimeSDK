#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9DAF9339360A18FD.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_91F5B5FCD8262EE8_CLASS_3_9A1ADE0F4CE714BA_2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xE8F2EF0)
#define CLASS_1_91F5B5FCD8262EE8_CLASS_3_9A1ADE0F4CE714BA_2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xE8F2F60)
#define CLASS_1_91F5B5FCD8262EE8_CLASS_3_9A1ADE0F4CE714BA_2_INVOKE_OFFSET UNITYSDK_OFFSET(0xE8F2BB0)
#define CLASS_1_91F5B5FCD8262EE8_CLASS_3_9A1ADE0F4CE714BA_2__CTOR_OFFSET UNITYSDK_OFFSET(0xE8F2BA0)

inline static constexpr unsigned int Class_1_91F5B5FCD8262EE8_Class_3_9A1ADE0F4CE714BA_2_TypeDefinitionIndex = 53772;

class Class_1_91F5B5FCD8262EE8_Class_3_9A1ADE0F4CE714BA_2 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_91F5B5FCD8262EE8_CLASS_3_9A1ADE0F4CE714BA_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Invoke(::Struct_2_9DAF9339360A18FD& a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_9DAF9339360A18FD&))((::PBYTE)hIl2Cpp + CLASS_1_91F5B5FCD8262EE8_CLASS_3_9A1ADE0F4CE714BA_2_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_9DAF9339360A18FD& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_9DAF9339360A18FD&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_91F5B5FCD8262EE8_CLASS_3_9A1ADE0F4CE714BA_2_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 EndInvoke(::Struct_2_9DAF9339360A18FD& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_9DAF9339360A18FD&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_91F5B5FCD8262EE8_CLASS_3_9A1ADE0F4CE714BA_2_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
