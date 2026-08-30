#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_639;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_A3277CB5E1A07D47_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB793320)
#define CLASS_1_A3277CB5E1A07D47_METHOD_1_1FCD2D53490C980D_OFFSET UNITYSDK_OFFSET(0xB793370)
#define CLASS_1_A3277CB5E1A07D47_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xB793510)
#define CLASS_1_A3277CB5E1A07D47_METHOD_1_46DB4169A68DB507_OFFSET UNITYSDK_OFFSET(0xB793450)
#define CLASS_1_A3277CB5E1A07D47_METHOD_1_B75E2195E90A782E_OFFSET UNITYSDK_OFFSET(0xB793570)
#define CLASS_1_A3277CB5E1A07D47__CTOR_OFFSET UNITYSDK_OFFSET(0xB793270)

inline static constexpr unsigned int Class_1_A3277CB5E1A07D47_TypeDefinitionIndex = 59120;

class Class_1_A3277CB5E1A07D47 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_639*>* GEJCMLOAOBG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3277CB5E1A07D47__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3277CB5E1A07D47_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1FCD2D53490C980D(::Class_0_16E4307DCC419505_639* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_639*))((::PBYTE)hIl2Cpp + CLASS_1_A3277CB5E1A07D47_METHOD_1_1FCD2D53490C980D_OFFSET))(this, a1);
	}

	::System::Void Method_1_46DB4169A68DB507(::Class_0_16E4307DCC419505_639* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_639*))((::PBYTE)hIl2Cpp + CLASS_1_A3277CB5E1A07D47_METHOD_1_46DB4169A68DB507_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A3277CB5E1A07D47_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_639*>* Method_1_B75E2195E90A782E()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_639*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3277CB5E1A07D47_METHOD_1_B75E2195E90A782E_OFFSET))(this);
	}
};
