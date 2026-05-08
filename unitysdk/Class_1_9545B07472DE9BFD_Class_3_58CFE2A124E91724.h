#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_4;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9545B07472DE9BFD_CLASS_3_58CFE2A124E91724_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x120AE8A0)
#define CLASS_1_9545B07472DE9BFD_CLASS_3_58CFE2A124E91724_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x120AE8D0)
#define CLASS_1_9545B07472DE9BFD_CLASS_3_58CFE2A124E91724_INVOKE_OFFSET UNITYSDK_OFFSET(0x120AE3A0)
#define CLASS_1_9545B07472DE9BFD_CLASS_3_58CFE2A124E91724__CTOR_OFFSET UNITYSDK_OFFSET(0x120AE390)

inline static constexpr unsigned int Class_1_9545B07472DE9BFD_Class_3_58CFE2A124E91724_TypeDefinitionIndex = 57164;

class Class_1_9545B07472DE9BFD_Class_3_58CFE2A124E91724 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_9545B07472DE9BFD_CLASS_3_58CFE2A124E91724__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>*))((::PBYTE)hIl2Cpp + CLASS_1_9545B07472DE9BFD_CLASS_3_58CFE2A124E91724_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9545B07472DE9BFD_CLASS_3_58CFE2A124E91724_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_9545B07472DE9BFD_CLASS_3_58CFE2A124E91724_ENDINVOKE_OFFSET))(this, a1);
	}
};
