#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_209DF9D4E30A4B5C.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_5_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11264300)
#define CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_5_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11264370)
#define CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_5_INVOKE_OFFSET UNITYSDK_OFFSET(0x11263FC0)
#define CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_5__CTOR_OFFSET UNITYSDK_OFFSET(0x11263FB0)

inline static constexpr unsigned int Class_1_D01A9BE13E82E041_Class_3_9A1ADE0F4CE714BA_5_TypeDefinitionIndex = 74542;

class Class_1_D01A9BE13E82E041_Class_3_9A1ADE0F4CE714BA_5 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::Struct_2_209DF9D4E30A4B5C& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_209DF9D4E30A4B5C&))((::PBYTE)hIl2Cpp + CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_5_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_209DF9D4E30A4B5C& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_209DF9D4E30A4B5C&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_5_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean EndInvoke(::Struct_2_209DF9D4E30A4B5C& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_209DF9D4E30A4B5C&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_5_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
