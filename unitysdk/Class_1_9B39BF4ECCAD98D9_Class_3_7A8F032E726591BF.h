#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/CancelFadingReason.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_9B39BF4ECCAD98D9_CLASS_3_7A8F032E726591BF_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFA619C0)
#define CLASS_1_9B39BF4ECCAD98D9_CLASS_3_7A8F032E726591BF_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFA61A30)
#define CLASS_1_9B39BF4ECCAD98D9_CLASS_3_7A8F032E726591BF_INVOKE_OFFSET UNITYSDK_OFFSET(0xFA619B0)
#define CLASS_1_9B39BF4ECCAD98D9_CLASS_3_7A8F032E726591BF__CTOR_OFFSET UNITYSDK_OFFSET(0xFA61940)

inline static constexpr unsigned int Class_1_9B39BF4ECCAD98D9_Class_3_7A8F032E726591BF_TypeDefinitionIndex = 49839;

class Class_1_9B39BF4ECCAD98D9_Class_3_7A8F032E726591BF : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_9B39BF4ECCAD98D9_CLASS_3_7A8F032E726591BF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::EnviromentSystemV2Space::CancelFadingReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::CancelFadingReason))((::PBYTE)hIl2Cpp + CLASS_1_9B39BF4ECCAD98D9_CLASS_3_7A8F032E726591BF_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::EnviromentSystemV2Space::CancelFadingReason a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::EnviromentSystemV2Space::CancelFadingReason, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9B39BF4ECCAD98D9_CLASS_3_7A8F032E726591BF_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_9B39BF4ECCAD98D9_CLASS_3_7A8F032E726591BF_ENDINVOKE_OFFSET))(this, a1);
	}
};
