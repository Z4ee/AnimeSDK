#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_2_2B69BCB161EF3587_CLASS_3_90EEADDEAE6DE849_3_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A5550C0)
#define CLASS_2_2B69BCB161EF3587_CLASS_3_90EEADDEAE6DE849_3_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A555130)
#define CLASS_2_2B69BCB161EF3587_CLASS_3_90EEADDEAE6DE849_3_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A554DC0)
#define CLASS_2_2B69BCB161EF3587_CLASS_3_90EEADDEAE6DE849_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A554DA0)

inline static constexpr unsigned int Class_2_2B69BCB161EF3587_Class_3_90EEADDEAE6DE849_3_TypeDefinitionIndex = 75491;

class Class_2_2B69BCB161EF3587_Class_3_90EEADDEAE6DE849_3 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_CLASS_3_90EEADDEAE6DE849_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_CLASS_3_90EEADDEAE6DE849_3_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_CLASS_3_90EEADDEAE6DE849_3_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_CLASS_3_90EEADDEAE6DE849_3_ENDINVOKE_OFFSET))(this, a1);
	}
};
