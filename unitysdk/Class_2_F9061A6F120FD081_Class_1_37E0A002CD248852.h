#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { class String; }

#define CLASS_2_F9061A6F120FD081_CLASS_1_37E0A002CD248852_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x101275B0)
#define CLASS_2_F9061A6F120FD081_CLASS_1_37E0A002CD248852_METHOD_1_094ACCBC3B04DF3E_OFFSET UNITYSDK_OFFSET(0x10127500)
#define CLASS_2_F9061A6F120FD081_CLASS_1_37E0A002CD248852__CTOR_OFFSET UNITYSDK_OFFSET(0x101274F0)

inline static constexpr unsigned int Class_2_F9061A6F120FD081_Class_1_37E0A002CD248852_TypeDefinitionIndex = 75866;

class Class_2_F9061A6F120FD081_Class_1_37E0A002CD248852 : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::String*>* Field_1_0; // 0x10
	::System::Threading::CancellationToken Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9061A6F120FD081_CLASS_1_37E0A002CD248852__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_094ACCBC3B04DF3E(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F9061A6F120FD081_CLASS_1_37E0A002CD248852_METHOD_1_094ACCBC3B04DF3E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9061A6F120FD081_CLASS_1_37E0A002CD248852_METHOD_1_0865E94460F11643_OFFSET))(this);
	}
};
