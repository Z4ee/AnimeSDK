#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_209DF9D4E30A4B5C.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_4_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1876E630)
#define CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_4_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1876E6A0)
#define CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_4_INVOKE_OFFSET UNITYSDK_OFFSET(0x1876E340)
#define CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1876E320)

inline static constexpr unsigned int Class_1_D01A9BE13E82E041_Class_3_9A1ADE0F4CE714BA_4_TypeDefinitionIndex = 67955;

class Class_1_D01A9BE13E82E041_Class_3_9A1ADE0F4CE714BA_4 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::Struct_2_209DF9D4E30A4B5C& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_209DF9D4E30A4B5C&))((::PBYTE)hIl2Cpp + CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_4_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Struct_2_209DF9D4E30A4B5C& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Struct_2_209DF9D4E30A4B5C&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_4_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean EndInvoke(::Struct_2_209DF9D4E30A4B5C& a1, ::System::IAsyncResult* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_209DF9D4E30A4B5C&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_D01A9BE13E82E041_CLASS_3_9A1ADE0F4CE714BA_4_ENDINVOKE_OFFSET))(this, a1, a2);
	}
};
