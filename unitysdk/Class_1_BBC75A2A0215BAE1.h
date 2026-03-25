#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3524D4AB5573BC21.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_066AB55B5826B0C9;
class Class_1_3D8DD98F0436E6C5;
namespace RPG { template <typename T> class PoolList_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BBC75A2A0215BAE1_CLEAR_OFFSET UNITYSDK_OFFSET(0x16827960)
#define CLASS_1_BBC75A2A0215BAE1_METHOD_1_36490951BC697BB8_OFFSET UNITYSDK_OFFSET(0x167F6C20)
#define CLASS_1_BBC75A2A0215BAE1_METHOD_1_3CAC12A314694432_OFFSET UNITYSDK_OFFSET(0x168281F0)
#define CLASS_1_BBC75A2A0215BAE1_METHOD_1_8995D664EE6E4F2A_OFFSET UNITYSDK_OFFSET(0x16828610)
#define CLASS_1_BBC75A2A0215BAE1_METHOD_1_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x16827AA0)
#define CLASS_1_BBC75A2A0215BAE1_METHOD_1_B67611D9D1B84A5D_OFFSET UNITYSDK_OFFSET(0x168282E0)
#define CLASS_1_BBC75A2A0215BAE1_METHOD_1_BE7D5FB0A528E6ED_OFFSET UNITYSDK_OFFSET(0x167F69A0)
#define CLASS_1_BBC75A2A0215BAE1_METHOD_1_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x167F6BD0)
#define CLASS_1_BBC75A2A0215BAE1__CTOR_OFFSET UNITYSDK_OFFSET(0x16828920)

inline static constexpr unsigned int Class_1_BBC75A2A0215BAE1_TypeDefinitionIndex = 33108;

class Class_1_BBC75A2A0215BAE1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Struct_2_3524D4AB5573BC21>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_1_066AB55B5826B0C9*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBC75A2A0215BAE1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BE7D5FB0A528E6ED(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_1_066AB55B5826B0C9*>* a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_1_066AB55B5826B0C9*>*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_BBC75A2A0215BAE1_METHOD_1_BE7D5FB0A528E6ED_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBC75A2A0215BAE1_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBC75A2A0215BAE1_METHOD_1_EC2B405D0723571D_OFFSET))(this);
	}

	::RPG::PoolList_1<::Struct_2_3524D4AB5573BC21>* Method_1_36490951BC697BB8()
	{
		return ((::RPG::PoolList_1<::Struct_2_3524D4AB5573BC21>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBC75A2A0215BAE1_METHOD_1_36490951BC697BB8_OFFSET))(this);
	}

	::System::Void Method_1_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBC75A2A0215BAE1_METHOD_1_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Boolean Method_1_B67611D9D1B84A5D(::Class_1_3D8DD98F0436E6C5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3D8DD98F0436E6C5*))((::PBYTE)hIl2Cpp + CLASS_1_BBC75A2A0215BAE1_METHOD_1_B67611D9D1B84A5D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3CAC12A314694432(::Class_1_066AB55B5826B0C9* a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_066AB55B5826B0C9*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_BBC75A2A0215BAE1_METHOD_1_3CAC12A314694432_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8995D664EE6E4F2A(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_1_066AB55B5826B0C9*>* a1, ::Class_1_066AB55B5826B0C9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_1_066AB55B5826B0C9*>*, ::Class_1_066AB55B5826B0C9*))((::PBYTE)hIl2Cpp + CLASS_1_BBC75A2A0215BAE1_METHOD_1_8995D664EE6E4F2A_OFFSET))(this, a1, a2);
	}
};
