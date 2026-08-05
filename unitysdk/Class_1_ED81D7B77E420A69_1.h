#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D375C91CCE5D3999;
class Class_2_604149159BD159AA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ED81D7B77E420A69_1_METHOD_1_57D6489AC60AE928_OFFSET UNITYSDK_OFFSET(0x175DC0A0)
#define CLASS_1_ED81D7B77E420A69_1_METHOD_1_E83C86A203FAF2A6_OFFSET UNITYSDK_OFFSET(0x175DC010)
#define CLASS_1_ED81D7B77E420A69_1__CTOR_OFFSET UNITYSDK_OFFSET(0x175DBF50)

inline static constexpr unsigned int Class_1_ED81D7B77E420A69_1_TypeDefinitionIndex = 84801;

class Class_1_ED81D7B77E420A69_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_D375C91CCE5D3999*>* Field_1_0; // 0x10
	::Class_1_D375C91CCE5D3999* Field_1_6; // 0x18
	::Class_2_604149159BD159AA* Field_1_5; // 0x20
	::System::Collections::Generic::List_1<::Class_1_D375C91CCE5D3999*>* Field_1_7; // 0x28

	::System::Void _ctor(::Class_2_604149159BD159AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_604149159BD159AA*))((::PBYTE)hIl2Cpp + CLASS_1_ED81D7B77E420A69_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_E83C86A203FAF2A6(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_1_ED81D7B77E420A69_1_METHOD_1_E83C86A203FAF2A6_OFFSET))(this, a1);
	}

	::System::Void Method_1_57D6489AC60AE928(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_1_ED81D7B77E420A69_1_METHOD_1_57D6489AC60AE928_OFFSET))(this, a1);
	}
};
