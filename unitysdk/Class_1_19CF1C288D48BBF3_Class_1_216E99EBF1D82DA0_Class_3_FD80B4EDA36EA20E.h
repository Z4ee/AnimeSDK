#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_19CF1C288D48BBF3_ThreadState.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_19CF1C288D48BBF3_Class_1_216E99EBF1D82DA0;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_19CF1C288D48BBF3_CLASS_1_216E99EBF1D82DA0_CLASS_3_FD80B4EDA36EA20E_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19DA3A50)
#define CLASS_1_19CF1C288D48BBF3_CLASS_1_216E99EBF1D82DA0_CLASS_3_FD80B4EDA36EA20E_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19DA3AD0)
#define CLASS_1_19CF1C288D48BBF3_CLASS_1_216E99EBF1D82DA0_CLASS_3_FD80B4EDA36EA20E_INVOKE_OFFSET UNITYSDK_OFFSET(0x19DA34F0)
#define CLASS_1_19CF1C288D48BBF3_CLASS_1_216E99EBF1D82DA0_CLASS_3_FD80B4EDA36EA20E__CTOR_OFFSET UNITYSDK_OFFSET(0x19DA2560)

inline static constexpr unsigned int Class_1_19CF1C288D48BBF3_Class_1_216E99EBF1D82DA0_Class_3_FD80B4EDA36EA20E_TypeDefinitionIndex = 39741;

class Class_1_19CF1C288D48BBF3_Class_1_216E99EBF1D82DA0_Class_3_FD80B4EDA36EA20E : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_19CF1C288D48BBF3_CLASS_1_216E99EBF1D82DA0_CLASS_3_FD80B4EDA36EA20E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_19CF1C288D48BBF3_Class_1_216E99EBF1D82DA0* a1, ::Class_1_19CF1C288D48BBF3_ThreadState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_19CF1C288D48BBF3_Class_1_216E99EBF1D82DA0*, ::Class_1_19CF1C288D48BBF3_ThreadState))((::PBYTE)hIl2Cpp + CLASS_1_19CF1C288D48BBF3_CLASS_1_216E99EBF1D82DA0_CLASS_3_FD80B4EDA36EA20E_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_19CF1C288D48BBF3_Class_1_216E99EBF1D82DA0* a1, ::Class_1_19CF1C288D48BBF3_ThreadState a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_19CF1C288D48BBF3_Class_1_216E99EBF1D82DA0*, ::Class_1_19CF1C288D48BBF3_ThreadState, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_19CF1C288D48BBF3_CLASS_1_216E99EBF1D82DA0_CLASS_3_FD80B4EDA36EA20E_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_19CF1C288D48BBF3_CLASS_1_216E99EBF1D82DA0_CLASS_3_FD80B4EDA36EA20E_ENDINVOKE_OFFSET))(this, a1);
	}
};
