#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_52B505AABBB37BDF_CLASS_3_44E41E575F3A69F5_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10694170)
#define CLASS_1_52B505AABBB37BDF_CLASS_3_44E41E575F3A69F5_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x106941C0)
#define CLASS_1_52B505AABBB37BDF_CLASS_3_44E41E575F3A69F5_INVOKE_OFFSET UNITYSDK_OFFSET(0x10693AC0)
#define CLASS_1_52B505AABBB37BDF_CLASS_3_44E41E575F3A69F5__CTOR_OFFSET UNITYSDK_OFFSET(0x10694150)

inline static constexpr unsigned int Class_1_52B505AABBB37BDF_Class_3_44E41E575F3A69F5_TypeDefinitionIndex = 56728;

class Class_1_52B505AABBB37BDF_Class_3_44E41E575F3A69F5 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_52B505AABBB37BDF_CLASS_3_44E41E575F3A69F5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_52B505AABBB37BDF_CLASS_3_44E41E575F3A69F5_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::Boolean a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_52B505AABBB37BDF_CLASS_3_44E41E575F3A69F5_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_52B505AABBB37BDF_CLASS_3_44E41E575F3A69F5_ENDINVOKE_OFFSET))(this, a1);
	}
};
