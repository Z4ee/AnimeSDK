#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Struct_2_03FE6FACF8191383.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_778785E577621492_METHOD_1_3590538BC78C5E6F_OFFSET UNITYSDK_OFFSET(0x138A39D0)
#define CLASS_1_778785E577621492_METHOD_1_75CB4980FED2E377_OFFSET UNITYSDK_OFFSET(0x138A3940)
#define CLASS_1_778785E577621492_METHOD_1_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x138A3670)
#define CLASS_1_778785E577621492_METHOD_1_C5667B7AF7D1A7EA_OFFSET UNITYSDK_OFFSET(0x138A3C00)
#define CLASS_1_778785E577621492_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x138A39B0)
#define CLASS_1_778785E577621492__CTOR_OFFSET UNITYSDK_OFFSET(0x138A35F0)

inline static constexpr unsigned int Class_1_778785E577621492_TypeDefinitionIndex = 45464;

class Class_1_778785E577621492 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10
	::Foundation::Coroutine::CoroutineHandle Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_778785E577621492__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_778785E577621492_METHOD_1_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Method_1_75CB4980FED2E377(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_778785E577621492_METHOD_1_75CB4980FED2E377_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_778785E577621492_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_1_3590538BC78C5E6F(::System::Int32 a1, ::System::Action* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_778785E577621492_METHOD_1_3590538BC78C5E6F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C5667B7AF7D1A7EA(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_778785E577621492_METHOD_1_C5667B7AF7D1A7EA_OFFSET))(this, a1, a2);
	}
};
