#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_52A902145F5BE513.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_2_05ACEF221280D273_CLASS_3_9A1ADE0F4CE714BA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AE46B90)
#define CLASS_2_05ACEF221280D273_CLASS_3_9A1ADE0F4CE714BA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AE46C00)
#define CLASS_2_05ACEF221280D273_CLASS_3_9A1ADE0F4CE714BA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AE46850)
#define CLASS_2_05ACEF221280D273_CLASS_3_9A1ADE0F4CE714BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE46840)

inline static constexpr unsigned int Class_2_05ACEF221280D273_Class_3_9A1ADE0F4CE714BA_TypeDefinitionIndex = 42813;

class Class_2_05ACEF221280D273_Class_3_9A1ADE0F4CE714BA : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_2_05ACEF221280D273_CLASS_3_9A1ADE0F4CE714BA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::Struct_2_52A902145F5BE513& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_52A902145F5BE513&))((::PBYTE)hIl2Cpp + CLASS_2_05ACEF221280D273_CLASS_3_9A1ADE0F4CE714BA_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_52A902145F5BE513& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_52A902145F5BE513&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_05ACEF221280D273_CLASS_3_9A1ADE0F4CE714BA_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean EndInvoke(::Struct_2_52A902145F5BE513& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_52A902145F5BE513&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_2_05ACEF221280D273_CLASS_3_9A1ADE0F4CE714BA_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
