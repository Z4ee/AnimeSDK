#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_E63464E15C12B44C_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x162730B0)
#define CLASS_3_E63464E15C12B44C_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16273120)
#define CLASS_3_E63464E15C12B44C_INVOKE_OFFSET UNITYSDK_OFFSET(0x162730A0)
#define CLASS_3_E63464E15C12B44C__CTOR_OFFSET UNITYSDK_OFFSET(0x16273030)

inline static constexpr unsigned int Class_3_E63464E15C12B44C_TypeDefinitionIndex = 35561;

class Class_3_E63464E15C12B44C : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_E63464E15C12B44C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E63464E15C12B44C_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_E63464E15C12B44C_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_E63464E15C12B44C_ENDINVOKE_OFFSET))(this, a1);
	}
};
