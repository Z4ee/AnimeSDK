#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_126FCF6D29887CE8.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_576;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_2CA3754E0AA55F4B_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18BD94B0)
#define CLASS_3_2CA3754E0AA55F4B_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18BD9530)
#define CLASS_3_2CA3754E0AA55F4B_INVOKE_OFFSET UNITYSDK_OFFSET(0x18BD9480)
#define CLASS_3_2CA3754E0AA55F4B__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD9390)

inline static constexpr unsigned int Class_3_2CA3754E0AA55F4B_TypeDefinitionIndex = 56187;

class Class_3_2CA3754E0AA55F4B : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_2CA3754E0AA55F4B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::Class_0_16E4307DCC419505_576* a1, ::Struct_2_126FCF6D29887CE8 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_576*, ::Struct_2_126FCF6D29887CE8))((::PBYTE)hIl2Cpp + CLASS_3_2CA3754E0AA55F4B_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_576* a1, ::Struct_2_126FCF6D29887CE8 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_576*, ::Struct_2_126FCF6D29887CE8, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_2CA3754E0AA55F4B_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_2CA3754E0AA55F4B_ENDINVOKE_OFFSET))(this, a1);
	}
};
