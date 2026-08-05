#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CE73C3CBE1989A82_Enum_3_B1573115C20A5313.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_1_57AC4D3FFD98A32C_CLASS_3_27E9C8019F238D13_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10F75AF0)
#define CLASS_1_57AC4D3FFD98A32C_CLASS_3_27E9C8019F238D13_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10F75B60)
#define CLASS_1_57AC4D3FFD98A32C_CLASS_3_27E9C8019F238D13_INVOKE_OFFSET UNITYSDK_OFFSET(0x10F757F0)
#define CLASS_1_57AC4D3FFD98A32C_CLASS_3_27E9C8019F238D13__CTOR_OFFSET UNITYSDK_OFFSET(0x10F757D0)

inline static constexpr unsigned int Class_1_57AC4D3FFD98A32C_Class_3_27E9C8019F238D13_TypeDefinitionIndex = 55143;

class Class_1_57AC4D3FFD98A32C_Class_3_27E9C8019F238D13 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_57AC4D3FFD98A32C_CLASS_3_27E9C8019F238D13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Invoke(::Class_1_CE73C3CBE1989A82_Enum_3_B1573115C20A5313 a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_CE73C3CBE1989A82_Enum_3_B1573115C20A5313))((::PBYTE)hIl2Cpp + CLASS_1_57AC4D3FFD98A32C_CLASS_3_27E9C8019F238D13_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_CE73C3CBE1989A82_Enum_3_B1573115C20A5313 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_CE73C3CBE1989A82_Enum_3_B1573115C20A5313, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_57AC4D3FFD98A32C_CLASS_3_27E9C8019F238D13_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::String* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_57AC4D3FFD98A32C_CLASS_3_27E9C8019F238D13_ENDINVOKE_OFFSET))(this, a1);
	}
};
