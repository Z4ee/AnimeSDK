#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_54070F979C337FAA;
class Class_1_764BA606FA6BC86E;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_1CAFF79739EC42AE_CLASS_3_818C226E4C74D1B9_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14A2E0D0)
#define CLASS_1_1CAFF79739EC42AE_CLASS_3_818C226E4C74D1B9_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14A2E110)
#define CLASS_1_1CAFF79739EC42AE_CLASS_3_818C226E4C74D1B9_INVOKE_OFFSET UNITYSDK_OFFSET(0x14A2DB50)
#define CLASS_1_1CAFF79739EC42AE_CLASS_3_818C226E4C74D1B9__CTOR_OFFSET UNITYSDK_OFFSET(0x14A2DB40)

inline static constexpr unsigned int Class_1_1CAFF79739EC42AE_Class_3_818C226E4C74D1B9_TypeDefinitionIndex = 56193;

class Class_1_1CAFF79739EC42AE_Class_3_818C226E4C74D1B9 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_1CAFF79739EC42AE_CLASS_3_818C226E4C74D1B9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_764BA606FA6BC86E* a1, ::Class_1_54070F979C337FAA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_764BA606FA6BC86E*, ::Class_1_54070F979C337FAA*))((::PBYTE)hIl2Cpp + CLASS_1_1CAFF79739EC42AE_CLASS_3_818C226E4C74D1B9_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_764BA606FA6BC86E* a1, ::Class_1_54070F979C337FAA* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_764BA606FA6BC86E*, ::Class_1_54070F979C337FAA*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1CAFF79739EC42AE_CLASS_3_818C226E4C74D1B9_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_1CAFF79739EC42AE_CLASS_3_818C226E4C74D1B9_ENDINVOKE_OFFSET))(this, a1);
	}
};
