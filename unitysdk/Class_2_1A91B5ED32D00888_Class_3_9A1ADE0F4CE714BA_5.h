#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6659645E143D6266.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_2_1A91B5ED32D00888_CLASS_3_9A1ADE0F4CE714BA_5_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x129F5CF0)
#define CLASS_2_1A91B5ED32D00888_CLASS_3_9A1ADE0F4CE714BA_5_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x129F5D60)
#define CLASS_2_1A91B5ED32D00888_CLASS_3_9A1ADE0F4CE714BA_5_INVOKE_OFFSET UNITYSDK_OFFSET(0x129F5A00)
#define CLASS_2_1A91B5ED32D00888_CLASS_3_9A1ADE0F4CE714BA_5__CTOR_OFFSET UNITYSDK_OFFSET(0x129F59E0)

inline static constexpr unsigned int Class_2_1A91B5ED32D00888_Class_3_9A1ADE0F4CE714BA_5_TypeDefinitionIndex = 73628;

class Class_2_1A91B5ED32D00888_Class_3_9A1ADE0F4CE714BA_5 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_2_1A91B5ED32D00888_CLASS_3_9A1ADE0F4CE714BA_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Struct_2_6659645E143D6266& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6659645E143D6266&))((::PBYTE)hIl2Cpp + CLASS_2_1A91B5ED32D00888_CLASS_3_9A1ADE0F4CE714BA_5_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_6659645E143D6266& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_6659645E143D6266&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1A91B5ED32D00888_CLASS_3_9A1ADE0F4CE714BA_5_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::Struct_2_6659645E143D6266& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6659645E143D6266&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_2_1A91B5ED32D00888_CLASS_3_9A1ADE0F4CE714BA_5_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
