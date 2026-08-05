#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define STRUCT_2_05C2C57254FF39CD_CLASS_3_50D343C44D28BEFB_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F9BBC50)
#define STRUCT_2_05C2C57254FF39CD_CLASS_3_50D343C44D28BEFB_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F9BBC80)
#define STRUCT_2_05C2C57254FF39CD_CLASS_3_50D343C44D28BEFB_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F9BB9A0)
#define STRUCT_2_05C2C57254FF39CD_CLASS_3_50D343C44D28BEFB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9BBC30)

inline static constexpr unsigned int Struct_2_05C2C57254FF39CD_Class_3_50D343C44D28BEFB_1_TypeDefinitionIndex = 28775;

class Struct_2_05C2C57254FF39CD_Class_3_50D343C44D28BEFB_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + STRUCT_2_05C2C57254FF39CD_CLASS_3_50D343C44D28BEFB_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_05C2C57254FF39CD_CLASS_3_50D343C44D28BEFB_1_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_05C2C57254FF39CD_CLASS_3_50D343C44D28BEFB_1_BEGININVOKE_OFFSET))(this, a1, a2);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + STRUCT_2_05C2C57254FF39CD_CLASS_3_50D343C44D28BEFB_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
