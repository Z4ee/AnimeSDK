#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9DAF9339360A18FD.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_91F5B5FCD8262EE8_CLASS_3_9A1ADE0F4CE714BA_7_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19F62170)
#define CLASS_1_91F5B5FCD8262EE8_CLASS_3_9A1ADE0F4CE714BA_7_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19F621E0)
#define CLASS_1_91F5B5FCD8262EE8_CLASS_3_9A1ADE0F4CE714BA_7_INVOKE_OFFSET UNITYSDK_OFFSET(0x19F61E80)
#define CLASS_1_91F5B5FCD8262EE8_CLASS_3_9A1ADE0F4CE714BA_7__CTOR_OFFSET UNITYSDK_OFFSET(0x19F61E60)

inline static constexpr unsigned int Class_1_91F5B5FCD8262EE8_Class_3_9A1ADE0F4CE714BA_7_TypeDefinitionIndex = 76577;

class Class_1_91F5B5FCD8262EE8_Class_3_9A1ADE0F4CE714BA_7 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_91F5B5FCD8262EE8_CLASS_3_9A1ADE0F4CE714BA_7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Invoke(::Struct_2_9DAF9339360A18FD& a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_9DAF9339360A18FD&))((::PBYTE)hIl2Cpp + CLASS_1_91F5B5FCD8262EE8_CLASS_3_9A1ADE0F4CE714BA_7_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_9DAF9339360A18FD& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_9DAF9339360A18FD&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_91F5B5FCD8262EE8_CLASS_3_9A1ADE0F4CE714BA_7_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 EndInvoke(::Struct_2_9DAF9339360A18FD& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_9DAF9339360A18FD&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_91F5B5FCD8262EE8_CLASS_3_9A1ADE0F4CE714BA_7_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
