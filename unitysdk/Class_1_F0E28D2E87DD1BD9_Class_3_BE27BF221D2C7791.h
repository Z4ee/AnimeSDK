#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_F0E28D2E87DD1BD9_CLASS_3_BE27BF221D2C7791_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x97357C0)
#define CLASS_1_F0E28D2E87DD1BD9_CLASS_3_BE27BF221D2C7791_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x97357F0)
#define CLASS_1_F0E28D2E87DD1BD9_CLASS_3_BE27BF221D2C7791_INVOKE_OFFSET UNITYSDK_OFFSET(0x9734FA0)
#define CLASS_1_F0E28D2E87DD1BD9_CLASS_3_BE27BF221D2C7791__CTOR_OFFSET UNITYSDK_OFFSET(0x9734D40)

inline static constexpr unsigned int Class_1_F0E28D2E87DD1BD9_Class_3_BE27BF221D2C7791_TypeDefinitionIndex = 57444;

class Class_1_F0E28D2E87DD1BD9_Class_3_BE27BF221D2C7791 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_F0E28D2E87DD1BD9_CLASS_3_BE27BF221D2C7791__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F0E28D2E87DD1BD9_CLASS_3_BE27BF221D2C7791_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F0E28D2E87DD1BD9_CLASS_3_BE27BF221D2C7791_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_F0E28D2E87DD1BD9_CLASS_3_BE27BF221D2C7791_ENDINVOKE_OFFSET))(this, a1);
	}
};
