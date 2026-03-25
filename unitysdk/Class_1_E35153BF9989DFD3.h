#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_468;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_E35153BF9989DFD3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B8BB50)
#define CLASS_1_E35153BF9989DFD3_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x10B8BD40)
#define CLASS_1_E35153BF9989DFD3_METHOD_1_46DB4169A68DB507_OFFSET UNITYSDK_OFFSET(0x10B8BC80)
#define CLASS_1_E35153BF9989DFD3_METHOD_1_B75E2195E90A782E_OFFSET UNITYSDK_OFFSET(0x10B8BDA0)
#define CLASS_1_E35153BF9989DFD3_METHOD_1_EA8587082301D8CE_OFFSET UNITYSDK_OFFSET(0x10B8BBA0)
#define CLASS_1_E35153BF9989DFD3__CTOR_OFFSET UNITYSDK_OFFSET(0x10B8BAA0)

inline static constexpr unsigned int Class_1_E35153BF9989DFD3_TypeDefinitionIndex = 47640;

class Class_1_E35153BF9989DFD3 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_468*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E35153BF9989DFD3__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E35153BF9989DFD3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_EA8587082301D8CE(::Class_0_16E4307DCC419505_468* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_468*))((::PBYTE)hIl2Cpp + CLASS_1_E35153BF9989DFD3_METHOD_1_EA8587082301D8CE_OFFSET))(this, a1);
	}

	::System::Void Method_1_46DB4169A68DB507(::Class_0_16E4307DCC419505_468* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_468*))((::PBYTE)hIl2Cpp + CLASS_1_E35153BF9989DFD3_METHOD_1_46DB4169A68DB507_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E35153BF9989DFD3_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_468*>* Method_1_B75E2195E90A782E()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_468*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E35153BF9989DFD3_METHOD_1_B75E2195E90A782E_OFFSET))(this);
	}
};
