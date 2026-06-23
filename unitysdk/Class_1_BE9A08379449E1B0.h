#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_BE9A08379449E1B0_METHOD_1_9F5B0697BD54EA3B_OFFSET UNITYSDK_OFFSET(0x16358450)
#define CLASS_1_BE9A08379449E1B0_METHOD_1_A4BF4AC938884E9C_OFFSET UNITYSDK_OFFSET(0x16357EF0)
#define CLASS_1_BE9A08379449E1B0_METHOD_1_B547D3F9EF7A86D9_OFFSET UNITYSDK_OFFSET(0x16358200)
#define CLASS_1_BE9A08379449E1B0_METHOD_1_E70037D3AA1F5EF0_OFFSET UNITYSDK_OFFSET(0x16357C70)
#define CLASS_1_BE9A08379449E1B0__CTOR_OFFSET UNITYSDK_OFFSET(0x16357C60)

inline static constexpr unsigned int Class_1_BE9A08379449E1B0_TypeDefinitionIndex = 76965;

class Class_1_BE9A08379449E1B0 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE9A08379449E1B0__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_E70037D3AA1F5EF0(::System::String* a1, ::System::String* a2, ::System::Action* a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BE9A08379449E1B0_METHOD_1_E70037D3AA1F5EF0_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_A4BF4AC938884E9C(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BE9A08379449E1B0_METHOD_1_A4BF4AC938884E9C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B547D3F9EF7A86D9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE9A08379449E1B0_METHOD_1_B547D3F9EF7A86D9_OFFSET))();
	}

	static ::System::Void Method_1_9F5B0697BD54EA3B(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BE9A08379449E1B0_METHOD_1_9F5B0697BD54EA3B_OFFSET))(a1, a2, a3, a4);
	}
};
