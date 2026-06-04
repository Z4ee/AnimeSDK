#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0BE9E9C1D5A3C687;
class Class_1_8625F1A4652A7BF2;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4780C96744815F8D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x139A7470)
#define CLASS_1_4780C96744815F8D_METHOD_1_010FF65F4E720CD3_OFFSET UNITYSDK_OFFSET(0x139A7DA0)
#define CLASS_1_4780C96744815F8D_METHOD_1_25733A6A650AA7B9_OFFSET UNITYSDK_OFFSET(0x139A7830)
#define CLASS_1_4780C96744815F8D_METHOD_1_40E5E69459C8E549_OFFSET UNITYSDK_OFFSET(0x139A74D0)
#define CLASS_1_4780C96744815F8D_METHOD_1_4D24AF6D3F0D4655_1_OFFSET UNITYSDK_OFFSET(0x139A7F60)
#define CLASS_1_4780C96744815F8D_METHOD_1_4D24AF6D3F0D4655_OFFSET UNITYSDK_OFFSET(0x139A7D20)
#define CLASS_1_4780C96744815F8D_METHOD_1_B012BBCE1D1451D3_OFFSET UNITYSDK_OFFSET(0x139A79A0)
#define CLASS_1_4780C96744815F8D__CTOR_OFFSET UNITYSDK_OFFSET(0x139A7460)

inline static constexpr unsigned int Class_1_4780C96744815F8D_TypeDefinitionIndex = 73779;

class Class_1_4780C96744815F8D : public ::System::Object
{
public:
	::Class_1_0BE9E9C1D5A3C687* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_0BE9E9C1D5A3C687* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0BE9E9C1D5A3C687*))((::PBYTE)hIl2Cpp + CLASS_1_4780C96744815F8D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4780C96744815F8D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_40E5E69459C8E549(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_4780C96744815F8D_METHOD_1_40E5E69459C8E549_OFFSET))(this, a1);
	}

	::System::Void Method_1_25733A6A650AA7B9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4780C96744815F8D_METHOD_1_25733A6A650AA7B9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_B012BBCE1D1451D3(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4780C96744815F8D_METHOD_1_B012BBCE1D1451D3_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::UInt32>* Method_1_4D24AF6D3F0D4655()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4780C96744815F8D_METHOD_1_4D24AF6D3F0D4655_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* Method_1_4D24AF6D3F0D4655_1()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4780C96744815F8D_METHOD_1_4D24AF6D3F0D4655_1_OFFSET))(this);
	}

	::Class_1_8625F1A4652A7BF2* Method_1_010FF65F4E720CD3()
	{
		return ((::Class_1_8625F1A4652A7BF2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4780C96744815F8D_METHOD_1_010FF65F4E720CD3_OFFSET))(this);
	}
};
