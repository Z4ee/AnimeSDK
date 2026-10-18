#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_9A60053C76BB6B5C_1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBD92FF0)
#define CLASS_3_9A60053C76BB6B5C_1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBD93040)
#define CLASS_3_9A60053C76BB6B5C_1_INVOKE_OFFSET UNITYSDK_OFFSET(0xBD92FE0)
#define CLASS_3_9A60053C76BB6B5C_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBD92F70)

inline static constexpr unsigned int Class_3_9A60053C76BB6B5C_1_TypeDefinitionIndex = 75723;

class Class_3_9A60053C76BB6B5C_1 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_9A60053C76BB6B5C_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_9A60053C76BB6B5C_1_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_9A60053C76BB6B5C_1_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_9A60053C76BB6B5C_1_ENDINVOKE_OFFSET))(this, a1);
	}
};
