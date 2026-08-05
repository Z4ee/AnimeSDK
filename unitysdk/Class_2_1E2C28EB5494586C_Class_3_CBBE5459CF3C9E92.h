#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B196590B3E289741.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_1E2C28EB5494586C_CLASS_3_CBBE5459CF3C9E92_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15905C00)
#define CLASS_2_1E2C28EB5494586C_CLASS_3_CBBE5459CF3C9E92_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15905CA0)
#define CLASS_2_1E2C28EB5494586C_CLASS_3_CBBE5459CF3C9E92_INVOKE_OFFSET UNITYSDK_OFFSET(0x15905650)
#define CLASS_2_1E2C28EB5494586C_CLASS_3_CBBE5459CF3C9E92__CTOR_OFFSET UNITYSDK_OFFSET(0x15905630)

inline static constexpr unsigned int Class_2_1E2C28EB5494586C_Class_3_CBBE5459CF3C9E92_TypeDefinitionIndex = 90494;

class Class_2_1E2C28EB5494586C_Class_3_CBBE5459CF3C9E92 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_2_1E2C28EB5494586C_CLASS_3_CBBE5459CF3C9E92__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_B196590B3E289741 Invoke(::System::String* a1, ::System::Int32 a2, ::System::Char a3)
	{
		return ((::Struct_2_B196590B3E289741(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + CLASS_2_1E2C28EB5494586C_CLASS_3_CBBE5459CF3C9E92_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Int32 a2, ::System::Char a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1E2C28EB5494586C_CLASS_3_CBBE5459CF3C9E92_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Struct_2_B196590B3E289741 EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Struct_2_B196590B3E289741(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_2_1E2C28EB5494586C_CLASS_3_CBBE5459CF3C9E92_ENDINVOKE_OFFSET))(this, a1);
	}
};
