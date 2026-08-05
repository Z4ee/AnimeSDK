#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B8C1C279B44F3E7;
class Class_1_D375C91CCE5D3999;
class Class_2_604149159BD159AA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ED81D7B77E420A69_METHOD_1_1DCEDD99DA5C51AF_OFFSET UNITYSDK_OFFSET(0x14EE9390)
#define CLASS_1_ED81D7B77E420A69_METHOD_1_53F2932D5ECCCCCF_OFFSET UNITYSDK_OFFSET(0x14EE9070)
#define CLASS_1_ED81D7B77E420A69__CTOR_OFFSET UNITYSDK_OFFSET(0x14EE8FB0)

inline static constexpr unsigned int Class_1_ED81D7B77E420A69_TypeDefinitionIndex = 45884;

class Class_1_ED81D7B77E420A69 : public ::System::Object
{
public:
	::Class_2_604149159BD159AA* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_1_1B8C1C279B44F3E7*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_D375C91CCE5D3999*>* Field_1_0; // 0x20

	::System::Void _ctor(::Class_2_604149159BD159AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_604149159BD159AA*))((::PBYTE)hIl2Cpp + CLASS_1_ED81D7B77E420A69__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_1B8C1C279B44F3E7*>* Method_1_53F2932D5ECCCCCF()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1B8C1C279B44F3E7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED81D7B77E420A69_METHOD_1_53F2932D5ECCCCCF_OFFSET))(this);
	}

	::System::Void Method_1_1DCEDD99DA5C51AF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ED81D7B77E420A69_METHOD_1_1DCEDD99DA5C51AF_OFFSET))(this, a1);
	}
};
