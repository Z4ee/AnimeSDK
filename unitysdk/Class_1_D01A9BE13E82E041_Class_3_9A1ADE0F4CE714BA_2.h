#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_209DF9D4E30A4B5C.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xD335400)
#define CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xD335470)
#define CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_2_INVOKE_OFFSET UNITYSDK_OFFSET(0xD3350C0)
#define CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_2__CTOR_OFFSET UNITYSDK_OFFSET(0xD3350A0)

inline static constexpr unsigned int Class_1_D01A9BE13E82E041_Class_3_9A1ADE0F4CE714BA_2_TypeDefinitionIndex = 56549;

class Class_1_D01A9BE13E82E041_Class_3_9A1ADE0F4CE714BA_2 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::Struct_2_209DF9D4E30A4B5C& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_209DF9D4E30A4B5C&))((::PBYTE)hIl2Cpp + CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_2_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_209DF9D4E30A4B5C& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_209DF9D4E30A4B5C&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_2_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean EndInvoke(::Struct_2_209DF9D4E30A4B5C& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_209DF9D4E30A4B5C&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_2_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
