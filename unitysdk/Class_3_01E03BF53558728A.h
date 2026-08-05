#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_01E03BF53558728A_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14F00F10)
#define CLASS_3_01E03BF53558728A_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14F00F80)
#define CLASS_3_01E03BF53558728A_INVOKE_OFFSET UNITYSDK_OFFSET(0x14F00C10)
#define CLASS_3_01E03BF53558728A__CTOR_OFFSET UNITYSDK_OFFSET(0x14F00BF0)

inline static constexpr unsigned int Class_3_01E03BF53558728A_TypeDefinitionIndex = 75546;

class Class_3_01E03BF53558728A : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_01E03BF53558728A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_01E03BF53558728A_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_01E03BF53558728A_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_01E03BF53558728A_ENDINVOKE_OFFSET))(this, a1);
	}
};
