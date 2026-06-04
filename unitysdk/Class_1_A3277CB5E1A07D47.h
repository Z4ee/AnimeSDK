#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_569;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_A3277CB5E1A07D47_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4E02C0)
#define CLASS_1_A3277CB5E1A07D47_METHOD_1_1FCD2D53490C980D_OFFSET UNITYSDK_OFFSET(0xA4E0310)
#define CLASS_1_A3277CB5E1A07D47_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xA4E04B0)
#define CLASS_1_A3277CB5E1A07D47_METHOD_1_46DB4169A68DB507_OFFSET UNITYSDK_OFFSET(0xA4E03F0)
#define CLASS_1_A3277CB5E1A07D47_METHOD_1_B75E2195E90A782E_OFFSET UNITYSDK_OFFSET(0xA4E0510)
#define CLASS_1_A3277CB5E1A07D47__CTOR_OFFSET UNITYSDK_OFFSET(0xA4E0210)

inline static constexpr unsigned int Class_1_A3277CB5E1A07D47_TypeDefinitionIndex = 55105;

class Class_1_A3277CB5E1A07D47 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_569*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3277CB5E1A07D47__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3277CB5E1A07D47_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1FCD2D53490C980D(::Class_0_16E4307DCC419505_569* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_569*))((::PBYTE)hIl2Cpp + CLASS_1_A3277CB5E1A07D47_METHOD_1_1FCD2D53490C980D_OFFSET))(this, a1);
	}

	::System::Void Method_1_46DB4169A68DB507(::Class_0_16E4307DCC419505_569* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_569*))((::PBYTE)hIl2Cpp + CLASS_1_A3277CB5E1A07D47_METHOD_1_46DB4169A68DB507_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A3277CB5E1A07D47_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_569*>* Method_1_B75E2195E90A782E()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_569*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3277CB5E1A07D47_METHOD_1_B75E2195E90A782E_OFFSET))(this);
	}
};
