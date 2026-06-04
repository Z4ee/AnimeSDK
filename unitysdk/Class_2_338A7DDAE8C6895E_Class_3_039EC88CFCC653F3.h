#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_2_338A7DDAE8C6895E_CLASS_3_039EC88CFCC653F3_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xABEA390)
#define CLASS_2_338A7DDAE8C6895E_CLASS_3_039EC88CFCC653F3_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xABEA3E0)
#define CLASS_2_338A7DDAE8C6895E_CLASS_3_039EC88CFCC653F3_INVOKE_OFFSET UNITYSDK_OFFSET(0xABE9640)
#define CLASS_2_338A7DDAE8C6895E_CLASS_3_039EC88CFCC653F3__CTOR_OFFSET UNITYSDK_OFFSET(0xABEA320)

inline static constexpr unsigned int Class_2_338A7DDAE8C6895E_Class_3_039EC88CFCC653F3_TypeDefinitionIndex = 62104;

class Class_2_338A7DDAE8C6895E_Class_3_039EC88CFCC653F3 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_2_338A7DDAE8C6895E_CLASS_3_039EC88CFCC653F3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Invoke(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_338A7DDAE8C6895E_CLASS_3_039EC88CFCC653F3_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_338A7DDAE8C6895E_CLASS_3_039EC88CFCC653F3_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Single EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_2_338A7DDAE8C6895E_CLASS_3_039EC88CFCC653F3_ENDINVOKE_OFFSET))(this, a1);
	}
};
