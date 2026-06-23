#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_8FBDD7D8E0EE0B49;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_9465CC52E1CFB15A_CLASS_3_D911D6D78C34DAC5_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15906080)
#define CLASS_1_9465CC52E1CFB15A_CLASS_3_D911D6D78C34DAC5_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15906120)
#define CLASS_1_9465CC52E1CFB15A_CLASS_3_D911D6D78C34DAC5_INVOKE_OFFSET UNITYSDK_OFFSET(0x15905D00)
#define CLASS_1_9465CC52E1CFB15A_CLASS_3_D911D6D78C34DAC5__CTOR_OFFSET UNITYSDK_OFFSET(0x15905CE0)

inline static constexpr unsigned int Class_1_9465CC52E1CFB15A_Class_3_D911D6D78C34DAC5_TypeDefinitionIndex = 59336;

class Class_1_9465CC52E1CFB15A_Class_3_D911D6D78C34DAC5 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_9465CC52E1CFB15A_CLASS_3_D911D6D78C34DAC5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Int32 a1, ::System::Int32 a2, ::Class_1_8FBDD7D8E0EE0B49* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_8FBDD7D8E0EE0B49*))((::PBYTE)hIl2Cpp + CLASS_1_9465CC52E1CFB15A_CLASS_3_D911D6D78C34DAC5_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::Int32 a2, ::Class_1_8FBDD7D8E0EE0B49* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_8FBDD7D8E0EE0B49*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9465CC52E1CFB15A_CLASS_3_D911D6D78C34DAC5_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_9465CC52E1CFB15A_CLASS_3_D911D6D78C34DAC5_ENDINVOKE_OFFSET))(this, a1);
	}
};
