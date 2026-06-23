#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_2_17E903BDA51D43F0_CLASS_3_90EEADDEAE6DE849_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18036630)
#define CLASS_2_17E903BDA51D43F0_CLASS_3_90EEADDEAE6DE849_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x180366A0)
#define CLASS_2_17E903BDA51D43F0_CLASS_3_90EEADDEAE6DE849_1_INVOKE_OFFSET UNITYSDK_OFFSET(0x18036340)
#define CLASS_2_17E903BDA51D43F0_CLASS_3_90EEADDEAE6DE849_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18036320)

inline static constexpr unsigned int Class_2_17E903BDA51D43F0_Class_3_90EEADDEAE6DE849_1_TypeDefinitionIndex = 58707;

class Class_2_17E903BDA51D43F0_Class_3_90EEADDEAE6DE849_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_CLASS_3_90EEADDEAE6DE849_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_CLASS_3_90EEADDEAE6DE849_1_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_CLASS_3_90EEADDEAE6DE849_1_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_CLASS_3_90EEADDEAE6DE849_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
