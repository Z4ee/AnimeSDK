#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_A3AC0B6B344CF5CC_CLASS_3_D965CDAB7B519DE1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19E329B0)
#define CLASS_1_A3AC0B6B344CF5CC_CLASS_3_D965CDAB7B519DE1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19E32A40)
#define CLASS_1_A3AC0B6B344CF5CC_CLASS_3_D965CDAB7B519DE1_INVOKE_OFFSET UNITYSDK_OFFSET(0x19E32670)
#define CLASS_1_A3AC0B6B344CF5CC_CLASS_3_D965CDAB7B519DE1__CTOR_OFFSET UNITYSDK_OFFSET(0x19E32650)

inline static constexpr unsigned int Class_1_A3AC0B6B344CF5CC_Class_3_D965CDAB7B519DE1_TypeDefinitionIndex = 83111;

class Class_1_A3AC0B6B344CF5CC_Class_3_D965CDAB7B519DE1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_A3AC0B6B344CF5CC_CLASS_3_D965CDAB7B519DE1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A3AC0B6B344CF5CC_CLASS_3_D965CDAB7B519DE1_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::UInt32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A3AC0B6B344CF5CC_CLASS_3_D965CDAB7B519DE1_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_A3AC0B6B344CF5CC_CLASS_3_D965CDAB7B519DE1_ENDINVOKE_OFFSET))(this, a1);
	}
};
