#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_8E541422F89D76B8;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_046D69BA9916A998_CLASS_3_487EE6B302AC50B7_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18351430)
#define CLASS_1_046D69BA9916A998_CLASS_3_487EE6B302AC50B7_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18351460)
#define CLASS_1_046D69BA9916A998_CLASS_3_487EE6B302AC50B7_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x1834E570)
#define CLASS_1_046D69BA9916A998_CLASS_3_487EE6B302AC50B7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18351410)

inline static constexpr unsigned int Class_1_046D69BA9916A998_Class_3_487EE6B302AC50B7_1_TypeDefinitionIndex = 33947;

class Class_1_046D69BA9916A998_Class_3_487EE6B302AC50B7_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_046D69BA9916A998_CLASS_3_487EE6B302AC50B7_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_1_8E541422F89D76B8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8E541422F89D76B8*))((::PBYTE)hIl2Cpp + CLASS_1_046D69BA9916A998_CLASS_3_487EE6B302AC50B7_1_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::Class_1_8E541422F89D76B8* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_8E541422F89D76B8*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_046D69BA9916A998_CLASS_3_487EE6B302AC50B7_1_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_046D69BA9916A998_CLASS_3_487EE6B302AC50B7_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
