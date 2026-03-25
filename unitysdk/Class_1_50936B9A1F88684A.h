#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_631;
namespace System { class String; }

#define CLASS_1_50936B9A1F88684A_METHOD_1_37FEDCABB939A573_OFFSET UNITYSDK_OFFSET(0x114CF550)
#define CLASS_1_50936B9A1F88684A__CTOR_OFFSET UNITYSDK_OFFSET(0x114D0110)

inline static constexpr unsigned int Class_1_50936B9A1F88684A_TypeDefinitionIndex = 52768;

class Class_1_50936B9A1F88684A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50936B9A1F88684A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_37FEDCABB939A573(::System::UInt32 a1, ::System::UInt32 a2, ::Class_0_16E4307DCC419505_631* a3, ::System::String*& a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_0_16E4307DCC419505_631*, ::System::String*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_50936B9A1F88684A_METHOD_1_37FEDCABB939A573_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
