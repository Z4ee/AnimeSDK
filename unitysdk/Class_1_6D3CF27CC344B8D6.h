#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9DEAB2783027603;
class Class_2_AF5BA1C65F12F4B1;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_6D3CF27CC344B8D6_METHOD_1_A4108F07FD35A962_OFFSET UNITYSDK_OFFSET(0x12C8EAF0)
#define CLASS_1_6D3CF27CC344B8D6_METHOD_1_ACB92D50CCA8FF21_OFFSET UNITYSDK_OFFSET(0x12C8FC50)
#define CLASS_1_6D3CF27CC344B8D6_METHOD_1_AEE5DA0FD1DAF700_OFFSET UNITYSDK_OFFSET(0x12C8F830)
#define CLASS_1_6D3CF27CC344B8D6_METHOD_1_C10ED328884F3B2F_OFFSET UNITYSDK_OFFSET(0x12C8EED0)

inline static constexpr unsigned int Class_1_6D3CF27CC344B8D6_TypeDefinitionIndex = 45425;

class Class_1_6D3CF27CC344B8D6 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_2 = 0x279E; // 0x0
	// static const ::System::Int32 Field_1_1 = 0xF79B9; // 0x0
	// static const ::System::Int32 Field_1_0 = 0xF79BA; // 0x0

	static ::System::Int32 Method_1_A4108F07FD35A962(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a1)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_6D3CF27CC344B8D6_METHOD_1_A4108F07FD35A962_OFFSET))(a1);
	}

	static ::System::Void Method_1_C10ED328884F3B2F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6D3CF27CC344B8D6_METHOD_1_C10ED328884F3B2F_OFFSET))(a1);
	}

	static ::System::Void Method_1_AEE5DA0FD1DAF700(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6D3CF27CC344B8D6_METHOD_1_AEE5DA0FD1DAF700_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_ACB92D50CCA8FF21(::Class_2_AF5BA1C65F12F4B1* a1, ::System::Int32 a2, ::Class_1_F9DEAB2783027603*& a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::Class_2_AF5BA1C65F12F4B1*, ::System::Int32, ::Class_1_F9DEAB2783027603*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6D3CF27CC344B8D6_METHOD_1_ACB92D50CCA8FF21_OFFSET))(a1, a2, a3, a4);
	}
};
