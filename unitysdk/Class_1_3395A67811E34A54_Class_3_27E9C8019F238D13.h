#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CE73C3CBE1989A82_Enum_3_4EDA451157AA66AC.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_1_3395A67811E34A54_CLASS_3_27E9C8019F238D13_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12244B40)
#define CLASS_1_3395A67811E34A54_CLASS_3_27E9C8019F238D13_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12244BB0)
#define CLASS_1_3395A67811E34A54_CLASS_3_27E9C8019F238D13_INVOKE_OFFSET UNITYSDK_OFFSET(0x12244850)
#define CLASS_1_3395A67811E34A54_CLASS_3_27E9C8019F238D13__CTOR_OFFSET UNITYSDK_OFFSET(0x122436A0)

inline static constexpr unsigned int Class_1_3395A67811E34A54_Class_3_27E9C8019F238D13_TypeDefinitionIndex = 59260;

class Class_1_3395A67811E34A54_Class_3_27E9C8019F238D13 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_3395A67811E34A54_CLASS_3_27E9C8019F238D13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Invoke(::Class_1_CE73C3CBE1989A82_Enum_3_4EDA451157AA66AC a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_CE73C3CBE1989A82_Enum_3_4EDA451157AA66AC))((::PBYTE)hIl2Cpp + CLASS_1_3395A67811E34A54_CLASS_3_27E9C8019F238D13_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_CE73C3CBE1989A82_Enum_3_4EDA451157AA66AC a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_CE73C3CBE1989A82_Enum_3_4EDA451157AA66AC, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3395A67811E34A54_CLASS_3_27E9C8019F238D13_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::String* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_3395A67811E34A54_CLASS_3_27E9C8019F238D13_ENDINVOKE_OFFSET))(this, a1);
	}
};
