#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_A3AC0B6B344CF5CC;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_DDCBE1DF9A72F9EF_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11CD9090)
#define CLASS_3_DDCBE1DF9A72F9EF_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11CD9110)
#define CLASS_3_DDCBE1DF9A72F9EF_INVOKE_OFFSET UNITYSDK_OFFSET(0x11CD8AF0)
#define CLASS_3_DDCBE1DF9A72F9EF__CTOR_OFFSET UNITYSDK_OFFSET(0x11CD8AD0)

inline static constexpr unsigned int Class_3_DDCBE1DF9A72F9EF_TypeDefinitionIndex = 73470;

class Class_3_DDCBE1DF9A72F9EF : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_DDCBE1DF9A72F9EF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_A3AC0B6B344CF5CC* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A3AC0B6B344CF5CC*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DDCBE1DF9A72F9EF_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_A3AC0B6B344CF5CC* a1, ::System::Single a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_A3AC0B6B344CF5CC*, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_DDCBE1DF9A72F9EF_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_DDCBE1DF9A72F9EF_ENDINVOKE_OFFSET))(this, a1);
	}
};
