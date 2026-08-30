#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_27A3BA7C583D7D3E_CLASS_3_50D343C44D28BEFB_4_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xC301BF0)
#define CLASS_1_27A3BA7C583D7D3E_CLASS_3_50D343C44D28BEFB_4_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xC301C20)
#define CLASS_1_27A3BA7C583D7D3E_CLASS_3_50D343C44D28BEFB_4_INVOKE_OFFSET UNITYSDK_OFFSET(0xC301BE0)
#define CLASS_1_27A3BA7C583D7D3E_CLASS_3_50D343C44D28BEFB_4__CTOR_OFFSET UNITYSDK_OFFSET(0xC301B70)

inline static constexpr unsigned int Class_1_27A3BA7C583D7D3E_Class_3_50D343C44D28BEFB_4_TypeDefinitionIndex = 50650;

class Class_1_27A3BA7C583D7D3E_Class_3_50D343C44D28BEFB_4 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_27A3BA7C583D7D3E_CLASS_3_50D343C44D28BEFB_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27A3BA7C583D7D3E_CLASS_3_50D343C44D28BEFB_4_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_27A3BA7C583D7D3E_CLASS_3_50D343C44D28BEFB_4_BEGININVOKE_OFFSET))(this, a1, a2);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_27A3BA7C583D7D3E_CLASS_3_50D343C44D28BEFB_4_ENDINVOKE_OFFSET))(this, a1);
	}
};
