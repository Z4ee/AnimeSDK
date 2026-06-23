#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class String; }
namespace System::Threading::Tasks { template <typename T> class TaskCompletionSource_1; }

#define CLASS_2_F9061A6F120FD081_CLASS_1_D4B7DD4D38CA5E43_METHOD_1_C4A0C572E4A16E76_OFFSET UNITYSDK_OFFSET(0x15D3B8F0)
#define CLASS_2_F9061A6F120FD081_CLASS_1_D4B7DD4D38CA5E43_METHOD_1_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0x15D3B950)
#define CLASS_2_F9061A6F120FD081_CLASS_1_D4B7DD4D38CA5E43__CTOR_OFFSET UNITYSDK_OFFSET(0x15D3B8E0)

inline static constexpr unsigned int Class_2_F9061A6F120FD081_Class_1_D4B7DD4D38CA5E43_TypeDefinitionIndex = 75857;

class Class_2_F9061A6F120FD081_Class_1_D4B7DD4D38CA5E43 : public ::System::Object
{
public:
	::System::Threading::CancellationToken Field_1_1; // 0x10
	::System::Threading::Tasks::TaskCompletionSource_1<::System::String*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9061A6F120FD081_CLASS_1_D4B7DD4D38CA5E43__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C4A0C572E4A16E76(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F9061A6F120FD081_CLASS_1_D4B7DD4D38CA5E43_METHOD_1_C4A0C572E4A16E76_OFFSET))(this, a1);
	}

	::System::Void Method_1_C9A3013DD208C696()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9061A6F120FD081_CLASS_1_D4B7DD4D38CA5E43_METHOD_1_C9A3013DD208C696_OFFSET))(this);
	}
};
