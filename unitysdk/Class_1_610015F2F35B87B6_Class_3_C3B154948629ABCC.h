#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_610015F2F35B87B6_CLASS_3_C3B154948629ABCC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8948C40)
#define CLASS_1_610015F2F35B87B6_CLASS_3_C3B154948629ABCC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8948CC0)
#define CLASS_1_610015F2F35B87B6_CLASS_3_C3B154948629ABCC_INVOKE_OFFSET UNITYSDK_OFFSET(0x8947B10)
#define CLASS_1_610015F2F35B87B6_CLASS_3_C3B154948629ABCC__CTOR_OFFSET UNITYSDK_OFFSET(0x8948C20)

inline static constexpr unsigned int Class_1_610015F2F35B87B6_Class_3_C3B154948629ABCC_TypeDefinitionIndex = 64237;

class Class_1_610015F2F35B87B6_Class_3_C3B154948629ABCC : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_610015F2F35B87B6_CLASS_3_C3B154948629ABCC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_610015F2F35B87B6_CLASS_3_C3B154948629ABCC_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::Single a1, ::System::Single a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_610015F2F35B87B6_CLASS_3_C3B154948629ABCC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_610015F2F35B87B6_CLASS_3_C3B154948629ABCC_ENDINVOKE_OFFSET))(this, a1);
	}
};
