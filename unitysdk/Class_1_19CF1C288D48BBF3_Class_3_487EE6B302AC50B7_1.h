#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_F59C8DF29FF9694F;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_19CF1C288D48BBF3_CLASS_3_487EE6B302AC50B7_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19DA0FA0)
#define CLASS_1_19CF1C288D48BBF3_CLASS_3_487EE6B302AC50B7_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19DA0FD0)
#define CLASS_1_19CF1C288D48BBF3_CLASS_3_487EE6B302AC50B7_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x19D9FF10)
#define CLASS_1_19CF1C288D48BBF3_CLASS_3_487EE6B302AC50B7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19DA0F80)

inline static constexpr unsigned int Class_1_19CF1C288D48BBF3_Class_3_487EE6B302AC50B7_1_TypeDefinitionIndex = 39748;

class Class_1_19CF1C288D48BBF3_Class_3_487EE6B302AC50B7_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_19CF1C288D48BBF3_CLASS_3_487EE6B302AC50B7_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_F59C8DF29FF9694F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F59C8DF29FF9694F*))((::PBYTE)hIl2Cpp + CLASS_1_19CF1C288D48BBF3_CLASS_3_487EE6B302AC50B7_1_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_F59C8DF29FF9694F* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_F59C8DF29FF9694F*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_19CF1C288D48BBF3_CLASS_3_487EE6B302AC50B7_1_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_19CF1C288D48BBF3_CLASS_3_487EE6B302AC50B7_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
