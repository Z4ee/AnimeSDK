#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_BF30DCF14906C0B9_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16A92310)
#define CLASS_3_BF30DCF14906C0B9_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16A92390)
#define CLASS_3_BF30DCF14906C0B9_INVOKE_OFFSET UNITYSDK_OFFSET(0x16A92300)
#define CLASS_3_BF30DCF14906C0B9__CTOR_OFFSET UNITYSDK_OFFSET(0x16A92290)

inline static constexpr unsigned int Class_3_BF30DCF14906C0B9_TypeDefinitionIndex = 70078;

class Class_3_BF30DCF14906C0B9 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_BF30DCF14906C0B9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Invoke(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BF30DCF14906C0B9_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::Single a1, ::System::Single a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_BF30DCF14906C0B9_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_BF30DCF14906C0B9_ENDINVOKE_OFFSET))(this, a1);
	}
};
